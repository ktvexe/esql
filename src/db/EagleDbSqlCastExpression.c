#include <stdlib.h>
#include <stdio.h>
#include "EagleDbSqlCastExpression.h"
#include "EagleMemory.h"

EagleDbSqlCastExpression* EagleDbSqlCastExpression_New(EagleDbSqlExpression *expr, EagleDataType castAs)
{
    EagleDbSqlCastExpression *exp = (EagleDbSqlCastExpression*) EagleMemory_Allocate("EagleDbSqlCastExpression_New.1", sizeof(EagleDbSqlCastExpression));
    if (!exp) return NULL;

    exp->expressionType = EagleDbSqlExpressionTypeCastExpression;
    exp->expr = expr;
    exp->castAs = castAs;

    return exp;
}

void EagleDbSqlCastExpression_Delete(EagleDbSqlCastExpression *expr)
{
    if (!expr) return;

    EagleMemory_Free(expr);
}

void EagleDbSqlCastExpression_DeleteRecursive(EagleDbSqlCastExpression *expr)
{
    if (!expr) return;

    EagleDbSqlExpression_DeleteRecursive((EagleDbSqlExpression*) expr->expr);
    EagleMemory_Free(expr);
}

char* EagleDbSqlCastExpression_toString(EagleDbSqlCastExpression *expr)
{
    char *s = (char *) EagleMemory_Allocate("EagleDbSqlCastExpression_toString.1", 1024), *exp, *castAs;
    if (!s) return NULL;

    exp = EagleDbSqlExpression_toString(expr->expr);
    castAs = EagleDataType_typeToName(expr->castAs);

    sprintf(s, "CAST(%s AS %s)", exp, castAs);

    EagleMemory_Free(exp);
    EagleMemory_Free(castAs);
    return s;
}

EagleBoolean EagleDbSqlCastExpression_GetOperation(EagleDataType left,
        EagleDataType right,
        EagleDbSqlCastOperator *match)
{
    unsigned long i;
    static EagleDbSqlCastOperator ops[] = {
        { EagleDataTypeInteger, EagleDataTypeFloat, EaglePageOperations_CastPageIntFloat }
    };

    for (i = 0; i < sizeof(ops) / sizeof(EagleDbSqlCastOperator); ++i) {
        if (left == ops[i].left && right == ops[i].right) {
            *match = ops[i];
            return EagleTrue;
        }
    }

    return EagleFalse;
}
