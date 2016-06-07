CSTDFLAG = --std=c99 -pedantic -Wall -Wextra -Wno-unused-parameter
CPPFLAGS += -I src/core -I src/db
CPPFLAGS += -I tests -I tests/suites
CPPFLAGS += -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64
CPPFLAGS += -D_XOPEN_SOURCE=500
LDFLAGS += -lpthread

CFLAGS += -g

all: main test-runner

COMMON_OBJS := \
	src/core/EagleWorker.o \
	src/core/EagleSynchronizer.o \
	src/core/EagleDataType.o \
	src/core/EaglePlan.o \
	src/core/EagleData.o \
	src/core/EaglePageProvider.o \
	src/core/EagleObject.o \
	src/core/EagleLinkedListItem.o \
	src/core/EaglePage.o \
	src/core/EaglePlanJob.o \
	src/core/EagleMemory.o \
	src/core/EagleUtils.o \
	src/core/EagleLinkedList.o \
	src/core/EaglePageProviderArray.o \
	src/core/EagleWorkers.o \
	src/core/EaglePageProviderStream.o \
	src/core/EaglePlanBufferProvider.o \
	src/core/EagleLogger.o \
	src/core/EaglePageProviderVirtual.o \
	src/core/EagleLoggerEvent.o \
	src/core/EaglePlanOperation.o \
	src/core/EagleLock.o \
	src/core/EagleInstance.o \
	src/core/EaglePageProviderSingle.o \
	src/core/EaglePageOperations.o \
	src/core/EagleLoggerSeverity.o \
	src/db/EagleDbConsole.o \
	src/db/EagleDbInformationSchema.o \
	src/db/EagleDbSqlInsert.o \
	src/db/EagleDbSqlValueType.o \
	src/db/EagleDbSqlBinaryExpression.o \
	src/db/EagleDbSchema.o \
	src/db/EagleDbSqlBinaryExpressionOperator.o \
	src/db/EagleDbSqlSelect.o \
	src/db/EagleDbSqlUnaryExpressionOperator.o \
	src/db/EagleDbColumn.o \
	src/db/EagleDbSqlFunctionExpression.o \
	src/db/EagleDbSqlCastExpression.o \
	src/db/EagleDbSqlUnaryExpression.o \
	src/db/EagleDbSqlExpression.o \
	src/db/EagleDbTuple.o \
	src/db/EagleDbTableData.o \
	src/db/EagleDbTable.o \
	src/db/EagleDbInstance.o \
	src/db/EagleDbParser.o \
	src/db/EagleDbSqlValue.o

MAIN_OBJS := \
	src/main.o

TEST_OBJS := \
	tests/TestSuite.o \
	tests/suites/MainSuite2.o \
	tests/suites/DBSuite2.o \
	tests/suites/SQLSuite.o \
	tests/suites/MainSuite1.o \
	tests/suites/OperatorSuite.o \
	tests/suites/MemorySuite2.o \
	tests/suites/BenchSuite.o \
	tests/suites/MemorySuite1.o \
	tests/suites/SQLFuzzSuite.o \
	tests/suites/DBSuite1.o \
	tests/main.o

deps := $(COMMON_OBJS:%.o=%.o.d)
deps += $(MAIN_OBJS:%.o=%.o.d)
deps += $(TEST_OBJS:%.o=%.o.d)

main: $(COMMON_OBJS) $(MAIN_OBJS) y.tab.c lex.yy.c
	$(CC) $(CFLAGS) $(CSTDFLAG) $(CPPFLAGS) $(DEFINES) \
		-o main y.tab.c lex.yy.c $(COMMON_OBJS) $(MAIN_OBJS) -lpthread -lm -ly -include "EagleDbParser.h"

test-runner: $(COMMON_OBJS) $(TEST_OBJS) y.tab.c lex.yy.c
	$(CC) $(CFLAGS) $(CSTDFLAG) $(CPPFLAGS) $(DEFINES) \
		-o test-runner y.tab.c lex.yy.c \
		$(TEST_OBJS) $(COMMON_OBJS) \
		-lpthread -lm -ly -include "EagleDbParser.h" \
	       	-lcunit -lbsd

src/%.o: src/%.c
	$(CC) $(CFLAGS) $(CSTDFLAG) $(CPPFLAGS) $(DEFINES) \
		-o $@ -MMD -MF $@.d -c $<

tests/%.o: tests/%.c
	$(CC) $(CFLAGS) $(CSTDFLAG) $(CPPFLAGS) $(DEFINES) \
		-o $@ -MMD -MF $@.d -c $<

y.tab.c: sql.y
	bison -dy sql.y

lex.yy.c: sql.l
	flex sql.l

check: test-runner
	./test-runner --all-suites

clean:
	@rm -f $(COMMON_OBJS) $(MAIN_OBJS) $(TEST_OBJS) main test-runner \
		$(deps) y.tab.c lex.yy.c y.tab.h

.PHONY: all check clean

-include $(deps)
