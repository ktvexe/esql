#include "TestSuite.h"
#include <stdlib.h>
#include "EagleMemory.h"

CUnitTest* CUnitTest_New(const char *strName, CU_TestFunc pTestFunc)
{
    CUnitTest *test = (CUnitTest*) malloc(sizeof(CUnitTest));

    test->strName = strName;
    test->pTestFunc = pTestFunc;

    return test;
}

CUnitTests* CUnitTests_New(int allocatedTests)
{
    CUnitTests *tests = (CUnitTests*) malloc(sizeof(CUnitTests));

    tests->allocatedTests = allocatedTests;
    tests->usedTests = 0;
    tests->tests = (CUnitTest**) calloc((size_t) tests->allocatedTests, sizeof(CUnitTest*));

    return tests;
}

void CUnitTests_addTest(CUnitTests *tests, CUnitTest *test)
{
    if (tests->usedTests >= tests->allocatedTests) {
        printf("Suite isn't big enough (suite has limit of %d)!\n", tests->allocatedTests);
        exit(1);
    }

    tests->tests[tests->usedTests++] = test;
}

void CUnitTest_Delete(CUnitTest *obj)
{
    EagleMemory_Free((void*) obj);
}

void CUnitTests_Delete(CUnitTests *obj)
{
    for (int i = 0; i < obj->usedTests; ++i) {
        CUnitTest_Delete(obj->tests[i]);
    }
    EagleMemory_Free((void*) obj->tests);
    EagleMemory_Free((void*) obj);
}
