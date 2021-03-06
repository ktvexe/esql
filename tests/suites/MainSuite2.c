#include "MainSuite.h"
#include <stdio.h>
#include <stdlib.h>
#include "EagleData.h"
#include "EaglePageOperations.h"
#include "EagleInstance.h"
#include "EagleLinkedList.h"
#include "EagleMemory.h"
#include "EagleLogger.h"
#include "EagleUtils.h"
#include "EaglePageProviderStream.h"
#include "EaglePageProviderArray.h"
#include "EaglePageProviderSingle.h"
#include "EaglePageProviderVirtual.h"

CUNIT_TEST(MainSuite, EaglePageProvider_reset)
{
    EaglePageProviderSingle *epp = EaglePageProviderSingle_NewInt(123, 1, "bla");
    EaglePageProvider_reset((EaglePageProvider*) epp);
    EaglePageProviderSingle_Delete(epp);
}

CUNIT_TEST(MainSuite, EaglePageProviderVirtual_New)
{
    // create a virtual provider that acts like a single provider
    EaglePageProviderSingle *single = EaglePageProviderSingle_NewInt(123, 1, "name");
    EaglePageProviderVirtual *epp = EaglePageProviderVirtual_New(single->recordsPerPage,
                                    "name2",
                                    EagleDataTypeInteger,
                                    single,
                                    (void (*)(void*)) EaglePageProvider_Delete,
                                    (EagleBoolean(*)(void*, void*)) EaglePageProvider_add,
                                    (int (*)(void*)) EaglePageProvider_pagesRemaining,
                                    (EaglePage * (*)(void*)) EaglePageProvider_nextPage,
                                    (void (*)(void*)) EaglePageProvider_reset,
                                    (EaglePage * (*)(void*, int)) EaglePageProvider_getPage);

    // add
    CUNIT_VERIFY_EQUAL_INT(EaglePageProvider_add((EaglePageProvider*) epp, NULL), EaglePageProvider_add((EaglePageProvider*) single, NULL));

    // pagesRemaining
    CUNIT_VERIFY_EQUAL_INT(EaglePageProvider_pagesRemaining((EaglePageProvider*) epp), EaglePageProvider_pagesRemaining((EaglePageProvider*) single));

    // nextPage
    EaglePage *page1 = EaglePageProvider_nextPage((EaglePageProvider*) epp);
    EaglePage *page2 = EaglePageProvider_nextPage((EaglePageProvider*) single);
    CUNIT_VERIFY_EQUAL_INT(page1->count, page2->count);
    CUNIT_VERIFY_EQUAL_INT(page1->totalSize, page2->totalSize);
    EaglePage_Delete(page1);
    EaglePage_Delete(page2);

    // reset
    EaglePageProvider_reset((EaglePageProvider*) epp);
    EaglePageProvider_reset((EaglePageProvider*) single);

    EaglePageProvider_Delete((EaglePageProvider*) epp);
}

CUNIT_TEST(MainSuite, EaglePageProviderVirtual_Delete)
{
    EaglePageProviderVirtual_Delete(NULL);
}

CUNIT_TEST(MainSuite, EaglePageProviderArray_nextPage, Int)
{
    EaglePageProviderArray *epp = EaglePageProviderArray_New(EagleDataTypeInteger, NULL, 0, 1, "name");
    CUNIT_VERIFY_NULL(EaglePageProviderArray_nextPage(epp));
    EaglePageProvider_Delete((EaglePageProvider*) epp);
}

CUNIT_TEST(MainSuite, EaglePageProviderSingle_nextPage, 1)
{
    EaglePageProviderSingle *epp = EaglePageProviderSingle_NewInt(123, 1, "name");
    epp->type = EagleDataTypeUnknown;
    CUNIT_VERIFY_NULL(EaglePageProviderSingle_nextPage(epp));
    EaglePageProvider_Delete((EaglePageProvider*) epp);
}

CUNIT_TEST(MainSuite, EaglePageProviderSingle_nextPage, 2)
{
    int recordsPerPage = 5;
    EaglePageProviderSingle *epp = EaglePageProviderSingle_NewVarchar("some value", recordsPerPage, "name");

    EaglePage *page = EaglePageProviderSingle_nextPage(epp);
    CUNIT_ASSERT_NOT_NULL(page);
    CUNIT_VERIFY_EQUAL_INT(page->count, recordsPerPage);
    EaglePage_Delete(page);

    EaglePageProvider_Delete((EaglePageProvider*) epp);
}

CUNIT_TEST(MainSuite, EagleLinkedList_deleteObject, 1)
{
    int *obj1 = EagleData_Int(123);
    int *obj2 = EagleData_Int(456);
    EagleLinkedList *list = EagleLinkedList_New();

    // NULL object
    CUNIT_ASSERT_FALSE(EagleLinkedList_deleteObject(list, NULL));
    CUNIT_ASSERT_EQUAL_INT(0, EagleLinkedList_length(list));

    // empty list
    CUNIT_ASSERT_FALSE(EagleLinkedList_deleteObject(list, obj1));
    CUNIT_ASSERT_EQUAL_INT(0, EagleLinkedList_length(list));

    // one object
    EagleLinkedList_addObject(list, obj1, EagleFalse, NULL);
    CUNIT_ASSERT_EQUAL_INT(1, EagleLinkedList_length(list));

    CUNIT_ASSERT_FALSE(EagleLinkedList_deleteObject(list, obj2));
    CUNIT_ASSERT_EQUAL_INT(1, EagleLinkedList_length(list));
    CUNIT_ASSERT_NOT_NULL(list->first);
    CUNIT_ASSERT_NOT_NULL(list->last);

    CUNIT_ASSERT_TRUE(EagleLinkedList_deleteObject(list, obj1));
    CUNIT_ASSERT_EQUAL_INT(0, EagleLinkedList_length(list));
    CUNIT_ASSERT_NULL(list->first);
    CUNIT_ASSERT_NULL(list->last);

    EagleLinkedList_DeleteWithItems(list);
    EagleMemory_Free(obj1);
    EagleMemory_Free(obj2);
}

CUNIT_TEST(MainSuite, EagleLinkedList_deleteObject, 2)
{
    int *obj1 = EagleData_Int(123);
    int *obj2 = EagleData_Int(456);
    int *obj3 = EagleData_Int(789);
    int *obj4 = EagleData_Int(789);
    EagleLinkedList *list = EagleLinkedList_New();

    // add objects
    EagleLinkedList_addObject(list, obj1, EagleTrue, NULL);
    EagleLinkedList_addObject(list, obj2, EagleTrue, NULL);
    EagleLinkedList_addObject(list, obj3, EagleTrue, NULL);
    CUNIT_ASSERT_EQUAL_INT(3, EagleLinkedList_length(list));
    CUNIT_ASSERT_EQUAL_PTR(list->first->obj, obj1);
    CUNIT_ASSERT_EQUAL_PTR(list->last->obj, obj3);

    // object that doesn't exist
    CUNIT_ASSERT_FALSE(EagleLinkedList_deleteObject(list, obj4));
    CUNIT_ASSERT_EQUAL_INT(3, EagleLinkedList_length(list));
    CUNIT_ASSERT_NOT_NULL(list->first);
    CUNIT_ASSERT_NOT_NULL(list->last);

    // first object
    CUNIT_ASSERT_TRUE(EagleLinkedList_deleteObject(list, obj1));
    CUNIT_ASSERT_EQUAL_INT(2, EagleLinkedList_length(list));
    CUNIT_ASSERT_NOT_NULL(list->first);
    CUNIT_ASSERT_NOT_NULL(list->last);
    CUNIT_ASSERT_EQUAL_PTR(list->first->obj, obj2);
    CUNIT_ASSERT_EQUAL_PTR(list->last->obj, obj3);

    EagleLinkedList_DeleteWithItems(list);
    EagleMemory_Free(obj4);
}

CUNIT_TEST(MainSuite, EagleLinkedList_deleteObject, 3)
{
    int *obj1 = EagleData_Int(123);
    int *obj2 = EagleData_Int(456);
    int *obj3 = EagleData_Int(789);
    EagleLinkedList *list = EagleLinkedList_New();

    // add objects
    EagleLinkedList_addObject(list, obj1, EagleTrue, NULL);
    EagleLinkedList_addObject(list, obj2, EagleTrue, NULL);
    EagleLinkedList_addObject(list, obj3, EagleTrue, NULL);
    CUNIT_ASSERT_EQUAL_INT(3, EagleLinkedList_length(list));
    CUNIT_ASSERT_EQUAL_PTR(list->first->obj, obj1);
    CUNIT_ASSERT_EQUAL_PTR(list->last->obj, obj3);

    // middle object
    CUNIT_ASSERT_TRUE(EagleLinkedList_deleteObject(list, obj2));
    CUNIT_ASSERT_EQUAL_INT(2, EagleLinkedList_length(list));
    CUNIT_ASSERT_NOT_NULL(list->first);
    CUNIT_ASSERT_NOT_NULL(list->last);
    CUNIT_ASSERT_EQUAL_PTR(list->first->obj, obj1);
    CUNIT_ASSERT_EQUAL_PTR(list->last->obj, obj3);

    EagleLinkedList_DeleteWithItems(list);
}

CUNIT_TEST(MainSuite, EagleLinkedList_deleteObject, 4)
{
    int *obj1 = EagleData_Int(123);
    int *obj2 = EagleData_Int(456);
    int *obj3 = EagleData_Int(789);
    EagleLinkedList *list = EagleLinkedList_New();

    // add objects
    EagleLinkedList_addObject(list, obj1, EagleTrue, NULL);
    EagleLinkedList_addObject(list, obj2, EagleTrue, NULL);
    EagleLinkedList_addObject(list, obj3, EagleTrue, NULL);
    CUNIT_ASSERT_EQUAL_INT(3, EagleLinkedList_length(list));
    CUNIT_ASSERT_EQUAL_PTR(list->first->obj, obj1);
    CUNIT_ASSERT_EQUAL_PTR(list->last->obj, obj3);

    // last object
    CUNIT_ASSERT_TRUE(EagleLinkedList_deleteObject(list, obj3));
    CUNIT_ASSERT_EQUAL_INT(2, EagleLinkedList_length(list));
    CUNIT_ASSERT_NOT_NULL(list->first);
    CUNIT_ASSERT_NOT_NULL(list->last);
    CUNIT_ASSERT_EQUAL_PTR(list->first->obj, obj1);
    CUNIT_ASSERT_EQUAL_PTR(list->last->obj, obj2);

    EagleLinkedList_DeleteWithItems(list);
}

CUNIT_TEST(MainSuite, EaglePageProviderSingle_nextPage, 4)
{
    CUNIT_ASSERT_NULL(EaglePageProviderSingle_nextPage(NULL));
}

CUNIT_TEST(MainSuite, EaglePageProviderSingle_nextPage, 3)
{
    int recordsPerPage = 5;
    EaglePageProviderSingle *epp = EaglePageProviderSingle_NewFloat(123.0, recordsPerPage, "name");

    EaglePage *page = EaglePageProviderSingle_nextPage(epp);
    CUNIT_ASSERT_NOT_NULL(page);
    CUNIT_VERIFY_EQUAL_INT(page->count, recordsPerPage);
    EaglePage_Delete(page);

    EaglePageProvider_Delete((EaglePageProvider*) epp);
}

CUNIT_TEST(MainSuite, EagleWorker_runJobLiteral, 1)
{
    // redirect the errors to nowhere
    EagleLogger_Get()->out = NULL;

    EaglePlan *plan = EaglePlan_New(1, 1);

    EaglePlanOperation *op = EaglePlanOperation_NewWithLiteral(EaglePageOperations_AdditionInt, 10, 10, NULL, EagleFalse, "1");
    EaglePlan_addOperation(plan, op);
    EaglePlan_prepareBuffers(plan, 1);

    EaglePlanJob *job = EaglePlanJob_New(plan);

    EagleWorker_runJob(job);
    CUNIT_ASSERT_NOT_NULL(EagleLogger_Get()->lastEvent);
    CUNIT_VERIFY_EQUAL_STRING(EagleLogger_Get()->lastEvent->message, "destination 10 is greater than allowed 1 buffers!");

    op->destination = 0;
    EagleWorker_runJob(job);
    CUNIT_ASSERT_NOT_NULL(EagleLogger_Get()->lastEvent);
    CUNIT_VERIFY_EQUAL_STRING(EagleLogger_Get()->lastEvent->message, "source1 10 is greater than allowed 1 buffers!");

    EaglePlanOperation_Delete(op);
    EaglePlanJob_Delete(job);
    EaglePlan_Delete(plan);
}

CUNIT_TEST(MainSuite, EagleWorker_runJobLiteral, 2)
{
    // redirect the errors to nowhere
    EagleLogger_Get()->out = NULL;

    EaglePlan *plan = EaglePlan_New(1, 1);

    EaglePlanOperation *op = EaglePlanOperation_NewWithLiteral(EaglePageOperations_AdditionInt, 0, 1, NULL, EagleFalse, "1");
    EaglePlan_addOperation(plan, op);
    EaglePlan_prepareBuffers(plan, 2);

    {
        plan->bufferTypes[0] = EagleDataTypeInteger;
        plan->bufferTypes[1] = EagleDataTypeInteger;

        EaglePlanJob *job = EaglePlanJob_New(plan);

        op->obj = EagleDbSqlValue_NewWithInteger(123);
        EagleWorker_runJob(job);
        EagleDbSqlValue_Delete(op->obj);

        EaglePlanJob_Delete(job);
    }

    {
        plan->bufferTypes[0] = EagleDataTypeInteger;
        plan->bufferTypes[1] = EagleDataTypeInteger;

        EaglePlanJob *job = EaglePlanJob_New(plan);

        op->obj = EagleDbSqlValue_NewWithFloat(123.456);
        EagleWorker_runJob(job);
        EagleDbSqlValue_Delete(op->obj);

        EaglePlanJob_Delete(job);
    }

    {
        plan->bufferTypes[0] = EagleDataTypeInteger;
        plan->bufferTypes[1] = EagleDataTypeInteger;

        EaglePlanJob *job = EaglePlanJob_New(plan);

        op->obj = EagleDbSqlValue_NewWithString("abc", EagleFalse);
        EagleWorker_runJob(job);
        EagleDbSqlValue_Delete(op->obj);

        EaglePlanJob_Delete(job);
    }

    {
        plan->bufferTypes[0] = EagleDataTypeInteger;
        plan->bufferTypes[1] = EagleDataTypeInteger;

        EaglePlanJob *job = EaglePlanJob_New(plan);

        op->obj = EagleDbSqlValue_NewWithAsterisk();
        EagleWorker_runJob(job);
        EagleDbSqlValue_Delete(op->obj);

        EaglePlanJob_Delete(job);
    }

    EaglePlanOperation_Delete(op);
    EaglePlan_Delete(plan);
}

CUNIT_TEST(MainSuite, EaglePlanBufferProvider_NewWithValue)
{
    EagleDbSqlValue *value = EagleDbSqlValue_NewWithFloat(123.456);
    EaglePlanBufferProvider *provider = EaglePlanBufferProvider_NewWithValue(1, value);

    CUNIT_ASSERT_NOT_NULL(provider);
    CUNIT_VERIFY_EQUAL_INT(provider->type, EaglePlanBufferProviderTypeValue);
    CUNIT_VERIFY_EQUAL_INT(provider->destinationBuffer, 1);

    EagleDbSqlValue_Delete(value);
    EaglePlanBufferProvider_Delete(provider);
}

CUNIT_TEST(MainSuite, EaglePlanBufferProvider_toString, 2)
{
    EagleDbSqlValue *value = EagleDbSqlValue_NewWithFloat(123.456);
    EaglePlanBufferProvider *bp = EaglePlanBufferProvider_NewWithValue(789, value);

    char *description = EaglePlanBufferProvider_toString(bp);
    CUNIT_ASSERT_EQUAL_STRING(description, "destination = 789, type = FLOAT");

    EagleDbSqlValue_Delete(value);
    EagleMemory_Free(description);
    EaglePlanBufferProvider_Delete(bp);
}

CUNIT_TEST(MainSuite, EaglePageOperations_SendPageToProviderFloat_)
{
    int recordsPerPage = 1;
    EaglePage *source1 = EaglePage_AllocInt(recordsPerPage);
    EaglePage *source2 = EaglePage_AllocFloat(recordsPerPage);
    EaglePageProvider *provider = (EaglePageProvider*) EaglePageProviderStream_New(EagleDataTypeFloat, recordsPerPage, "dummy");

    EagleDataTypeIntegerType *source1data = (EagleDataTypeIntegerType*) source1->data;
    source1data[0] = 1;
    CUNIT_VERIFY_EQUAL_INT(EaglePageProvider_pagesRemaining(provider), 0);
    EaglePageOperations_SendPageToProviderFloat_(provider, source1, source2);
    CUNIT_VERIFY_EQUAL_INT(EaglePageProvider_pagesRemaining(provider), 1);

    EaglePage_Delete(source1);
    EaglePage_Delete(source2);
    EaglePageProvider_Delete(provider);
}

CUNIT_TEST(MainSuite, EaglePageProviderStream_getPage)
{
    CUNIT_VERIFY_NULL(EaglePageProviderStream_getPage(NULL, 0));
}

CUNIT_TEST(MainSuite, EaglePageProviderSingle_getPage)
{
    int recordsPerPage = 5;
    EaglePageProviderSingle *epp = EaglePageProviderSingle_NewVarchar("some value", recordsPerPage, "name");

    EaglePage *page1 = EaglePageProviderSingle_nextPage(epp);
    EaglePage *page2 = EaglePageProviderSingle_getPage(epp, 0);
    CUNIT_ASSERT_NOT_NULL(page1);
    CUNIT_ASSERT_NOT_NULL(page2);
    CUNIT_VERIFY_EQUAL_INT(page1->count, recordsPerPage);
    CUNIT_VERIFY_EQUAL_INT(page2->count, recordsPerPage);
    EaglePage_Delete(page1);
    EaglePage_Delete(page2);

    EaglePageProvider_Delete((EaglePageProvider*) epp);
}

CUNIT_TEST(MainSuite, EaglePageProviderVirtual_isRandomAccess)
{
    EaglePageProviderVirtual *epp = EaglePageProviderVirtual_New(1, "name", EagleDataTypeInteger, NULL, NULL, NULL,
                                    NULL, NULL, NULL, NULL);

    CUNIT_VERIFY_FALSE(EaglePageProvider_isRandomAccess((EaglePageProvider*) epp));

    epp->getPage = (EaglePage * (*)(void*, int)) EaglePageProvider_getPage;
    CUNIT_VERIFY_TRUE(EaglePageProvider_isRandomAccess((EaglePageProvider*) epp));

    EaglePageProvider_Delete((EaglePageProvider*) epp);
}

CUNIT_TEST(MainSuite, EaglePageProviderVirtual_getPage)
{
    EaglePageProviderVirtual *epp = EaglePageProviderVirtual_New(1, "name", EagleDataTypeInteger, NULL, NULL, NULL,
                                    NULL, NULL, NULL,
                                    (EaglePage * (*)(void*, int)) EaglePageProviderStream_getPage);

    CUNIT_VERIFY_NULL(EaglePageProvider_getPage((EaglePageProvider*) epp, 0));

    EaglePageProvider_Delete((EaglePageProvider*) epp);
}

CUNIT_TEST(MainSuite, EaglePageProvider_getPage)
{
    {
        EaglePageProvider *provider = (EaglePageProvider*) EaglePageProviderArray_New(EagleDataTypeInteger, NULL, 0, 1, "name");
        EaglePage *page = EaglePageProvider_getPage(provider, 0);
        CUNIT_VERIFY_NULL(page);
        EaglePageProvider_Delete(provider);
    }

    {
        EaglePageProvider *provider = (EaglePageProvider*) EaglePageProviderSingle_NewInt(0, 1, "name");
        EaglePage *page = EaglePageProvider_getPage(provider, 0);
        CUNIT_VERIFY_NOT_NULL(page);
        EaglePage_Delete(page);
        EaglePageProvider_Delete(provider);
    }

    {
        EaglePageProvider *provider = (EaglePageProvider*) EaglePageProviderStream_New(EagleDataTypeInteger, 1, "name");
        EaglePage *page = EaglePageProvider_getPage(provider, 0);
        CUNIT_VERIFY_NULL(page);
        EaglePageProvider_Delete(provider);
    }
}

CUNIT_TEST(MainSuite, EagleInstance_nextJob, 2)
{
    int cores = 1;
    EagleDbSqlValue *value = EagleDbSqlValue_NewWithInteger(123);
    EaglePlan *p = EaglePlan_New(1, cores);
    EaglePlanBufferProvider *bp = EaglePlanBufferProvider_NewWithValue(0, value);
    EaglePlan_addBufferProvider(p, bp, EagleFalse);

    EagleInstance *instance = EagleInstance_New(cores);
    EagleInstance_addPlan(instance, p);
    EaglePlanJob *job = EagleInstance_nextJob(instance, 0);
    CUNIT_VERIFY_NULL(job);

    EagleInstance_Delete(instance);
    EaglePlan_Delete(p);
    EaglePlanBufferProvider_Delete(bp);
    EaglePlanJob_Delete(job);
    EagleDbSqlValue_Delete(value);
}

CUNIT_TEST(MainSuite, EaglePageProviderArray_nextPage, Float)
{
    EagleDataTypeFloatType *data = EagleData_Float(123.456);
    EaglePageProviderArray *epp = EaglePageProviderArray_New(EagleDataTypeFloat, data, 1, 1, "name");
    EaglePage *page = EaglePageProviderArray_nextPage(epp);
    CUNIT_VERIFY_NOT_NULL(page);
    EaglePage_Delete(page);
    EaglePageProvider_Delete((EaglePageProvider*) epp);
    EagleMemory_Free(data);
}

CUNIT_TEST(MainSuite, EaglePageProviderArray_nextPage, Varchar)
{
    EagleDataTypeVarcharType *data = (EagleDataTypeVarcharType*) malloc(sizeof(EagleDataTypeVarcharType));
    data[0] = "whatever";
    EaglePageProviderArray *epp = EaglePageProviderArray_New(EagleDataTypeVarchar, (void*) data, 1, 1, "name");
    EaglePage *page = EaglePageProviderArray_nextPage(epp);
    CUNIT_VERIFY_NOT_NULL(page);
    EaglePage_Delete(page);
    EaglePageProvider_Delete((EaglePageProvider*) epp);
    EagleMemory_Free(data);
}

CUNIT_TEST(MainSuite, EaglePageProviderArray_nextPage, Unknown)
{
    EaglePageProviderArray *epp = EaglePageProviderArray_New(EagleDataTypeUnknown, NULL, 1, 1, "name");
    CUNIT_VERIFY_NULL(EaglePageProviderArray_nextPage(epp));
    EaglePageProvider_Delete((EaglePageProvider*) epp);
}

CUNIT_TEST(MainSuite, EaglePageProviderArray_getPage, Integer)
{
    EagleDataTypeIntegerType *data = EagleData_Int(123);
    EaglePageProviderArray *epp = EaglePageProviderArray_New(EagleDataTypeInteger, data, 1, 1, "name");
    EaglePage *page = EaglePageProviderArray_getPage(epp, 0);
    CUNIT_VERIFY_NOT_NULL(page);
    EaglePage_Delete(page);
    EaglePageProvider_Delete((EaglePageProvider*) epp);
    EagleMemory_Free(data);
}

CUNIT_TEST(MainSuite, EaglePageProviderArray_getPage, Float)
{
    EagleDataTypeFloatType *data = EagleData_Float(123.456);
    EaglePageProviderArray *epp = EaglePageProviderArray_New(EagleDataTypeFloat, data, 1, 1, "name");
    EaglePage *page = EaglePageProviderArray_getPage(epp, 0);
    CUNIT_VERIFY_NOT_NULL(page);
    EaglePage_Delete(page);
    EaglePageProvider_Delete((EaglePageProvider*) epp);
    EagleMemory_Free(data);
}

CUNIT_TEST(MainSuite, EaglePageProviderArray_getPage, Varchar)
{
    EagleDataTypeVarcharType *data = (EagleDataTypeVarcharType*) malloc(sizeof(EagleDataTypeVarcharType));
    data[0] = "whatever";
    EaglePageProviderArray *epp = EaglePageProviderArray_New(EagleDataTypeVarchar, data, 1, 1, "name");
    EaglePage *page = EaglePageProviderArray_getPage(epp, 0);
    CUNIT_VERIFY_NOT_NULL(page);
    EaglePage_Delete(page);
    EaglePageProvider_Delete((EaglePageProvider*) epp);
    EagleMemory_Free(data);
}

CUNIT_TEST(MainSuite, EaglePageProviderArray_getPage, Unknown)
{
    EaglePageProviderArray *epp = EaglePageProviderArray_New(EagleDataTypeUnknown, NULL, 1, 1, "name");
    CUNIT_VERIFY_NULL(EaglePageProviderArray_getPage(epp, 0));
    EaglePageProvider_Delete((EaglePageProvider*) epp);
}

CUNIT_TEST(MainSuite, EaglePlan_getRealExecutionSeconds)
{
    int cores = 1;
    EaglePlan *p = EaglePlan_New(1, cores);

    double time = EaglePlan_getRealExecutionSeconds(p);
    CUNIT_VERIFY_EQUAL_DOUBLE(0.0, time);

    p->startTime = 1000000;
    time = EaglePlan_getRealExecutionSeconds(p);
    CUNIT_VERIFY_EQUAL_DOUBLE(0.001, time);

    EaglePlan_Delete(p);
}

CUNIT_TEST(MainSuite, EaglePageProviderSingle_isRandomAccess)
{
    EaglePageProvider *provider = (EaglePageProvider*) EaglePageProviderSingle_NewInt(123, 1, "dummy");
    CUNIT_VERIFY_TRUE(EaglePageProvider_isRandomAccess(provider));
    EaglePageProvider_Delete(provider);
}

CUNIT_TEST(MainSuite, EaglePageProviderStream_isRandomAccess)
{
    EaglePageProvider *provider = (EaglePageProvider*) EaglePageProviderStream_New(EagleDataTypeInteger, 1, "dummy");
    CUNIT_VERIFY_FALSE(EaglePageProvider_isRandomAccess(provider));
    EaglePageProvider_Delete(provider);
}

CUNIT_TEST(MainSuite, EaglePageProviderArray_isRandomAccess)
{
    EaglePageProvider *provider = (EaglePageProvider*) EaglePageProviderArray_New(EagleDataTypeInteger, NULL, 0, 1, "dummy");
    CUNIT_VERIFY_TRUE(EaglePageProvider_isRandomAccess(provider));
    EaglePageProvider_Delete(provider);
}

CUNIT_TEST(MainSuite, EaglePage_RealCopyInt_)
{
    EagleDataTypeIntegerType *data = (EagleDataTypeIntegerType*) calloc(sizeof(EagleDataTypeIntegerType), 3);
    data[0] = 123;
    data[1] = 456;
    data[2] = 789;

    EaglePage *page = EaglePage_New(EagleDataTypeInteger, data, 3, 3, 0, EagleTrue);

    EaglePage *page2 = EaglePage_RealCopy(page);
    CUNIT_ASSERT_TRUE(EaglePage_equals(page, page2));
    EaglePage_Delete(page2);

    EaglePage_Delete(page);
}

CUNIT_TEST(MainSuite, EaglePage_RealCopyFloat_)
{
    EagleDataTypeFloatType *data = (EagleDataTypeFloatType*) calloc(sizeof(EagleDataTypeFloatType), 3);
    data[0] = 123.0;
    data[1] = 456.0;
    data[2] = 789.0;

    EaglePage *page = EaglePage_New(EagleDataTypeFloat, data, 3, 3, 0, EagleTrue);

    EaglePage *page2 = EaglePage_RealCopy(page);
    CUNIT_ASSERT_TRUE(EaglePage_equals(page, page2));
    EaglePage_Delete(page2);

    EaglePage_Delete(page);
}

CUNIT_TEST(MainSuite, EaglePage_RealCopyVarchar_)
{
    EagleDataTypeVarcharType *data = (EagleDataTypeVarcharType*) calloc(sizeof(EagleDataTypeVarcharType), 3);
    data[0] = strdup("123");
    data[1] = strdup("456");
    data[2] = strdup("789");

    EaglePage *page = EaglePage_New(EagleDataTypeVarchar, data, 3, 3, 0, EagleTrue);

    EaglePage *page2 = EaglePage_RealCopy(page);
    CUNIT_ASSERT_TRUE(EaglePage_equals(page, page2));
    EaglePage_Delete(page2);

    EaglePage_Delete(page);
}

CUnitTests* MainSuite2_tests()
{
    CUnitTests *tests = CUnitTests_New(100);

    // method tests
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePage_RealCopyVarchar_));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePage_RealCopyFloat_));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePage_RealCopyInt_));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderArray_isRandomAccess));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderStream_isRandomAccess));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderSingle_isRandomAccess));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePlan_getRealExecutionSeconds));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderArray_getPage, Unknown));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderArray_getPage, Varchar));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderArray_getPage, Float));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderArray_getPage, Integer));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderArray_nextPage, Unknown));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderArray_nextPage, Varchar));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderArray_nextPage, Float));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProvider_getPage));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderVirtual_getPage));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderVirtual_isRandomAccess));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderSingle_getPage));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderStream_getPage));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageOperations_SendPageToProviderFloat_));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePlanBufferProvider_toString, 2));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePlanBufferProvider_NewWithValue));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EagleWorker_runJobLiteral, 2));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EagleWorker_runJobLiteral, 1));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderSingle_nextPage, 3));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderSingle_nextPage, 4));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderSingle_nextPage, 2));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderSingle_nextPage, 1));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderArray_nextPage, Int));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderVirtual_Delete));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProviderVirtual_New));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EaglePageProvider_reset));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EagleLinkedList_deleteObject, 4));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EagleLinkedList_deleteObject, 3));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EagleLinkedList_deleteObject, 2));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EagleLinkedList_deleteObject, 1));
    CUnitTests_addTest(tests, CUNIT_NEW(MainSuite, EagleInstance_nextJob, 2));

    return tests;
}
