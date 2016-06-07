%{
    
    #include <stdlib.h>
    #include "y.tab.h"
    #include "EagleDbParser.h"
    
    #define YYSTYPE void*
    #define YY_EXTRA_TYPE EagleDbParser*
    
    void comment(void);

%}

/* SQL standard is not case sensitive */
%option case-insensitive

/* this parser must be thread safe */
%option warn nodefault
%option reentrant noyywrap never-interactive nounistd
%option bison-bridge

white [ \t\n\r]+
identifier [a-zA-Z_][a-zA-Z0-9_]*
integer -?[0-9]+
comment_single \-\-[^\n]*
string_literal '([^\']|''|\')*'
float -?[0-9]+\.[0-9]+

%x COMMENT

/*
 === NOTE ===
 if you change this list of keywords you must update EagleDbParser_IsKeyword() and the 'keyword' bison rule.
 */
%%
"ADD" return K_ADD;
"ALL" return K_ALL;
"ALLOCATE" return K_ALLOCATE;
"ALTER" return K_ALTER;
"AND" return K_AND;
"ANY" return K_ANY;
"ARE" return K_ARE;
"ARRAY" return K_ARRAY;
"AS" return K_AS;
"ASENSITIVE" return K_ASENSITIVE;
"ASYMMETRIC" return K_ASYMMETRIC;
"AT" return K_AT;
"ATOMIC" return K_ATOMIC;
"AUTHORIZATION" return K_AUTHORIZATION;
"BEGIN" return K_BEGIN;
"BETWEEN" return K_BETWEEN;
"BIGINT" return K_BIGINT;
"BINARY" return K_BINARY;
"BIT" return K_BIT;
"BLOB" return K_BLOB;
"BOOLEAN" return K_BOOLEAN;
"BOTH" return K_BOTH;
"BY" return K_BY;
"CALL" return K_CALL;
"CALLED" return K_CALLED;
"CASCADED" return K_CASCADED;
"CASE" return K_CASE;
"CAST" return K_CAST;
"CHAR" return K_CHAR;
"CHARACTER" return K_CHARACTER;
"CHECK" return K_CHECK;
"CLOB" return K_CLOB;
"CLOSE" return K_CLOSE;
"COLLATE" return K_COLLATE;
"COLUMN" return K_COLUMN;
"COMMIT" return K_COMMIT;
"CONNECT" return K_CONNECT;
"CONSTRAINT" return K_CONSTRAINT;
"CONTINUE" return K_CONTINUE;
"CORRESPONDING" return K_CORRESPONDING;
"CREATE" return K_CREATE;
"CROSS" return K_CROSS;
"CUBE" return K_CUBE;
"CURRENT" return K_CURRENT;
"CURRENT_DATE" return K_CURRENT_DATE;
"CURRENT_DEFAULT_TRANSFORM_GROUP" return K_CURRENT_DEFAULT_TRANSFORM_GROUP;
"CURRENT_PATH" return K_CURRENT_PATH;
"CURRENT_ROLE" return K_CURRENT_ROLE;
"CURRENT_TIME" return K_CURRENT_TIME;
"CURRENT_TIMESTAMP" return K_CURRENT_TIMESTAMP;
"CURRENT_TRANSFORM_GROUP_FOR_TYPE" return K_CURRENT_TRANSFORM_GROUP_FOR_TYPE;
"CURRENT_USER" return K_CURRENT_USER;
"CURSOR" return K_CURSOR;
"CYCLE" return K_CYCLE;
"DATE" return K_DATE;
"DAY" return K_DAY;
"DEALLOCATE" return K_DEALLOCATE;
"DEC" return K_DEC;
"DECIMAL" return K_DECIMAL;
"DECLARE" return K_DECLARE;
"DEFAULT" return K_DEFAULT;
"DELETE" return K_DELETE;
"DEREF" return K_DEREF;
"DESCRIBE" return K_DESCRIBE;
"DETERMINISTIC" return K_DETERMINISTIC;
"DISCONNECT" return K_DISCONNECT;
"DISTINCT" return K_DISTINCT;
"DOUBLE" return K_DOUBLE;
"DROP" return K_DROP;
"DYNAMIC" return K_DYNAMIC;
"EACH" return K_EACH;
"ELEMENT" return K_ELEMENT;
"ELSE" return K_ELSE;
"END" return K_END;
"END-EXEC" return K_END_EXEC;
"ESCAPE" return K_ESCAPE;
"EXCEPT" return K_EXCEPT;
"EXEC" return K_EXEC;
"EXECUTE" return K_EXECUTE;
"EXISTS" return K_EXISTS;
"EXTERNAL" return K_EXTERNAL;
"FALSE" return K_FALSE;
"FETCH" return K_FETCH;
"FILTER" return K_FILTER;
"FLOAT" return K_FLOAT;
"FOR" return K_FOR;
"FOREIGN" return K_FOREIGN;
"FREE" return K_FREE;
"FROM" return K_FROM;
"FULL" return K_FULL;
"FUNCTION" return K_FUNCTION;
"GET" return K_GET;
"GLOBAL" return K_GLOBAL;
"GRANT" return K_GRANT;
"GROUP" return K_GROUP;
"GROUPING" return K_GROUPING;
"HAVING" return K_HAVING;
"HOLD" return K_HOLD;
"HOUR" return K_HOUR;
"IDENTITY" return K_IDENTITY;
"IMMEDIATE" return K_IMMEDIATE;
"IN" return K_IN;
"INDICATOR" return K_INDICATOR;
"INNER" return K_INNER;
"INOUT" return K_INOUT;
"INPUT" return K_INPUT;
"INSENSITIVE" return K_INSENSITIVE;
"INSERT" return K_INSERT;
"INT" return K_INT;
"INTEGER" return K_INTEGER;
"INTERSECT" return K_INTERSECT;
"INTERVAL" return K_INTERVAL;
"INTO" return K_INTO;
"IS" return K_IS;
"ISOLATION" return K_ISOLATION;
"JOIN" return K_JOIN;
"LANGUAGE" return K_LANGUAGE;
"LARGE" return K_LARGE;
"LATERAL" return K_LATERAL;
"LEADING" return K_LEADING;
"LEFT" return K_LEFT;
"LIKE" return K_LIKE;
"LOCAL" return K_LOCAL;
"LOCALTIME" return K_LOCALTIME;
"LOCALTIMESTAMP" return K_LOCALTIMESTAMP;
"MATCH" return K_MATCH;
"MEMBER" return K_MEMBER;
"MERGE" return K_MERGE;
"METHOD" return K_METHOD;
"MINUTE" return K_MINUTE;
"MODIFIES" return K_MODIFIES;
"MODULE" return K_MODULE;
"MONTH" return K_MONTH;
"MULTISET" return K_MULTISET;
"NATIONAL" return K_NATIONAL;
"NATURAL" return K_NATURAL;
"NCHAR" return K_NCHAR;
"NCLOB" return K_NCLOB;
"NEW" return K_NEW;
"NO" return K_NO;
"NONE" return K_NONE;
"NOT" return K_NOT;
"NULL" return K_NULL;
"NUMERIC" return K_NUMERIC;
"OF" return K_OF;
"OLD" return K_OLD;
"ON" return K_ON;
"ONLY" return K_ONLY;
"OPEN" return K_OPEN;
"OR" return K_OR;
"ORDER" return K_ORDER;
"OUT" return K_OUT;
"OUTER" return K_OUTER;
"OUTPUT" return K_OUTPUT;
"OVER" return K_OVER;
"OVERLAPS" return K_OVERLAPS;
"PARAMETER" return K_PARAMETER;
"PARTITION" return K_PARTITION;
"PRECISION" return K_PRECISION;
"PREPARE" return K_PREPARE;
"PRIMARY" return K_PRIMARY;
"PROCEDURE" return K_PROCEDURE;
"RANGE" return K_RANGE;
"READS" return K_READS;
"REAL" return K_REAL;
"RECURSIVE" return K_RECURSIVE;
"REF" return K_REF;
"REFERENCES" return K_REFERENCES;
"REFERENCING" return K_REFERENCING;
"REGR_AVGX" return K_REGR_AVGX;
"REGR_AVGY" return K_REGR_AVGY;
"REGR_COUNT" return K_REGR_COUNT;
"REGR_INTERCEPT" return K_REGR_INTERCEPT;
"REGR_R2" return K_REGR_R2;
"REGR_SLOPE" return K_REGR_SLOPE;
"REGR_SXX" return K_REGR_SXX;
"REGR_SXY" return K_REGR_SXY;
"REGR_SYY" return K_REGR_SYY;
"RELEASE" return K_RELEASE;
"RESULT" return K_RESULT;
"RETURN" return K_RETURN;
"RETURNS" return K_RETURNS;
"REVOKE" return K_REVOKE;
"RIGHT" return K_RIGHT;
"ROLLBACK" return K_ROLLBACK;
"ROLLUP" return K_ROLLUP;
"ROW" return K_ROW;
"ROWS" return K_ROWS;
"SAVEPOINT" return K_SAVEPOINT;
"SCROLL" return K_SCROLL;
"SEARCH" return K_SEARCH;
"SECOND" return K_SECOND;
"SELECT" return K_SELECT;
"SENSITIVE" return K_SENSITIVE;
"SESSION_USER" return K_SESSION_USER;
"SET" return K_SET;
"SIMILAR" return K_SIMILAR;
"SMALLINT" return K_SMALLINT;
"SOME" return K_SOME;
"SPECIFIC" return K_SPECIFIC;
"SPECIFICTYPE" return K_SPECIFICTYPE;
"SQL" return K_SQL;
"SQLEXCEPTION" return K_SQLEXCEPTION;
"SQLSTATE" return K_SQLSTATE;
"SQLWARNING" return K_SQLWARNING;
"START" return K_START;
"STATIC" return K_STATIC;
"SUBMULTISET" return K_SUBMULTISET;
"SYMMETRIC" return K_SYMMETRIC;
"SYSTEM" return K_SYSTEM;
"SYSTEM_USER" return K_SYSTEM_USER;
"TABLE" return K_TABLE;
"THEN" return K_THEN;
"TIME" return K_TIME;
"TIMESTAMP" return K_TIMESTAMP;
"TIMEZONE_HOUR" return K_TIMEZONE_HOUR;
"TIMEZONE_MINUTE" return K_TIMEZONE_MINUTE;
"TO" return K_TO;
"TRAILING" return K_TRAILING;
"TRANSLATION" return K_TRANSLATION;
"TREAT" return K_TREAT;
"TRIGGER" return K_TRIGGER;
"TRUE" return K_TRUE;
"UESCAPE" return K_UESCAPE;
"UNION" return K_UNION;
"UNIQUE" return K_UNIQUE;
"UNKNOWN" return K_UNKNOWN;
"UNNEST" return K_UNNEST;
"UPDATE" return K_UPDATE;
"UPPER" return K_UPPER;
"USER" return K_USER;
"USING" return K_USING;
"VALUE" return K_VALUE;
"VALUES" return K_VALUES;
"VAR_POP" return K_VAR_POP;
"VAR_SAMP" return K_VAR_SAMP;
"VARCHAR" return K_VARCHAR;
"VARYING" return K_VARYING;
"WHEN" return K_WHEN;
"WHENEVER" return K_WHENEVER;
"WHERE" return K_WHERE;
"WIDTH_BUCKET" return K_WIDTH_BUCKET;
"WINDOW" return K_WINDOW;
"WITH" return K_WITH;
"WITHIN" return K_WITHIN;
"WITHOUT" return K_WITHOUT;
"YEAR" return K_YEAR;

"A" return K_A;
"ABS" return K_ABS;
"ABSOLUTE" return K_ABSOLUTE;
"ACTION" return K_ACTION;
"ADA" return K_ADA;
"ADMIN" return K_ADMIN;
"AFTER" return K_AFTER;
"ALWAYS" return K_ALWAYS;
"ASC" return K_ASC;
"ASSERTION" return K_ASSERTION;
"ASSIGNMENT" return K_ASSIGNMENT;
"ATTRIBUTE" return K_ATTRIBUTE;
"ATTRIBUTES" return K_ATTRIBUTES;
"AVG" return K_AVG;
"BEFORE" return K_BEFORE;
"BERNOULLI" return K_BERNOULLI;
"BREADTH" return K_BREADTH;
"C" return K_C;
"CARDINALITY" return K_CARDINALITY;
"CASCADE" return K_CASCADE;
"CATALOG" return K_CATALOG;
"CATALOG_NAME" return K_CATALOG_NAME;
"CEIL" return K_CEIL;
"CEILING" return K_CEILING;
"CHAIN" return K_CHAIN;
"CHARACTERISTICS" return K_CHARACTERISTICS;
"CHARACTERS" return K_CHARACTERS;
"CHARACTER_LENGTH" return K_CHARACTER_LENGTH;
"CHARACTER_SET_CATALOG" return K_CHARACTER_SET_CATALOG;
"CHARACTER_SET_NAME" return K_CHARACTER_SET_NAME;
"CHARACTER_SET_SCHEMA" return K_CHARACTER_SET_SCHEMA;
"CHAR_LENGTH" return K_CHAR_LENGTH;
"CHECKED" return K_CHECKED;
"CLASS_ORIGIN" return K_CLASS_ORIGIN;
"COALESCE" return K_COALESCE;
"COBOL" return K_COBOL;
"CODE_UNITS" return K_CODE_UNITS;
"COLLATION" return K_COLLATION;
"COLLATION_CATALOG" return K_COLLATION_CATALOG;
"COLLATION_NAME" return K_COLLATION_NAME;
"COLLATION_SCHEMA" return K_COLLATION_SCHEMA;
"COLLECT" return K_COLLECT;
"COLUMN_NAME" return K_COLUMN_NAME;
"COMMAND_FUNCTION" return K_COMMAND_FUNCTION;
"COMMAND_FUNCTION_CODE" return K_COMMAND_FUNCTION_CODE;
"COMMITTED" return K_COMMITTED;
"CONDITION" return K_CONDITION;
"CONDITION_NUMBER" return K_CONDITION_NUMBER;
"CONNECTION_NAME" return K_CONNECTION_NAME;
"CONSTRAINTS" return K_CONSTRAINTS;
"CONSTRAINT_CATALOG" return K_CONSTRAINT_CATALOG;
"CONSTRAINT_NAME" return K_CONSTRAINT_NAME;
"CONSTRAINT_SCHEMA" return K_CONSTRAINT_SCHEMA;
"CONSTRUCTORS" return K_CONSTRUCTORS;
"CONTAINS" return K_CONTAINS;
"CONVERT" return K_CONVERT;
"CORR" return K_CORR;
"COUNT" return K_COUNT;
"COVAR_POP" return K_COVAR_POP;
"COVAR_SAMP" return K_COVAR_SAMP;
"CUME_DIST" return K_CUME_DIST;
"CURRENT_COLLATION" return K_CURRENT_COLLATION;
"CURSOR_NAME" return K_CURSOR_NAME;
"DATA" return K_DATA;
"DATETIME_INTERVAL_CODE" return K_DATETIME_INTERVAL_CODE;
"DATETIME_INTERVAL_PRECISION" return K_DATETIME_INTERVAL_PRECISION;
"DEFAULTS" return K_DEFAULTS;
"DEFERRABLE" return K_DEFERRABLE;
"DEFERRED" return K_DEFERRED;
"DEFINED" return K_DEFINED;
"DEFINER" return K_DEFINER;
"DEGREE" return K_DEGREE;
"DENSE_RANK" return K_DENSE_RANK;
"DEPTH" return K_DEPTH;
"DERIVED" return K_DERIVED;
"DESC" return K_DESC;
"DESCRIPTOR" return K_DESCRIPTOR;
"DIAGNOSTICS" return K_DIAGNOSTICS;
"DISPATCH" return K_DISPATCH;
"DOMAIN" return K_DOMAIN;
"DYNAMIC_FUNCTION" return K_DYNAMIC_FUNCTION;
"DYNAMIC_FUNCTION_CODE" return K_DYNAMIC_FUNCTION_CODE;
"EQUALS" return K_EQUALS;
"EVERY" return K_EVERY;
"EXCEPTION" return K_EXCEPTION;
"EXCLUDE" return K_EXCLUDE;
"EXCLUDING" return K_EXCLUDING;
"EXP" return K_EXP;
"EXTRACT" return K_EXTRACT;
"FINAL" return K_FINAL;
"FIRST" return K_FIRST;
"FLOOR" return K_FLOOR;
"FOLLOWING" return K_FOLLOWING;
"FORTRAN" return K_FORTRAN;
"FOUND" return K_FOUND;
"FUSION" return K_FUSION;
"G" return K_G;
"GENERAL" return K_GENERAL;
"GO" return K_GO;
"GOTO" return K_GOTO;
"GRANTED" return K_GRANTED;
"HIERARCHY" return K_HIERARCHY;
"IMPLEMENTATION" return K_IMPLEMENTATION;
"INCLUDING" return K_INCLUDING;
"INCREMENT" return K_INCREMENT;
"INITIALLY" return K_INITIALLY;
"INSTANCE" return K_INSTANCE;
"INSTANTIABLE" return K_INSTANTIABLE;
"INTERSECTION" return K_INTERSECTION;
"INVOKER" return K_INVOKER;
"K" return K_K;
"KEY" return K_KEY;
"KEY_MEMBER" return K_KEY_MEMBER;
"KEY_TYPE" return K_KEY_TYPE;
"LAST" return K_LAST;
"LENGTH" return K_LENGTH;
"LEVEL" return K_LEVEL;
"LN" return K_LN;
"LOCATOR" return K_LOCATOR;
"LOWER" return K_LOWER;
"M" return K_M;
"MAP" return K_MAP;
"MATCHED" return K_MATCHED;
"MAX" return K_MAX;
"MAXVALUE" return K_MAXVALUE;
"MESSAGE_LENGTH" return K_MESSAGE_LENGTH;
"MESSAGE_OCTET_LENGTH" return K_MESSAGE_OCTET_LENGTH;
"MESSAGE_TEXT" return K_MESSAGE_TEXT;
"MIN" return K_MIN;
"MINVALUE" return K_MINVALUE;
"MOD" return K_MOD;
"MORE" return K_MORE;
"MUMPS" return K_MUMPS;
"NAME" return K_NAME;
"NAMES" return K_NAMES;
"NESTING" return K_NESTING;
"NEXT" return K_NEXT;
"NORMALIZE" return K_NORMALIZE;
"NORMALIZED" return K_NORMALIZED;
"NULLABLE" return K_NULLABLE;
"NULLIF" return K_NULLIF;
"NULLS" return K_NULLS;
"NUMBER" return K_NUMBER;
"OBJECT" return K_OBJECT;
"OCTETS" return K_OCTETS;
"OCTET_LENGTH" return K_OCTET_LENGTH;
"OPTION" return K_OPTION;
"OPTIONS" return K_OPTIONS;
"ORDERING" return K_ORDERING;
"ORDINALITY" return K_ORDINALITY;
"OTHERS" return K_OTHERS;
"OVERLAY" return K_OVERLAY;
"OVERRIDING" return K_OVERRIDING;
"PAD" return K_PAD;
"PARAMETER_MODE" return K_PARAMETER_MODE;
"PARAMETER_NAME" return K_PARAMETER_NAME;
"PARAMETER_ORDINAL_POSITION" return K_PARAMETER_ORDINAL_POSITION;
"PARAMETER_SPECIFIC_CATALOG" return K_PARAMETER_SPECIFIC_CATALOG;
"PARAMETER_SPECIFIC_NAME" return K_PARAMETER_SPECIFIC_NAME;
"PARAMETER_SPECIFIC_SCHEMA" return K_PARAMETER_SPECIFIC_SCHEMA;
"PARTIAL" return K_PARTIAL;
"PASCAL" return K_PASCAL;
"PATH" return K_PATH;
"PERCENTILE_CONT" return K_PERCENTILE_CONT;
"PERCENTILE_DISC" return K_PERCENTILE_DISC;
"PERCENT_RANK" return K_PERCENT_RANK;
"PLACING" return K_PLACING;
"PLI" return K_PLI;
"POSITION" return K_POSITION;
"POWER" return K_POWER;
"PRECEDING" return K_PRECEDING;
"PRESERVE" return K_PRESERVE;
"PRIOR" return K_PRIOR;
"PRIVILEGES" return K_PRIVILEGES;
"PUBLIC" return K_PUBLIC;
"RANK" return K_RANK;
"READ" return K_READ;
"RELATIVE" return K_RELATIVE;
"REPEATABLE" return K_REPEATABLE;
"RESTART" return K_RESTART;
"RETURNED_CARDINALITY" return K_RETURNED_CARDINALITY;
"RETURNED_LENGTH" return K_RETURNED_LENGTH;
"RETURNED_OCTET_LENGTH" return K_RETURNED_OCTET_LENGTH;
"RETURNED_SQLSTATE" return K_RETURNED_SQLSTATE;
"ROLE" return K_ROLE;
"ROUTINE" return K_ROUTINE;
"ROUTINE_CATALOG" return K_ROUTINE_CATALOG;
"ROUTINE_NAME" return K_ROUTINE_NAME;
"ROUTINE_SCHEMA" return K_ROUTINE_SCHEMA;
"ROW_COUNT" return K_ROW_COUNT;
"ROW_NUMBER" return K_ROW_NUMBER;
"SCALE" return K_SCALE;
"SCHEMA" return K_SCHEMA;
"SCHEMA_NAME" return K_SCHEMA_NAME;
"SCOPE_CATALOG" return K_SCOPE_CATALOG;
"SCOPE_NAME" return K_SCOPE_NAME;
"SCOPE_SCHEMA" return K_SCOPE_SCHEMA;
"SECTION" return K_SECTION;
"SECURITY" return K_SECURITY;
"SELF" return K_SELF;
"SEQUENCE" return K_SEQUENCE;
"SERIALIZABLE" return K_SERIALIZABLE;
"SERVER_NAME" return K_SERVER_NAME;
"SESSION" return K_SESSION;
"SETS" return K_SETS;
"SIMPLE" return K_SIMPLE;
"SIZE" return K_SIZE;
"SOURCE" return K_SOURCE;
"SPACE" return K_SPACE;
"SPECIFIC_NAME" return K_SPECIFIC_NAME;
"SQRT" return K_SQRT;
"STATE" return K_STATE;
"STATEMENT" return K_STATEMENT;
"STDDEV_POP" return K_STDDEV_POP;
"STDDEV_SAMP" return K_STDDEV_SAMP;
"STRUCTURE" return K_STRUCTURE;
"STYLE" return K_STYLE;
"SUBCLASS_ORIGIN" return K_SUBCLASS_ORIGIN;
"SUBSTRING" return K_SUBSTRING;
"SUM" return K_SUM;
"TABLESAMPLE" return K_TABLESAMPLE;
"TABLE_NAME" return K_TABLE_NAME;
"TEMPORARY" return K_TEMPORARY;
"TIES" return K_TIES;
"TOP_LEVEL_COUNT" return K_TOP_LEVEL_COUNT;
"TRANSACTION" return K_TRANSACTION;
"TRANSACTIONS_COMMITTED" return K_TRANSACTIONS_COMMITTED;
"TRANSACTIONS_ROLLED_BACK" return K_TRANSACTIONS_ROLLED_BACK;
"TRANSACTION_ACTIVE" return K_TRANSACTION_ACTIVE;
"TRANSFORM" return K_TRANSFORM;
"TRANSFORMS" return K_TRANSFORMS;
"TRANSLATE" return K_TRANSLATE;
"TRIGGER_CATALOG" return K_TRIGGER_CATALOG;
"TRIGGER_NAME" return K_TRIGGER_NAME;
"TRIGGER_SCHEMA" return K_TRIGGER_SCHEMA;
"TRIM" return K_TRIM;
"TYPE" return K_TYPE;
"UNBOUNDED" return K_UNBOUNDED;
"UNCOMMITTED" return K_UNCOMMITTED;
"UNDER" return K_UNDER;
"UNNAMED" return K_UNNAMED;
"USAGE" return K_USAGE;
"USER_DEFINED_TYPE_CATALOG" return K_USER_DEFINED_TYPE_CATALOG;
"USER_DEFINED_TYPE_CODE" return K_USER_DEFINED_TYPE_CODE;
"USER_DEFINED_TYPE_NAME" return K_USER_DEFINED_TYPE_NAME;
"USER_DEFINED_TYPE_SCHEMA" return K_USER_DEFINED_TYPE_SCHEMA;
"VIEW" return K_VIEW;
"WORK" return K_WORK;
"WRITE" return K_WRITE;
"ZONE" return K_ZONE;

"TEXT" return K_TEXT;

">=" return T_GREATER_THAN_EQUAL;
"<=" return T_LESS_THAN_EQUAL;
"!=" return T_NOT_EQUALS;
">" return T_GREATER_THAN;
"<" return T_LESS_THAN;
"*" return T_ASTERISK;
"+" return T_PLUS;
"-" return T_MINUS;
"/" return T_DIVIDE;
"%" return T_MODULUS;
"=" return T_EQUALS;
";" return T_END;
"," return T_COMMA;
"(" return T_BRACKET_OPEN;
")" return T_BRACKET_CLOSE;

"/*"          { BEGIN(COMMENT); }
<COMMENT>"*/" { BEGIN(INITIAL); }
<COMMENT>.    { }

{white} {
    /* skip white space */
}

{comment_single} {
    /* skip comments */
}

{identifier} {
    yyextra->yytext_last = yytext;
    return IDENTIFIER;
}

{integer} {
    yyextra->yytext_last = yytext;
    return INTEGER;
}

{float} {
    yyextra->yytext_last = yytext;
    return FLOAT;
}

{string_literal} {
    yyextra->yytext_last = yytext;
    return STRING_LITERAL;
}