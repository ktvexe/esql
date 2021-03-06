#include "MemorySuite.h"
#include <stdio.h>
#include <stdlib.h>
#include "EagleMemory.h"
#include "EagleData.h"
#include "EagleDbColumn.h"
#include "EagleDbConsole.h"
#include "EagleDbInstance.h"
#include "EagleDbSqlBinaryExpression.h"
#include "EagleDbSqlValue.h"
#include "EagleDbSqlSelect.h"
#include "EagleDbTableData.h"
#include "EagleLinkedList.h"
#include "EagleDbTuple.h"
#include "EagleInstance.h"
#include "EaglePlanJob.h"
#include "EagleWorker.h"
#include "EagleWorkers.h"
#include "EaglePage.h"
#include "EaglePlan.h"
#include "EagleDbSchema.h"
#include "EagleLogger.h"
#include "EagleDbParser.h"
#include "EagleDbSqlUnaryExpression.h"
#include "EaglePageProviderStream.h"
#include "EaglePageProviderArray.h"
#include "EaglePageProviderSingle.h"
#include "EaglePageProviderVirtual.h"
#include "EagleDbInformationSchema.h"
#include "EagleUtils.h"

CUNIT_TEST(MemorySuite, EagleData_Int)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleData_Int.1");

    CUNIT_ASSERT_NULL(EagleData_Int(123));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbColumn_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbColumn_New.1");

    CUNIT_ASSERT_NULL(EagleDbColumn_New("abc", EagleDataTypeInteger));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbConsole_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbConsole_New.1");

    CUNIT_ASSERT_NULL(EagleDbConsole_New());

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbConsole_GetLine)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbConsole_GetLine.1");

    CUNIT_ASSERT_NULL(EagleDbConsole_GetLine());

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbInstance_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbInstance_New.1");

    CUNIT_ASSERT_NULL(EagleDbInstance_New(1000, 1));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlBinaryExpression_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlBinaryExpression_New.1");

    CUNIT_ASSERT_NULL(EagleDbSqlBinaryExpression_New(NULL, EagleDbSqlBinaryExpressionOperatorEquals, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlBinaryExpression_toString)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlBinaryExpression_toString.1");

    CUNIT_ASSERT_NULL(EagleDbSqlBinaryExpression_toString(NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlUnaryExpression_toString)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlUnaryExpression_toString.1");

    CUNIT_ASSERT_NULL(EagleDbSqlUnaryExpression_toString(NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlSelect_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlSelect_New.1");

    CUNIT_ASSERT_NULL(EagleDbSqlSelect_New());

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlValue_NewWithInteger)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlValue_NewWithInteger.1");

    CUNIT_ASSERT_NULL(EagleDbSqlValue_NewWithInteger(123));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlValue_NewWithAsterisk)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlValue_NewWithAsterisk.1");

    CUNIT_ASSERT_NULL(EagleDbSqlValue_NewWithAsterisk());

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlValue_NewWithIdentifier)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlValue_NewWithIdentifier.1");

    CUNIT_ASSERT_NULL(EagleDbSqlValue_NewWithIdentifier("something"));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbTable_New_1)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbTable_New.1");

    CUNIT_ASSERT_NULL(EagleDbTable_New("something"));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbTableData_New_1)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbTableData_New.1");

    EagleDbTable *table = EagleDbTable_New("mytable");
    CUNIT_ASSERT_NULL(EagleDbTableData_New(table, 1000));
    EagleDbTable_Delete(table);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbTableData_New_2)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbTableData_New.2");

    EagleDbTable *table = EagleDbTable_New("mytable");
    EagleDbColumn *column = EagleDbColumn_New("test", EagleDataTypeInteger);
    EagleDbTable_addColumn(table, column);
    CUNIT_ASSERT_NULL(EagleDbTableData_New(table, 1000));
    EagleDbTable_DeleteWithColumns(table);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbTuple_New_1)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbTuple_New.1");

    EagleDbTable *table = EagleDbTable_New("mytable");
    CUNIT_ASSERT_NULL(EagleDbTuple_New(table));
    EagleDbTable_Delete(table);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbTuple_New_2)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbTuple_New.2");

    EagleDbTable *table = EagleDbTable_New("mytable");
    CUNIT_ASSERT_NULL(EagleDbTuple_New(table));
    EagleDbTable_Delete(table);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbTuple_toString)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbTuple_toString.1");

    CUNIT_ASSERT_NULL(EagleDbTuple_toString(NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleInstance_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleInstance_New.1");

    CUNIT_ASSERT_NULL(EagleInstance_New(1));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleLinkedListItem_NewWithDescription)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleLinkedListItem_NewWithDescription.1");

    CUNIT_ASSERT_NULL(EagleLinkedListItem_NewWithDescription(NULL, EagleFalse, NULL, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleLinkedList_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleLinkedList_New.1");

    CUNIT_ASSERT_NULL(EagleLinkedList_New());

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePage_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePage_New.1");

    CUNIT_ASSERT_NULL(EaglePage_New(EagleDataTypeUnknown, NULL, 0, 0, 0, EagleFalse));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePage_CopyInt_)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePage_CopyInt_.1");

    EaglePage *page = EaglePage_AllocInt(1);
    CUNIT_ASSERT_NULL(EaglePage_RealCopyInt_(page));
    EaglePage_Delete(page);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePage_toString)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePage_toString.1");

    CUNIT_ASSERT_NULL(EaglePage_toString(NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePageProviderArray_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePageProviderArray_New.1");

    CUNIT_ASSERT_NULL(EaglePageProviderArray_New(EagleDataTypeInteger, NULL, 0, 0, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePageProviderStream_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePageProviderStream_New.1");

    CUNIT_ASSERT_NULL(EaglePageProviderStream_New(EagleDataTypeUnknown, 0, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePlan_New_1)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePlan_New.1");

    EaglePlan *plan = EaglePlan_New(1, 1);
    CUNIT_ASSERT_NULL(plan);
    EaglePlan_Delete(plan);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePlan_toString_1)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePlan_toString.1");

    EaglePlan *plan = EaglePlan_New(1, 1);
    CUNIT_ASSERT_NULL(EaglePlan_toString(plan));
    EaglePlan_Delete(plan);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePlan_toString_2)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePlan_toString.2");

    EaglePlan *plan = EaglePlan_New(1, 1);
    EaglePlan_prepareBuffers(plan, 1);
    CUNIT_ASSERT_NULL(EaglePlan_toString(plan));
    EaglePlan_Delete(plan);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePlanBufferProvider_NewWithProvider)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePlanBufferProvider_NewWithProvider.1");

    CUNIT_ASSERT_NULL(EaglePlanBufferProvider_NewWithProvider(0, NULL, EagleFalse));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePlanBufferProvider_toString)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePlanBufferProvider_toString.1");

    CUNIT_ASSERT_NULL(EaglePlanBufferProvider_toString(NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePlanJob_New_1)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePlanJob_New.1");

    EaglePlan *plan = EaglePlan_New(1, 1);
    CUNIT_ASSERT_NULL(EaglePlanJob_New(plan));
    EaglePlan_Delete(plan);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePlanJob_New_2)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePlanJob_New.2");

    EaglePlan *plan = EaglePlan_New(1, 1);
    CUNIT_ASSERT_NULL(EaglePlanJob_New(plan));
    EaglePlan_Delete(plan);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePlanOperation_NewWithLiteral)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePlanOperation_NewWithLiteral.1");

    CUNIT_ASSERT_NULL(EaglePlanOperation_NewWithLiteral(NULL, 0, 0, NULL, EagleFalse, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePlanOperation_NewWithPage)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePlanOperation_NewWithPage.1");

    CUNIT_ASSERT_NULL(EaglePlanOperation_NewWithPage(NULL, 0, 0, 0, NULL, EagleFalse, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleSynchronizer_CreateLock)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleSynchronizer_CreateLock.1");

    CUNIT_ASSERT_NULL(EagleSynchronizer_CreateLock());

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleWorker_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleWorker_New.1");

    CUNIT_ASSERT_NULL(EagleWorker_New(1, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleWorkers_New_1)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleWorkers_New.1");

    CUNIT_ASSERT_NULL(EagleWorkers_New(1, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleWorkers_New_2)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleWorkers_New.2");

    CUNIT_ASSERT_NULL(EagleWorkers_New(1, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbInstance_PrintResults_1)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbInstance_PrintResults.1");

    EaglePlan *plan = EaglePlan_New(1, 1);
    plan->resultFields = 1;
    plan->result = (EaglePageProvider**) calloc(1, sizeof(EaglePageProvider*));
    plan->result[0] = (EaglePageProvider*) EaglePageProviderSingle_NewInt(1, 1, "name");
    EagleDbInstance_PrintResults(plan);

    EaglePageProvider_Delete(plan->result[0]);
    EaglePlan_Delete(plan);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbInstance_PrintResults_2)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbInstance_PrintResults.2");

    EaglePlan *plan = EaglePlan_New(1, 1);
    plan->resultFields = 1;
    plan->result = (EaglePageProvider**) calloc(1, sizeof(EaglePageProvider*));
    int data[1];
    plan->result[0] = (EaglePageProvider*) EaglePageProviderArray_New(EagleDataTypeInteger, data, 1, 1, "name");
    EagleDbInstance_PrintResults(plan);

    EaglePageProvider_Delete(plan->result[0]);
    EaglePlan_Delete(plan);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlExpression_CompilePlan_1)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlExpression_CompilePlan.1");

    EaglePlan *plan = EaglePlan_New(1, 1);
    EagleDbSqlExpression_CompilePlan(NULL, 0, -1, NULL);
    EagleDbSqlExpression_CompilePlan(NULL, 0, -1, plan);
    EaglePlan_Delete(plan);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlExpression_CompilePlan_2)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlExpression_CompilePlan.2");

    EaglePlan *plan = EaglePlan_New(1, 1);
    EagleDbSqlExpression_CompilePlan(NULL, 0, -1, plan);
    EaglePlan_Delete(plan);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlSelect_parse_2)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlSelect_parse.2");

    EagleDbSqlSelect *select = EagleDbSqlSelect_New();
    select->tableName = strdup("mytable");
    EagleDbInstance *instance = EagleDbInstance_New(1000, 1);

    EagleDbSchema *schema = EagleDbInstance_getSchema(instance, EagleDbSchema_DefaultSchemaName);
    EagleDbTable *table = EagleDbTable_New("mytable");
    EagleDbTableData *td = EagleDbTableData_New(table, 1000);
    EagleDbSchema_addTable(schema, td);

    CUNIT_ASSERT_NULL(EagleDbSqlSelect_parse(select, instance));

    EagleDbSqlSelect_DeleteRecursive(select);
    EagleDbTable_Delete(table);
    EagleDbTableData_Delete(td);
    EagleDbInstance_Delete(instance);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePage_AllocInt)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePage_AllocInt.1");

    CUNIT_ASSERT_NULL(EaglePage_AllocInt(1));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePage_AllocVarchar)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePage_AllocVarchar.1");

    CUNIT_ASSERT_NULL(EaglePage_AllocVarchar(1));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePage_CopyVarchar_)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePage_CopyVarchar_.1");

    EaglePage *page = EaglePage_AllocVarchar(1);
    CUNIT_ASSERT_NULL(EaglePage_RealCopyVarchar_(page));
    EaglePage_Delete(page);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePageProviderSingle_NewInt)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePageProviderSingle_NewInt.1");

    CUNIT_ASSERT_NULL(EaglePageProviderSingle_NewInt(0, 1, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePlan_prepareBuffers)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePlan_prepareBuffers.1");

    EaglePlan *plan = EaglePlan_New(1, 1);
    EaglePlan_prepareBuffers(plan, 2);
    EaglePlan_Delete(plan);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSchema_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSchema_New.1");

    EagleDbSchema *schema = EagleDbSchema_New("public");
    EagleDbSchema_Delete(schema);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleLoggerEvent_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleLoggerEvent_New.1");

    EagleLoggerEvent *event = EagleLoggerEvent_New(EagleLoggerSeverityDebug, "something");
    EagleLoggerEvent_Delete(event);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleLogger_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleLogger_New.1");

    EagleLogger *logger = EagleLogger_New(stderr);
    CUNIT_ASSERT_NULL(logger);
    EagleLogger_Delete(logger);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbParser_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbParser_New.1");

    EagleDbParser *parser = EagleDbParser_New();
    CUNIT_ASSERT_NULL(parser);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleLinkedList_toArray)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleLinkedList_toArray.1");

    EagleLinkedList *list = EagleLinkedList_New();
    int size;
    void **d = EagleLinkedList_toArray(list, &size);
    CUNIT_ASSERT_NULL(d);
    EagleLinkedList_DeleteWithItems(list);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlInsert_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlInsert_New.1");

    EagleDbSqlInsert *insert = EagleDbSqlInsert_New();
    CUNIT_ASSERT_NULL(insert);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlSelect_toString)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlSelect_toString.1");

    CUNIT_VERIFY_NULL(EagleDbSqlSelect_toString(NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlUnaryExpression_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlUnaryExpression_New.1");

    CUNIT_VERIFY_NULL(EagleDbSqlUnaryExpression_New(EagleDbSqlUnaryExpressionOperatorNot, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePageProviderSingle_nextPage_1)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePageProviderSingle_nextPage.1");

    EaglePageProviderSingle *epp = EaglePageProviderSingle_NewInt(123, 1, "bla");
    CUNIT_VERIFY_NULL(EaglePageProviderSingle_nextPage(epp));
    EaglePageProviderSingle_Delete(epp);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePageProviderVirtual_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePageProviderVirtual_New.1");

    CUNIT_VERIFY_NULL(EaglePageProviderVirtual_New(1, NULL, EagleDataTypeUnknown, NULL, NULL, NULL, NULL, NULL, NULL, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbInformationSchema_New)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbInformationSchema_New.1");

    CUNIT_VERIFY_NULL(EagleDbInformationSchema_New(NULL, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbInformationSchema_tables_nextPage)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbInformationSchema_tables_nextPage.1");

    EagleDbInstance *db = EagleDbInstance_New(10, 1);
    EagleDbInformationSchema *infoSchema = EagleDbInformationSchema_New(db, NULL);

    CUNIT_VERIFY_NULL(EagleDbInformationSchema_tables_nextPage(infoSchema));

    EagleDbInstance_Delete(db);
    EagleDbInformationSchema_Delete(infoSchema);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleUtils_ToLowerCaseCopy)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleUtils_ToLowerCaseCopy.1");

    CUNIT_VERIFY_NULL(EagleUtils_ToLowerCaseCopy(NULL));

    CUNIT_VERIFY_NULL(EagleUtils_ToLowerCaseCopy("abc"));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlValue_NewWithString_1)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlValue_NewWithString.1");

    CUNIT_ASSERT_NULL(EagleDbSqlValue_NewWithString("something", EagleFalse));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlValue_NewWithString_2)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlValue_NewWithString.2");

    CUNIT_ASSERT_NULL(EagleDbSqlValue_NewWithString("'something'", EagleTrue));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePageProviderSingle_NewVarchar)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePageProviderSingle_NewVarchar.1");

    CUNIT_ASSERT_NULL(EaglePageProviderSingle_NewVarchar("", 1, NULL));

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EaglePageProviderSingle_nextPage_2)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EaglePageProviderSingle_nextPage.2");

    EaglePageProviderSingle *epp = EaglePageProviderSingle_NewVarchar("123", 1, "bla");
    CUNIT_VERIFY_NULL(EaglePageProviderSingle_nextPage(epp));
    EaglePageProviderSingle_Delete(epp);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUNIT_TEST(MemorySuite, EagleDbSqlValue_toString)
{
    EagleMemory_MockInit();
    EagleMemory_Mock("EagleDbSqlValue_toString.1");

    CUNIT_VERIFY_NULL(EagleDbSqlValue_toString(NULL));

    EagleDbSqlValue *value = EagleDbSqlValue_NewWithString("abc", EagleFalse);
    CUNIT_VERIFY_NULL(EagleDbSqlValue_toString(value));
    EagleDbSqlValue_Delete(value);

    CUNIT_ASSERT_EQUAL_INT(EagleMemory_GetMockInvocations(), 1);
    EagleMemory_MockFinish();
}

CUnitTests* MemorySuite1_tests()
{
    CUnitTests *tests = CUnitTests_New(100);

    // method tests
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePlanOperation_NewWithLiteral));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlValue_toString));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePageProviderSingle_NewVarchar));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePageProviderSingle_nextPage_2));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlValue_NewWithString_2));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlValue_NewWithString_1));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleUtils_ToLowerCaseCopy));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbInformationSchema_New));
//    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbInformationSchema_tables_nextPage));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePageProviderVirtual_New));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePageProviderSingle_nextPage_1));
//    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlUnaryExpression_toString));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlUnaryExpression_New));
//    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlSelect_toString));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlInsert_New));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleLinkedList_toArray));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbParser_New));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleData_Int));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbColumn_New));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbConsole_New));
//    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbConsole_GetLine));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbInstance_New));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlBinaryExpression_New));
//    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlBinaryExpression_toString));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlSelect_New));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlValue_NewWithInteger));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlValue_NewWithAsterisk));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlValue_NewWithIdentifier));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbTable_New_1));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbTableData_New_1));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbTuple_New_1));
//    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbTuple_toString));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleInstance_New));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleLinkedListItem_NewWithDescription));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleLinkedList_New));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePage_New));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePage_CopyInt_));
//    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePage_toString));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePageProviderArray_New));
//    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePageProviderStream_New));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePlan_New_1));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePlan_toString_1));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePlan_toString_2));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePlanBufferProvider_NewWithProvider));
//    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePlanBufferProvider_toString));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePlanJob_New_1));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePlanOperation_NewWithPage));
//    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleSynchronizer_CreateLock));
//    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleWorker_New));
//    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleWorkers_New_1));
//    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbInstance_PrintResults_1));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbInstance_PrintResults_2));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSchema_New));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlExpression_CompilePlan_1));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlExpression_CompilePlan_2));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbSqlSelect_parse_2));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbTableData_New_2));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleDbTuple_New_2));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePage_AllocInt));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePage_AllocVarchar));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePage_CopyVarchar_));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePageProviderSingle_NewInt));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePlan_prepareBuffers));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EaglePlanJob_New_2));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleWorkers_New_2));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleLoggerEvent_New));
    CUnitTests_addTest(tests, CUNIT_NEW(MemorySuite, EagleLogger_New));

    return tests;
}

/**
 * The suite init function.
 */
int MemorySuite_init()
{
    return 0;
}

/**
 * The suite cleanup function.
 */
int MemorySuite_clean()
{
    return 0;
}
