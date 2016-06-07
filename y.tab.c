/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sql.y" /* yacc.c:339  */


    #define YYSTYPE void*
    
    typedef struct YYLTYPE
    {
        int first_line;
        int first_column;
        int last_line;
        int last_column;
        char *filename;
    } YYLTYPE;
    
    #include <math.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #include "EagleDbSqlSelect.h"
    #include "EagleDbSqlBinaryExpression.h"
    #include "EagleDbSqlUnaryExpression.h"
    #include "EagleDbTable.h"
    #include "EagleDbColumn.h"
    #include "EagleDbInstance.h"
    #include "EagleMemory.h"
    #include "EagleDbParser.h"
    #include "EagleDataType.h"
    #include "EagleDbSqlInsert.h"
    #include "EagleUtils.h"
    #include "EagleDbSqlFunctionExpression.h"
    #include "EagleDbSqlCastExpression.h"
    
    int yylex(YYSTYPE *lvalp, YYLTYPE *llocp);
    
    #define ABORT(fmt, ...) { \
    char msg[1024]; \
    sprintf(msg, fmt, __VA_ARGS__); \
    yyerror(parser, NULL, msg); \
    YYERROR; \
    }


#line 109 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
    K_ADD = 258,
    K_ALL = 259,
    K_ALLOCATE = 260,
    K_ALTER = 261,
    K_ANY = 262,
    K_ARE = 263,
    K_ARRAY = 264,
    K_AS = 265,
    K_ASENSITIVE = 266,
    K_ASYMMETRIC = 267,
    K_AT = 268,
    K_ATOMIC = 269,
    K_AUTHORIZATION = 270,
    K_BEGIN = 271,
    K_BETWEEN = 272,
    K_BIGINT = 273,
    K_BINARY = 274,
    K_BIT = 275,
    K_BLOB = 276,
    K_BOOLEAN = 277,
    K_BOTH = 278,
    K_BY = 279,
    K_CALL = 280,
    K_CALLED = 281,
    K_CASCADED = 282,
    K_CASE = 283,
    K_CAST = 284,
    K_CHAR = 285,
    K_CHARACTER = 286,
    K_CHECK = 287,
    K_CLOB = 288,
    K_CLOSE = 289,
    K_COLLATE = 290,
    K_COLUMN = 291,
    K_COMMIT = 292,
    K_CONNECT = 293,
    K_CONSTRAINT = 294,
    K_CONTINUE = 295,
    K_CORRESPONDING = 296,
    K_CREATE = 297,
    K_CROSS = 298,
    K_CUBE = 299,
    K_CURRENT = 300,
    K_CURRENT_DATE = 301,
    K_CURRENT_DEFAULT_TRANSFORM_GROUP = 302,
    K_CURRENT_PATH = 303,
    K_CURRENT_ROLE = 304,
    K_CURRENT_TIME = 305,
    K_CURRENT_TIMESTAMP = 306,
    K_CURRENT_TRANSFORM_GROUP_FOR_TYPE = 307,
    K_CURRENT_USER = 308,
    K_CURSOR = 309,
    K_CYCLE = 310,
    K_DATE = 311,
    K_DAY = 312,
    K_DEALLOCATE = 313,
    K_DEC = 314,
    K_DECIMAL = 315,
    K_DECLARE = 316,
    K_DEFAULT = 317,
    K_DELETE = 318,
    K_DEREF = 319,
    K_DESCRIBE = 320,
    K_DETERMINISTIC = 321,
    K_DISCONNECT = 322,
    K_DISTINCT = 323,
    K_DOUBLE = 324,
    K_DROP = 325,
    K_DYNAMIC = 326,
    K_EACH = 327,
    K_ELEMENT = 328,
    K_ELSE = 329,
    K_END = 330,
    K_END_EXEC = 331,
    K_ESCAPE = 332,
    K_EXCEPT = 333,
    K_EXEC = 334,
    K_EXECUTE = 335,
    K_EXISTS = 336,
    K_EXTERNAL = 337,
    K_FALSE = 338,
    K_FETCH = 339,
    K_FILTER = 340,
    K_FLOAT = 341,
    K_FOR = 342,
    K_FOREIGN = 343,
    K_FREE = 344,
    K_FROM = 345,
    K_FULL = 346,
    K_FUNCTION = 347,
    K_GET = 348,
    K_GLOBAL = 349,
    K_GRANT = 350,
    K_GROUP = 351,
    K_GROUPING = 352,
    K_HAVING = 353,
    K_HOLD = 354,
    K_HOUR = 355,
    K_IDENTITY = 356,
    K_IMMEDIATE = 357,
    K_IN = 358,
    K_INDICATOR = 359,
    K_INNER = 360,
    K_INOUT = 361,
    K_INPUT = 362,
    K_INSENSITIVE = 363,
    K_INSERT = 364,
    K_INT = 365,
    K_INTEGER = 366,
    K_INTERSECT = 367,
    K_INTERVAL = 368,
    K_INTO = 369,
    K_IS = 370,
    K_ISOLATION = 371,
    K_JOIN = 372,
    K_LANGUAGE = 373,
    K_LARGE = 374,
    K_LATERAL = 375,
    K_LEADING = 376,
    K_LEFT = 377,
    K_LIKE = 378,
    K_LOCAL = 379,
    K_LOCALTIME = 380,
    K_LOCALTIMESTAMP = 381,
    K_MATCH = 382,
    K_MEMBER = 383,
    K_MERGE = 384,
    K_METHOD = 385,
    K_MINUTE = 386,
    K_MODIFIES = 387,
    K_MODULE = 388,
    K_MONTH = 389,
    K_MULTISET = 390,
    K_NATIONAL = 391,
    K_NATURAL = 392,
    K_NCHAR = 393,
    K_NCLOB = 394,
    K_NEW = 395,
    K_NO = 396,
    K_NONE = 397,
    K_NULL = 398,
    K_NUMERIC = 399,
    K_OF = 400,
    K_OLD = 401,
    K_ON = 402,
    K_ONLY = 403,
    K_OPEN = 404,
    K_ORDER = 405,
    K_OUT = 406,
    K_OUTER = 407,
    K_OUTPUT = 408,
    K_OVER = 409,
    K_OVERLAPS = 410,
    K_PARAMETER = 411,
    K_PARTITION = 412,
    K_PRECISION = 413,
    K_PREPARE = 414,
    K_PRIMARY = 415,
    K_PROCEDURE = 416,
    K_RANGE = 417,
    K_READS = 418,
    K_REAL = 419,
    K_RECURSIVE = 420,
    K_REF = 421,
    K_REFERENCES = 422,
    K_REFERENCING = 423,
    K_REGR_AVGX = 424,
    K_REGR_AVGY = 425,
    K_REGR_COUNT = 426,
    K_REGR_INTERCEPT = 427,
    K_REGR_R2 = 428,
    K_REGR_SLOPE = 429,
    K_REGR_SXX = 430,
    K_REGR_SXY = 431,
    K_REGR_SYY = 432,
    K_RELEASE = 433,
    K_RESULT = 434,
    K_RETURN = 435,
    K_RETURNS = 436,
    K_REVOKE = 437,
    K_RIGHT = 438,
    K_ROLLBACK = 439,
    K_ROLLUP = 440,
    K_ROW = 441,
    K_ROWS = 442,
    K_SAVEPOINT = 443,
    K_SCROLL = 444,
    K_SEARCH = 445,
    K_SECOND = 446,
    K_SELECT = 447,
    K_SENSITIVE = 448,
    K_SESSION_USER = 449,
    K_SET = 450,
    K_SIMILAR = 451,
    K_SMALLINT = 452,
    K_SOME = 453,
    K_SPECIFIC = 454,
    K_SPECIFICTYPE = 455,
    K_SQL = 456,
    K_SQLEXCEPTION = 457,
    K_SQLSTATE = 458,
    K_SQLWARNING = 459,
    K_START = 460,
    K_STATIC = 461,
    K_SUBMULTISET = 462,
    K_SYMMETRIC = 463,
    K_SYSTEM = 464,
    K_SYSTEM_USER = 465,
    K_TABLE = 466,
    K_THEN = 467,
    K_TIME = 468,
    K_TIMESTAMP = 469,
    K_TIMEZONE_HOUR = 470,
    K_TIMEZONE_MINUTE = 471,
    K_TO = 472,
    K_TRAILING = 473,
    K_TRANSLATION = 474,
    K_TREAT = 475,
    K_TRIGGER = 476,
    K_TRUE = 477,
    K_UESCAPE = 478,
    K_UNION = 479,
    K_UNIQUE = 480,
    K_UNKNOWN = 481,
    K_UNNEST = 482,
    K_UPDATE = 483,
    K_UPPER = 484,
    K_USER = 485,
    K_USING = 486,
    K_VALUE = 487,
    K_VALUES = 488,
    K_VAR_POP = 489,
    K_VAR_SAMP = 490,
    K_VARCHAR = 491,
    K_VARYING = 492,
    K_WHEN = 493,
    K_WHENEVER = 494,
    K_WHERE = 495,
    K_WIDTH_BUCKET = 496,
    K_WINDOW = 497,
    K_WITH = 498,
    K_WITHIN = 499,
    K_WITHOUT = 500,
    K_YEAR = 501,
    K_A = 502,
    K_ABS = 503,
    K_ABSOLUTE = 504,
    K_ACTION = 505,
    K_ADA = 506,
    K_ADMIN = 507,
    K_AFTER = 508,
    K_ALWAYS = 509,
    K_ASC = 510,
    K_ASSERTION = 511,
    K_ASSIGNMENT = 512,
    K_ATTRIBUTE = 513,
    K_ATTRIBUTES = 514,
    K_AVG = 515,
    K_BEFORE = 516,
    K_BERNOULLI = 517,
    K_BREADTH = 518,
    K_C = 519,
    K_CARDINALITY = 520,
    K_CASCADE = 521,
    K_CATALOG = 522,
    K_CATALOG_NAME = 523,
    K_CEIL = 524,
    K_CEILING = 525,
    K_CHAIN = 526,
    K_CHARACTERISTICS = 527,
    K_CHARACTERS = 528,
    K_CHARACTER_LENGTH = 529,
    K_CHARACTER_SET_CATALOG = 530,
    K_CHARACTER_SET_NAME = 531,
    K_CHARACTER_SET_SCHEMA = 532,
    K_CHAR_LENGTH = 533,
    K_CHECKED = 534,
    K_CLASS_ORIGIN = 535,
    K_COALESCE = 536,
    K_COBOL = 537,
    K_CODE_UNITS = 538,
    K_COLLATION = 539,
    K_COLLATION_CATALOG = 540,
    K_COLLATION_NAME = 541,
    K_COLLATION_SCHEMA = 542,
    K_COLLECT = 543,
    K_COLUMN_NAME = 544,
    K_COMMAND_FUNCTION = 545,
    K_COMMAND_FUNCTION_CODE = 546,
    K_COMMITTED = 547,
    K_CONDITION = 548,
    K_CONDITION_NUMBER = 549,
    K_CONNECTION_NAME = 550,
    K_CONSTRAINTS = 551,
    K_CONSTRAINT_CATALOG = 552,
    K_CONSTRAINT_NAME = 553,
    K_CONSTRAINT_SCHEMA = 554,
    K_CONSTRUCTORS = 555,
    K_CONTAINS = 556,
    K_CONVERT = 557,
    K_CORR = 558,
    K_COUNT = 559,
    K_COVAR_POP = 560,
    K_COVAR_SAMP = 561,
    K_CUME_DIST = 562,
    K_CURRENT_COLLATION = 563,
    K_CURSOR_NAME = 564,
    K_DATA = 565,
    K_DATETIME_INTERVAL_CODE = 566,
    K_DATETIME_INTERVAL_PRECISION = 567,
    K_DEFAULTS = 568,
    K_DEFERRABLE = 569,
    K_DEFERRED = 570,
    K_DEFINED = 571,
    K_DEFINER = 572,
    K_DEGREE = 573,
    K_DENSE_RANK = 574,
    K_DEPTH = 575,
    K_DERIVED = 576,
    K_DESC = 577,
    K_DESCRIPTOR = 578,
    K_DIAGNOSTICS = 579,
    K_DISPATCH = 580,
    K_DOMAIN = 581,
    K_DYNAMIC_FUNCTION = 582,
    K_DYNAMIC_FUNCTION_CODE = 583,
    K_EQUALS = 584,
    K_EVERY = 585,
    K_EXCEPTION = 586,
    K_EXCLUDE = 587,
    K_EXCLUDING = 588,
    K_EXP = 589,
    K_EXTRACT = 590,
    K_FINAL = 591,
    K_FIRST = 592,
    K_FLOOR = 593,
    K_FOLLOWING = 594,
    K_FORTRAN = 595,
    K_FOUND = 596,
    K_FUSION = 597,
    K_G = 598,
    K_GENERAL = 599,
    K_GO = 600,
    K_GOTO = 601,
    K_GRANTED = 602,
    K_HIERARCHY = 603,
    K_IMPLEMENTATION = 604,
    K_INCLUDING = 605,
    K_INCREMENT = 606,
    K_INITIALLY = 607,
    K_INSTANCE = 608,
    K_INSTANTIABLE = 609,
    K_INTERSECTION = 610,
    K_INVOKER = 611,
    K_K = 612,
    K_KEY = 613,
    K_KEY_MEMBER = 614,
    K_KEY_TYPE = 615,
    K_LAST = 616,
    K_LENGTH = 617,
    K_LEVEL = 618,
    K_LN = 619,
    K_LOCATOR = 620,
    K_LOWER = 621,
    K_M = 622,
    K_MAP = 623,
    K_MATCHED = 624,
    K_MAX = 625,
    K_MAXVALUE = 626,
    K_MESSAGE_LENGTH = 627,
    K_MESSAGE_OCTET_LENGTH = 628,
    K_MESSAGE_TEXT = 629,
    K_MIN = 630,
    K_MINVALUE = 631,
    K_MOD = 632,
    K_MORE = 633,
    K_MUMPS = 634,
    K_NAME = 635,
    K_NAMES = 636,
    K_NESTING = 637,
    K_NEXT = 638,
    K_NORMALIZE = 639,
    K_NORMALIZED = 640,
    K_NULLABLE = 641,
    K_NULLIF = 642,
    K_NULLS = 643,
    K_NUMBER = 644,
    K_OBJECT = 645,
    K_OCTETS = 646,
    K_OCTET_LENGTH = 647,
    K_OPTION = 648,
    K_OPTIONS = 649,
    K_ORDERING = 650,
    K_ORDINALITY = 651,
    K_OTHERS = 652,
    K_OVERLAY = 653,
    K_OVERRIDING = 654,
    K_PAD = 655,
    K_PARAMETER_MODE = 656,
    K_PARAMETER_NAME = 657,
    K_PARAMETER_ORDINAL_POSITION = 658,
    K_PARAMETER_SPECIFIC_CATALOG = 659,
    K_PARAMETER_SPECIFIC_NAME = 660,
    K_PARAMETER_SPECIFIC_SCHEMA = 661,
    K_PARTIAL = 662,
    K_PASCAL = 663,
    K_PATH = 664,
    K_PERCENTILE_CONT = 665,
    K_PERCENTILE_DISC = 666,
    K_PERCENT_RANK = 667,
    K_PLACING = 668,
    K_PLI = 669,
    K_POSITION = 670,
    K_POWER = 671,
    K_PRECEDING = 672,
    K_PRESERVE = 673,
    K_PRIOR = 674,
    K_PRIVILEGES = 675,
    K_PUBLIC = 676,
    K_RANK = 677,
    K_READ = 678,
    K_RELATIVE = 679,
    K_REPEATABLE = 680,
    K_RESTART = 681,
    K_RETURNED_CARDINALITY = 682,
    K_RETURNED_LENGTH = 683,
    K_RETURNED_OCTET_LENGTH = 684,
    K_RETURNED_SQLSTATE = 685,
    K_ROLE = 686,
    K_ROUTINE = 687,
    K_ROUTINE_CATALOG = 688,
    K_ROUTINE_NAME = 689,
    K_ROUTINE_SCHEMA = 690,
    K_ROW_COUNT = 691,
    K_ROW_NUMBER = 692,
    K_SCALE = 693,
    K_SCHEMA = 694,
    K_SCHEMA_NAME = 695,
    K_SCOPE_CATALOG = 696,
    K_SCOPE_NAME = 697,
    K_SCOPE_SCHEMA = 698,
    K_SECTION = 699,
    K_SECURITY = 700,
    K_SELF = 701,
    K_SEQUENCE = 702,
    K_SERIALIZABLE = 703,
    K_SERVER_NAME = 704,
    K_SESSION = 705,
    K_SETS = 706,
    K_SIMPLE = 707,
    K_SIZE = 708,
    K_SOURCE = 709,
    K_SPACE = 710,
    K_SPECIFIC_NAME = 711,
    K_SQRT = 712,
    K_STATE = 713,
    K_STATEMENT = 714,
    K_STDDEV_POP = 715,
    K_STDDEV_SAMP = 716,
    K_STRUCTURE = 717,
    K_STYLE = 718,
    K_SUBCLASS_ORIGIN = 719,
    K_SUBSTRING = 720,
    K_SUM = 721,
    K_TABLESAMPLE = 722,
    K_TABLE_NAME = 723,
    K_TEMPORARY = 724,
    K_TIES = 725,
    K_TOP_LEVEL_COUNT = 726,
    K_TRANSACTION = 727,
    K_TRANSACTIONS_COMMITTED = 728,
    K_TRANSACTIONS_ROLLED_BACK = 729,
    K_TRANSACTION_ACTIVE = 730,
    K_TRANSFORM = 731,
    K_TRANSFORMS = 732,
    K_TRANSLATE = 733,
    K_TRIGGER_CATALOG = 734,
    K_TRIGGER_NAME = 735,
    K_TRIGGER_SCHEMA = 736,
    K_TRIM = 737,
    K_TYPE = 738,
    K_UNBOUNDED = 739,
    K_UNCOMMITTED = 740,
    K_UNDER = 741,
    K_UNNAMED = 742,
    K_USAGE = 743,
    K_USER_DEFINED_TYPE_CATALOG = 744,
    K_USER_DEFINED_TYPE_CODE = 745,
    K_USER_DEFINED_TYPE_NAME = 746,
    K_USER_DEFINED_TYPE_SCHEMA = 747,
    K_VIEW = 748,
    K_WORK = 749,
    K_WRITE = 750,
    K_ZONE = 751,
    K_TEXT = 752,
    IDENTIFIER = 753,
    INTEGER = 754,
    FLOAT = 755,
    STRING_LITERAL = 756,
    T_END = 757,
    T_COMMA = 758,
    T_BRACKET_OPEN = 759,
    T_BRACKET_CLOSE = 760,
    K_OR = 761,
    K_AND = 763,
    T_NOT_EQUALS = 765,
    T_EQUALS = 767,
    T_GREATER_THAN = 769,
    T_LESS_THAN = 771,
    T_GREATER_THAN_EQUAL = 773,
    T_LESS_THAN_EQUAL = 775,
    T_PLUS = 777,
    T_MINUS = 779,
    K_NOT = 781,
    T_ASTERISK = 783,
    T_DIVIDE = 785,
    T_MODULUS = 787
  };
#endif
/* Tokens.  */
#define END 0
#define K_ADD 258
#define K_ALL 259
#define K_ALLOCATE 260
#define K_ALTER 261
#define K_ANY 262
#define K_ARE 263
#define K_ARRAY 264
#define K_AS 265
#define K_ASENSITIVE 266
#define K_ASYMMETRIC 267
#define K_AT 268
#define K_ATOMIC 269
#define K_AUTHORIZATION 270
#define K_BEGIN 271
#define K_BETWEEN 272
#define K_BIGINT 273
#define K_BINARY 274
#define K_BIT 275
#define K_BLOB 276
#define K_BOOLEAN 277
#define K_BOTH 278
#define K_BY 279
#define K_CALL 280
#define K_CALLED 281
#define K_CASCADED 282
#define K_CASE 283
#define K_CAST 284
#define K_CHAR 285
#define K_CHARACTER 286
#define K_CHECK 287
#define K_CLOB 288
#define K_CLOSE 289
#define K_COLLATE 290
#define K_COLUMN 291
#define K_COMMIT 292
#define K_CONNECT 293
#define K_CONSTRAINT 294
#define K_CONTINUE 295
#define K_CORRESPONDING 296
#define K_CREATE 297
#define K_CROSS 298
#define K_CUBE 299
#define K_CURRENT 300
#define K_CURRENT_DATE 301
#define K_CURRENT_DEFAULT_TRANSFORM_GROUP 302
#define K_CURRENT_PATH 303
#define K_CURRENT_ROLE 304
#define K_CURRENT_TIME 305
#define K_CURRENT_TIMESTAMP 306
#define K_CURRENT_TRANSFORM_GROUP_FOR_TYPE 307
#define K_CURRENT_USER 308
#define K_CURSOR 309
#define K_CYCLE 310
#define K_DATE 311
#define K_DAY 312
#define K_DEALLOCATE 313
#define K_DEC 314
#define K_DECIMAL 315
#define K_DECLARE 316
#define K_DEFAULT 317
#define K_DELETE 318
#define K_DEREF 319
#define K_DESCRIBE 320
#define K_DETERMINISTIC 321
#define K_DISCONNECT 322
#define K_DISTINCT 323
#define K_DOUBLE 324
#define K_DROP 325
#define K_DYNAMIC 326
#define K_EACH 327
#define K_ELEMENT 328
#define K_ELSE 329
#define K_END 330
#define K_END_EXEC 331
#define K_ESCAPE 332
#define K_EXCEPT 333
#define K_EXEC 334
#define K_EXECUTE 335
#define K_EXISTS 336
#define K_EXTERNAL 337
#define K_FALSE 338
#define K_FETCH 339
#define K_FILTER 340
#define K_FLOAT 341
#define K_FOR 342
#define K_FOREIGN 343
#define K_FREE 344
#define K_FROM 345
#define K_FULL 346
#define K_FUNCTION 347
#define K_GET 348
#define K_GLOBAL 349
#define K_GRANT 350
#define K_GROUP 351
#define K_GROUPING 352
#define K_HAVING 353
#define K_HOLD 354
#define K_HOUR 355
#define K_IDENTITY 356
#define K_IMMEDIATE 357
#define K_IN 358
#define K_INDICATOR 359
#define K_INNER 360
#define K_INOUT 361
#define K_INPUT 362
#define K_INSENSITIVE 363
#define K_INSERT 364
#define K_INT 365
#define K_INTEGER 366
#define K_INTERSECT 367
#define K_INTERVAL 368
#define K_INTO 369
#define K_IS 370
#define K_ISOLATION 371
#define K_JOIN 372
#define K_LANGUAGE 373
#define K_LARGE 374
#define K_LATERAL 375
#define K_LEADING 376
#define K_LEFT 377
#define K_LIKE 378
#define K_LOCAL 379
#define K_LOCALTIME 380
#define K_LOCALTIMESTAMP 381
#define K_MATCH 382
#define K_MEMBER 383
#define K_MERGE 384
#define K_METHOD 385
#define K_MINUTE 386
#define K_MODIFIES 387
#define K_MODULE 388
#define K_MONTH 389
#define K_MULTISET 390
#define K_NATIONAL 391
#define K_NATURAL 392
#define K_NCHAR 393
#define K_NCLOB 394
#define K_NEW 395
#define K_NO 396
#define K_NONE 397
#define K_NULL 398
#define K_NUMERIC 399
#define K_OF 400
#define K_OLD 401
#define K_ON 402
#define K_ONLY 403
#define K_OPEN 404
#define K_ORDER 405
#define K_OUT 406
#define K_OUTER 407
#define K_OUTPUT 408
#define K_OVER 409
#define K_OVERLAPS 410
#define K_PARAMETER 411
#define K_PARTITION 412
#define K_PRECISION 413
#define K_PREPARE 414
#define K_PRIMARY 415
#define K_PROCEDURE 416
#define K_RANGE 417
#define K_READS 418
#define K_REAL 419
#define K_RECURSIVE 420
#define K_REF 421
#define K_REFERENCES 422
#define K_REFERENCING 423
#define K_REGR_AVGX 424
#define K_REGR_AVGY 425
#define K_REGR_COUNT 426
#define K_REGR_INTERCEPT 427
#define K_REGR_R2 428
#define K_REGR_SLOPE 429
#define K_REGR_SXX 430
#define K_REGR_SXY 431
#define K_REGR_SYY 432
#define K_RELEASE 433
#define K_RESULT 434
#define K_RETURN 435
#define K_RETURNS 436
#define K_REVOKE 437
#define K_RIGHT 438
#define K_ROLLBACK 439
#define K_ROLLUP 440
#define K_ROW 441
#define K_ROWS 442
#define K_SAVEPOINT 443
#define K_SCROLL 444
#define K_SEARCH 445
#define K_SECOND 446
#define K_SELECT 447
#define K_SENSITIVE 448
#define K_SESSION_USER 449
#define K_SET 450
#define K_SIMILAR 451
#define K_SMALLINT 452
#define K_SOME 453
#define K_SPECIFIC 454
#define K_SPECIFICTYPE 455
#define K_SQL 456
#define K_SQLEXCEPTION 457
#define K_SQLSTATE 458
#define K_SQLWARNING 459
#define K_START 460
#define K_STATIC 461
#define K_SUBMULTISET 462
#define K_SYMMETRIC 463
#define K_SYSTEM 464
#define K_SYSTEM_USER 465
#define K_TABLE 466
#define K_THEN 467
#define K_TIME 468
#define K_TIMESTAMP 469
#define K_TIMEZONE_HOUR 470
#define K_TIMEZONE_MINUTE 471
#define K_TO 472
#define K_TRAILING 473
#define K_TRANSLATION 474
#define K_TREAT 475
#define K_TRIGGER 476
#define K_TRUE 477
#define K_UESCAPE 478
#define K_UNION 479
#define K_UNIQUE 480
#define K_UNKNOWN 481
#define K_UNNEST 482
#define K_UPDATE 483
#define K_UPPER 484
#define K_USER 485
#define K_USING 486
#define K_VALUE 487
#define K_VALUES 488
#define K_VAR_POP 489
#define K_VAR_SAMP 490
#define K_VARCHAR 491
#define K_VARYING 492
#define K_WHEN 493
#define K_WHENEVER 494
#define K_WHERE 495
#define K_WIDTH_BUCKET 496
#define K_WINDOW 497
#define K_WITH 498
#define K_WITHIN 499
#define K_WITHOUT 500
#define K_YEAR 501
#define K_A 502
#define K_ABS 503
#define K_ABSOLUTE 504
#define K_ACTION 505
#define K_ADA 506
#define K_ADMIN 507
#define K_AFTER 508
#define K_ALWAYS 509
#define K_ASC 510
#define K_ASSERTION 511
#define K_ASSIGNMENT 512
#define K_ATTRIBUTE 513
#define K_ATTRIBUTES 514
#define K_AVG 515
#define K_BEFORE 516
#define K_BERNOULLI 517
#define K_BREADTH 518
#define K_C 519
#define K_CARDINALITY 520
#define K_CASCADE 521
#define K_CATALOG 522
#define K_CATALOG_NAME 523
#define K_CEIL 524
#define K_CEILING 525
#define K_CHAIN 526
#define K_CHARACTERISTICS 527
#define K_CHARACTERS 528
#define K_CHARACTER_LENGTH 529
#define K_CHARACTER_SET_CATALOG 530
#define K_CHARACTER_SET_NAME 531
#define K_CHARACTER_SET_SCHEMA 532
#define K_CHAR_LENGTH 533
#define K_CHECKED 534
#define K_CLASS_ORIGIN 535
#define K_COALESCE 536
#define K_COBOL 537
#define K_CODE_UNITS 538
#define K_COLLATION 539
#define K_COLLATION_CATALOG 540
#define K_COLLATION_NAME 541
#define K_COLLATION_SCHEMA 542
#define K_COLLECT 543
#define K_COLUMN_NAME 544
#define K_COMMAND_FUNCTION 545
#define K_COMMAND_FUNCTION_CODE 546
#define K_COMMITTED 547
#define K_CONDITION 548
#define K_CONDITION_NUMBER 549
#define K_CONNECTION_NAME 550
#define K_CONSTRAINTS 551
#define K_CONSTRAINT_CATALOG 552
#define K_CONSTRAINT_NAME 553
#define K_CONSTRAINT_SCHEMA 554
#define K_CONSTRUCTORS 555
#define K_CONTAINS 556
#define K_CONVERT 557
#define K_CORR 558
#define K_COUNT 559
#define K_COVAR_POP 560
#define K_COVAR_SAMP 561
#define K_CUME_DIST 562
#define K_CURRENT_COLLATION 563
#define K_CURSOR_NAME 564
#define K_DATA 565
#define K_DATETIME_INTERVAL_CODE 566
#define K_DATETIME_INTERVAL_PRECISION 567
#define K_DEFAULTS 568
#define K_DEFERRABLE 569
#define K_DEFERRED 570
#define K_DEFINED 571
#define K_DEFINER 572
#define K_DEGREE 573
#define K_DENSE_RANK 574
#define K_DEPTH 575
#define K_DERIVED 576
#define K_DESC 577
#define K_DESCRIPTOR 578
#define K_DIAGNOSTICS 579
#define K_DISPATCH 580
#define K_DOMAIN 581
#define K_DYNAMIC_FUNCTION 582
#define K_DYNAMIC_FUNCTION_CODE 583
#define K_EQUALS 584
#define K_EVERY 585
#define K_EXCEPTION 586
#define K_EXCLUDE 587
#define K_EXCLUDING 588
#define K_EXP 589
#define K_EXTRACT 590
#define K_FINAL 591
#define K_FIRST 592
#define K_FLOOR 593
#define K_FOLLOWING 594
#define K_FORTRAN 595
#define K_FOUND 596
#define K_FUSION 597
#define K_G 598
#define K_GENERAL 599
#define K_GO 600
#define K_GOTO 601
#define K_GRANTED 602
#define K_HIERARCHY 603
#define K_IMPLEMENTATION 604
#define K_INCLUDING 605
#define K_INCREMENT 606
#define K_INITIALLY 607
#define K_INSTANCE 608
#define K_INSTANTIABLE 609
#define K_INTERSECTION 610
#define K_INVOKER 611
#define K_K 612
#define K_KEY 613
#define K_KEY_MEMBER 614
#define K_KEY_TYPE 615
#define K_LAST 616
#define K_LENGTH 617
#define K_LEVEL 618
#define K_LN 619
#define K_LOCATOR 620
#define K_LOWER 621
#define K_M 622
#define K_MAP 623
#define K_MATCHED 624
#define K_MAX 625
#define K_MAXVALUE 626
#define K_MESSAGE_LENGTH 627
#define K_MESSAGE_OCTET_LENGTH 628
#define K_MESSAGE_TEXT 629
#define K_MIN 630
#define K_MINVALUE 631
#define K_MOD 632
#define K_MORE 633
#define K_MUMPS 634
#define K_NAME 635
#define K_NAMES 636
#define K_NESTING 637
#define K_NEXT 638
#define K_NORMALIZE 639
#define K_NORMALIZED 640
#define K_NULLABLE 641
#define K_NULLIF 642
#define K_NULLS 643
#define K_NUMBER 644
#define K_OBJECT 645
#define K_OCTETS 646
#define K_OCTET_LENGTH 647
#define K_OPTION 648
#define K_OPTIONS 649
#define K_ORDERING 650
#define K_ORDINALITY 651
#define K_OTHERS 652
#define K_OVERLAY 653
#define K_OVERRIDING 654
#define K_PAD 655
#define K_PARAMETER_MODE 656
#define K_PARAMETER_NAME 657
#define K_PARAMETER_ORDINAL_POSITION 658
#define K_PARAMETER_SPECIFIC_CATALOG 659
#define K_PARAMETER_SPECIFIC_NAME 660
#define K_PARAMETER_SPECIFIC_SCHEMA 661
#define K_PARTIAL 662
#define K_PASCAL 663
#define K_PATH 664
#define K_PERCENTILE_CONT 665
#define K_PERCENTILE_DISC 666
#define K_PERCENT_RANK 667
#define K_PLACING 668
#define K_PLI 669
#define K_POSITION 670
#define K_POWER 671
#define K_PRECEDING 672
#define K_PRESERVE 673
#define K_PRIOR 674
#define K_PRIVILEGES 675
#define K_PUBLIC 676
#define K_RANK 677
#define K_READ 678
#define K_RELATIVE 679
#define K_REPEATABLE 680
#define K_RESTART 681
#define K_RETURNED_CARDINALITY 682
#define K_RETURNED_LENGTH 683
#define K_RETURNED_OCTET_LENGTH 684
#define K_RETURNED_SQLSTATE 685
#define K_ROLE 686
#define K_ROUTINE 687
#define K_ROUTINE_CATALOG 688
#define K_ROUTINE_NAME 689
#define K_ROUTINE_SCHEMA 690
#define K_ROW_COUNT 691
#define K_ROW_NUMBER 692
#define K_SCALE 693
#define K_SCHEMA 694
#define K_SCHEMA_NAME 695
#define K_SCOPE_CATALOG 696
#define K_SCOPE_NAME 697
#define K_SCOPE_SCHEMA 698
#define K_SECTION 699
#define K_SECURITY 700
#define K_SELF 701
#define K_SEQUENCE 702
#define K_SERIALIZABLE 703
#define K_SERVER_NAME 704
#define K_SESSION 705
#define K_SETS 706
#define K_SIMPLE 707
#define K_SIZE 708
#define K_SOURCE 709
#define K_SPACE 710
#define K_SPECIFIC_NAME 711
#define K_SQRT 712
#define K_STATE 713
#define K_STATEMENT 714
#define K_STDDEV_POP 715
#define K_STDDEV_SAMP 716
#define K_STRUCTURE 717
#define K_STYLE 718
#define K_SUBCLASS_ORIGIN 719
#define K_SUBSTRING 720
#define K_SUM 721
#define K_TABLESAMPLE 722
#define K_TABLE_NAME 723
#define K_TEMPORARY 724
#define K_TIES 725
#define K_TOP_LEVEL_COUNT 726
#define K_TRANSACTION 727
#define K_TRANSACTIONS_COMMITTED 728
#define K_TRANSACTIONS_ROLLED_BACK 729
#define K_TRANSACTION_ACTIVE 730
#define K_TRANSFORM 731
#define K_TRANSFORMS 732
#define K_TRANSLATE 733
#define K_TRIGGER_CATALOG 734
#define K_TRIGGER_NAME 735
#define K_TRIGGER_SCHEMA 736
#define K_TRIM 737
#define K_TYPE 738
#define K_UNBOUNDED 739
#define K_UNCOMMITTED 740
#define K_UNDER 741
#define K_UNNAMED 742
#define K_USAGE 743
#define K_USER_DEFINED_TYPE_CATALOG 744
#define K_USER_DEFINED_TYPE_CODE 745
#define K_USER_DEFINED_TYPE_NAME 746
#define K_USER_DEFINED_TYPE_SCHEMA 747
#define K_VIEW 748
#define K_WORK 749
#define K_WRITE 750
#define K_ZONE 751
#define K_TEXT 752
#define IDENTIFIER 753
#define INTEGER 754
#define FLOAT 755
#define STRING_LITERAL 756
#define T_END 757
#define T_COMMA 758
#define T_BRACKET_OPEN 759
#define T_BRACKET_CLOSE 760
#define K_OR 761
#define K_AND 763
#define T_NOT_EQUALS 765
#define T_EQUALS 767
#define T_GREATER_THAN 769
#define T_LESS_THAN 771
#define T_GREATER_THAN_EQUAL 773
#define T_LESS_THAN_EQUAL 775
#define T_PLUS 777
#define T_MINUS 779
#define K_NOT 781
#define T_ASTERISK 783
#define T_DIVIDE 785
#define T_MODULUS 787

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (EagleDbParser *parser, void* scanner);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 1199 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  283
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2293

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  534
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  559
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  611

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   788

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   589,   589,   591,   593,   597,   603,   604,   605,   609,
     624,   630,   640,   646,   654,   659,   667,   668,   669,   670,
     671,   672,   673,   674,   678,   678,   682,   683,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   709,   710,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,   724,   725,
     726,   727,   728,   729,   730,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,   750,   751,   752,   753,   754,   755,
     756,   757,   758,   759,   760,   761,   762,   763,   764,   765,
     766,   767,   768,   769,   770,   771,   772,   773,   774,   775,
     776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
     786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   803,   804,   805,
     806,   807,   808,   809,   810,   811,   812,   813,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,   834,   835,
     836,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   851,   852,   853,   854,   855,
     856,   857,   858,   859,   860,   861,   862,   863,   864,   865,
     866,   867,   868,   869,   870,   871,   872,   873,   874,   875,
     876,   877,   878,   879,   880,   881,   882,   883,   884,   885,
     886,   887,   888,   889,   890,   891,   892,   893,   894,   895,
     896,   897,   898,   899,   900,   901,   902,   903,   904,   905,
     906,   907,   908,   909,   910,   911,   912,   913,   914,   915,
     916,   917,   918,   919,   920,   921,   922,   923,   924,   925,
     926,   927,   928,   929,   930,   931,   935,   936,   937,   938,
     939,   940,   941,   942,   943,   944,   945,   946,   947,   948,
     949,   950,   951,   952,   953,   954,   955,   956,   957,   958,
     959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,   982,   983,   984,   985,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,
    1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,
    1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,
    1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,  1058,
    1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,  1068,
    1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,
    1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,
    1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,  1098,
    1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,
    1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,  1117,  1118,
    1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,  1128,
    1129,  1130,  1131,  1132,  1133,  1134,  1135,  1136,  1137,  1138,
    1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,  1148,
    1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,  1158,
    1159,  1160,  1161,  1162,  1163,  1164,  1165,  1166,  1167,  1168,
    1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,
    1179,  1180,  1181,  1185,  1190,  1198,  1210,  1216,  1224,  1225,
    1229,  1230,  1234,  1237,  1240,  1247,  1254,  1255,  1258,  1259,
    1262,  1263,  1264,  1265,  1266,  1269,  1270,  1271,  1272,  1273,
    1274,  1278,  1278,  1278,  1278,  1282,  1290,  1298,  1303,  1310
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"ADD\"", "\"ALL\"",
  "\"ALLOCATE\"", "\"ALTER\"", "\"ANY\"", "\"ARE\"", "\"ARRAY\"", "\"AS\"",
  "\"ASENSITIVE\"", "\"ASYMMETRIC\"", "\"AT\"", "\"ATOMIC\"",
  "\"AUTHORIZATION\"", "\"BEGIN\"", "\"BETWEEN\"", "\"BIGINT\"",
  "\"BINARY\"", "\"BIT\"", "\"BLOB\"", "\"BOOLEAN\"", "\"BOTH\"", "\"BY\"",
  "\"CALL\"", "\"CALLED\"", "\"CASCADED\"", "\"CASE\"", "\"CAST\"",
  "\"CHAR\"", "\"CHARACTER\"", "\"CHECK\"", "\"CLOB\"", "\"CLOSE\"",
  "\"COLLATE\"", "\"COLUMN\"", "\"COMMIT\"", "\"CONNECT\"",
  "\"CONSTRAINT\"", "\"CONTINUE\"", "\"CORRESPONDING\"", "\"CREATE\"",
  "\"CROSS\"", "\"CUBE\"", "\"CURRENT\"", "\"CURRENT_DATE\"",
  "\"CURRENT_DEFAULT_TRANSFORM_GROUP\"", "\"CURRENT_PATH\"",
  "\"CURRENT_ROLE\"", "\"CURRENT_TIME\"", "\"CURRENT_TIMESTAMP\"",
  "\"CURRENT_TRANSFORM_GROUP_FOR_TYPE\"", "\"CURRENT_USER\"", "\"CURSOR\"",
  "\"CYCLE\"", "\"DATE\"", "\"DAY\"", "\"DEALLOCATE\"", "\"DEC\"",
  "\"DECIMAL\"", "\"DECLARE\"", "\"DEFAULT\"", "\"DELETE\"", "\"DEREF\"",
  "\"DESCRIBE\"", "\"DETERMINISTIC\"", "\"DISCONNECT\"", "\"DISTINCT\"",
  "\"DOUBLE\"", "\"DROP\"", "\"DYNAMIC\"", "\"EACH\"", "\"ELEMENT\"",
  "\"ELSE\"", "\"END\"", "\"END-EXEC\"", "\"ESCAPE\"", "\"EXCEPT\"",
  "\"EXEC\"", "\"EXECUTE\"", "\"EXISTS\"", "\"EXTERNAL\"", "\"FALSE\"",
  "\"FETCH\"", "\"FILTER\"", "\"FLOAT\"", "\"FOR\"", "\"FOREIGN\"",
  "\"FREE\"", "\"FROM\"", "\"FULL\"", "\"FUNCTION\"", "\"GET\"",
  "\"GLOBAL\"", "\"GRANT\"", "\"GROUP\"", "\"GROUPING\"", "\"HAVING\"",
  "\"HOLD\"", "\"HOUR\"", "\"IDENTITY\"", "\"IMMEDIATE\"", "\"IN\"",
  "\"INDICATOR\"", "\"INNER\"", "\"INOUT\"", "\"INPUT\"",
  "\"INSENSITIVE\"", "\"INSERT\"", "\"INT\"", "\"INTEGER\"",
  "\"INTERSECT\"", "\"INTERVAL\"", "\"INTO\"", "\"IS\"", "\"ISOLATION\"",
  "\"JOIN\"", "\"LANGUAGE\"", "\"LARGE\"", "\"LATERAL\"", "\"LEADING\"",
  "\"LEFT\"", "\"LIKE\"", "\"LOCAL\"", "\"LOCALTIME\"",
  "\"LOCALTIMESTAMP\"", "\"MATCH\"", "\"MEMBER\"", "\"MERGE\"",
  "\"METHOD\"", "\"MINUTE\"", "\"MODIFIES\"", "\"MODULE\"", "\"MONTH\"",
  "\"MULTISET\"", "\"NATIONAL\"", "\"NATURAL\"", "\"NCHAR\"", "\"NCLOB\"",
  "\"NEW\"", "\"NO\"", "\"NONE\"", "\"NULL\"", "\"NUMERIC\"", "\"OF\"",
  "\"OLD\"", "\"ON\"", "\"ONLY\"", "\"OPEN\"", "\"ORDER\"", "\"OUT\"",
  "\"OUTER\"", "\"OUTPUT\"", "\"OVER\"", "\"OVERLAPS\"", "\"PARAMETER\"",
  "\"PARTITION\"", "\"PRECISION\"", "\"PREPARE\"", "\"PRIMARY\"",
  "\"PROCEDURE\"", "\"RANGE\"", "\"READS\"", "\"REAL\"", "\"RECURSIVE\"",
  "\"REF\"", "\"REFERENCES\"", "\"REFERENCING\"", "\"REGR_AVGX\"",
  "\"REGR_AVGY\"", "\"REGR_COUNT\"", "\"REGR_INTERCEPT\"", "\"REGR_R2\"",
  "\"REGR_SLOPE\"", "\"REGR_SXX\"", "\"REGR_SXY\"", "\"REGR_SYY\"",
  "\"RELEASE\"", "\"RESULT\"", "\"RETURN\"", "\"RETURNS\"", "\"REVOKE\"",
  "\"RIGHT\"", "\"ROLLBACK\"", "\"ROLLUP\"", "\"ROW\"", "\"ROWS\"",
  "\"SAVEPOINT\"", "\"SCROLL\"", "\"SEARCH\"", "\"SECOND\"", "\"SELECT\"",
  "\"SENSITIVE\"", "\"SESSION_USER\"", "\"SET\"", "\"SIMILAR\"",
  "\"SMALLINT\"", "\"SOME\"", "\"SPECIFIC\"", "\"SPECIFICTYPE\"",
  "\"SQL\"", "\"SQLEXCEPTION\"", "\"SQLSTATE\"", "\"SQLWARNING\"",
  "\"START\"", "\"STATIC\"", "\"SUBMULTISET\"", "\"SYMMETRIC\"",
  "\"SYSTEM\"", "\"SYSTEM_USER\"", "\"TABLE\"", "\"THEN\"", "\"TIME\"",
  "\"TIMESTAMP\"", "\"TIMEZONE_HOUR\"", "\"TIMEZONE_MINUTE\"", "\"TO\"",
  "\"TRAILING\"", "\"TRANSLATION\"", "\"TREAT\"", "\"TRIGGER\"",
  "\"TRUE\"", "\"UESCAPE\"", "\"UNION\"", "\"UNIQUE\"", "\"UNKNOWN\"",
  "\"UNNEST\"", "\"UPDATE\"", "\"UPPER\"", "\"USER\"", "\"USING\"",
  "\"VALUE\"", "\"VALUES\"", "\"VAR_POP\"", "\"VAR_SAMP\"", "\"VARCHAR\"",
  "\"VARYING\"", "\"WHEN\"", "\"WHENEVER\"", "\"WHERE\"",
  "\"WIDTH_BUCKET\"", "\"WINDOW\"", "\"WITH\"", "\"WITHIN\"",
  "\"WITHOUT\"", "\"YEAR\"", "\"A\"", "\"ABS\"", "\"ABSOLUTE\"",
  "\"ACTION\"", "\"ADA\"", "\"ADMIN\"", "\"AFTER\"", "\"ALWAYS\"",
  "\"ASC\"", "\"ASSERTION\"", "\"ASSIGNMENT\"", "\"ATTRIBUTE\"",
  "\"ATTRIBUTES\"", "\"AVG\"", "\"BEFORE\"", "\"BERNOULLI\"",
  "\"BREADTH\"", "\"C\"", "\"CARDINALITY\"", "\"CASCADE\"", "\"CATALOG\"",
  "\"CATALOG_NAME\"", "\"CEIL\"", "\"CEILING\"", "\"CHAIN\"",
  "\"CHARACTERISTICS\"", "\"CHARACTERS\"", "\"CHARACTER_LENGTH\"",
  "\"CHARACTER_SET_CATALOG\"", "\"CHARACTER_SET_NAME\"",
  "\"CHARACTER_SET_SCHEMA\"", "\"CHAR_LENGTH\"", "\"CHECKED\"",
  "\"CLASS_ORIGIN\"", "\"COALESCE\"", "\"COBOL\"", "\"CODE_UNITS\"",
  "\"COLLATION\"", "\"COLLATION_CATALOG\"", "\"COLLATION_NAME\"",
  "\"COLLATION_SCHEMA\"", "\"COLLECT\"", "\"COLUMN_NAME\"",
  "\"COMMAND_FUNCTION\"", "\"COMMAND_FUNCTION_CODE\"", "\"COMMITTED\"",
  "\"CONDITION\"", "\"CONDITION_NUMBER\"", "\"CONNECTION_NAME\"",
  "\"CONSTRAINTS\"", "\"CONSTRAINT_CATALOG\"", "\"CONSTRAINT_NAME\"",
  "\"CONSTRAINT_SCHEMA\"", "\"CONSTRUCTORS\"", "\"CONTAINS\"",
  "\"CONVERT\"", "\"CORR\"", "\"COUNT\"", "\"COVAR_POP\"",
  "\"COVAR_SAMP\"", "\"CUME_DIST\"", "\"CURRENT_COLLATION\"",
  "\"CURSOR_NAME\"", "\"DATA\"", "\"DATETIME_INTERVAL_CODE\"",
  "\"DATETIME_INTERVAL_PRECISION\"", "\"DEFAULTS\"", "\"DEFERRABLE\"",
  "\"DEFERRED\"", "\"DEFINED\"", "\"DEFINER\"", "\"DEGREE\"",
  "\"DENSE_RANK\"", "\"DEPTH\"", "\"DERIVED\"", "\"DESC\"",
  "\"DESCRIPTOR\"", "\"DIAGNOSTICS\"", "\"DISPATCH\"", "\"DOMAIN\"",
  "\"DYNAMIC_FUNCTION\"", "\"DYNAMIC_FUNCTION_CODE\"", "\"EQUALS\"",
  "\"EVERY\"", "\"EXCEPTION\"", "\"EXCLUDE\"", "\"EXCLUDING\"", "\"EXP\"",
  "\"EXTRACT\"", "\"FINAL\"", "\"FIRST\"", "\"FLOOR\"", "\"FOLLOWING\"",
  "\"FORTRAN\"", "\"FOUND\"", "\"FUSION\"", "\"G\"", "\"GENERAL\"",
  "\"GO\"", "\"GOTO\"", "\"GRANTED\"", "\"HIERARCHY\"",
  "\"IMPLEMENTATION\"", "\"INCLUDING\"", "\"INCREMENT\"", "\"INITIALLY\"",
  "\"INSTANCE\"", "\"INSTANTIABLE\"", "\"INTERSECTION\"", "\"INVOKER\"",
  "\"K\"", "\"KEY\"", "\"KEY_MEMBER\"", "\"KEY_TYPE\"", "\"LAST\"",
  "\"LENGTH\"", "\"LEVEL\"", "\"LN\"", "\"LOCATOR\"", "\"LOWER\"", "\"M\"",
  "\"MAP\"", "\"MATCHED\"", "\"MAX\"", "\"MAXVALUE\"",
  "\"MESSAGE_LENGTH\"", "\"MESSAGE_OCTET_LENGTH\"", "\"MESSAGE_TEXT\"",
  "\"MIN\"", "\"MINVALUE\"", "\"MOD\"", "\"MORE\"", "\"MUMPS\"",
  "\"NAME\"", "\"NAMES\"", "\"NESTING\"", "\"NEXT\"", "\"NORMALIZE\"",
  "\"NORMALIZED\"", "\"NULLABLE\"", "\"NULLIF\"", "\"NULLS\"",
  "\"NUMBER\"", "\"OBJECT\"", "\"OCTETS\"", "\"OCTET_LENGTH\"",
  "\"OPTION\"", "\"OPTIONS\"", "\"ORDERING\"", "\"ORDINALITY\"",
  "\"OTHERS\"", "\"OVERLAY\"", "\"OVERRIDING\"", "\"PAD\"",
  "\"PARAMETER_MODE\"", "\"PARAMETER_NAME\"",
  "\"PARAMETER_ORDINAL_POSITION\"", "\"PARAMETER_SPECIFIC_CATALOG\"",
  "\"PARAMETER_SPECIFIC_NAME\"", "\"PARAMETER_SPECIFIC_SCHEMA\"",
  "\"PARTIAL\"", "\"PASCAL\"", "\"PATH\"", "\"PERCENTILE_CONT\"",
  "\"PERCENTILE_DISC\"", "\"PERCENT_RANK\"", "\"PLACING\"", "\"PLI\"",
  "\"POSITION\"", "\"POWER\"", "\"PRECEDING\"", "\"PRESERVE\"",
  "\"PRIOR\"", "\"PRIVILEGES\"", "\"PUBLIC\"", "\"RANK\"", "\"READ\"",
  "\"RELATIVE\"", "\"REPEATABLE\"", "\"RESTART\"",
  "\"RETURNED_CARDINALITY\"", "\"RETURNED_LENGTH\"",
  "\"RETURNED_OCTET_LENGTH\"", "\"RETURNED_SQLSTATE\"", "\"ROLE\"",
  "\"ROUTINE\"", "\"ROUTINE_CATALOG\"", "\"ROUTINE_NAME\"",
  "\"ROUTINE_SCHEMA\"", "\"ROW_COUNT\"", "\"ROW_NUMBER\"", "\"SCALE\"",
  "\"SCHEMA\"", "\"SCHEMA_NAME\"", "\"SCOPE_CATALOG\"", "\"SCOPE_NAME\"",
  "\"SCOPE_SCHEMA\"", "\"SECTION\"", "\"SECURITY\"", "\"SELF\"",
  "\"SEQUENCE\"", "\"SERIALIZABLE\"", "\"SERVER_NAME\"", "\"SESSION\"",
  "\"SETS\"", "\"SIMPLE\"", "\"SIZE\"", "\"SOURCE\"", "\"SPACE\"",
  "\"SPECIFIC_NAME\"", "\"SQRT\"", "\"STATE\"", "\"STATEMENT\"",
  "\"STDDEV_POP\"", "\"STDDEV_SAMP\"", "\"STRUCTURE\"", "\"STYLE\"",
  "\"SUBCLASS_ORIGIN\"", "\"SUBSTRING\"", "\"SUM\"", "\"TABLESAMPLE\"",
  "\"TABLE_NAME\"", "\"TEMPORARY\"", "\"TIES\"", "\"TOP_LEVEL_COUNT\"",
  "\"TRANSACTION\"", "\"TRANSACTIONS_COMMITTED\"",
  "\"TRANSACTIONS_ROLLED_BACK\"", "\"TRANSACTION_ACTIVE\"",
  "\"TRANSFORM\"", "\"TRANSFORMS\"", "\"TRANSLATE\"",
  "\"TRIGGER_CATALOG\"", "\"TRIGGER_NAME\"", "\"TRIGGER_SCHEMA\"",
  "\"TRIM\"", "\"TYPE\"", "\"UNBOUNDED\"", "\"UNCOMMITTED\"", "\"UNDER\"",
  "\"UNNAMED\"", "\"USAGE\"", "\"USER_DEFINED_TYPE_CATALOG\"",
  "\"USER_DEFINED_TYPE_CODE\"", "\"USER_DEFINED_TYPE_NAME\"",
  "\"USER_DEFINED_TYPE_SCHEMA\"", "\"VIEW\"", "\"WORK\"", "\"WRITE\"",
  "\"ZONE\"", "\"TEXT\"", "\"identifier\"", "\"integer\"", "\"float\"",
  "\"string_literal\"", "\";\"", "\",\"", "\"(\"", "\")\"", "K_OR",
  "\"OR\"", "K_AND", "\"AND\"", "T_NOT_EQUALS", "\"!=\"", "T_EQUALS",
  "\"=\"", "T_GREATER_THAN", "\">\"", "T_LESS_THAN", "\"<\"",
  "T_GREATER_THAN_EQUAL", "\">=\"", "T_LESS_THAN_EQUAL", "\"<=\"",
  "T_PLUS", "\"+\"", "T_MINUS", "\"-\"", "K_NOT", "\"NOT\"", "T_ASTERISK",
  "\"*\"", "T_DIVIDE", "\"/\"", "T_MODULUS", "\"%\"", "$accept", "input",
  "statement", "insert_statement", "create_table_statement",
  "column_definition_list", "column_definition", "data_type", "keyword",
  "nonreserved_word", "reserved_word", "select_statement",
  "column_expression_list", "column_expression", "where_expression",
  "expression", "value", "integer", "float", "identifier",
  "string_literal", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788
};
# endif

#define YYPACT_NINF -558

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-558)))

#define YYTABLE_NINF -531

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,  -558,  -206,  -105,     2,    13,    17,    10,  -558,  -558,
    -558,   579,  1795,  -558,  -472,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  1515,
    1515,  1515,  -558,  -558,    -4,  -558,  -449,  -558,  -558,  -558,
    -451,  -558,  -558,  -558,  -558,    55,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -558,  -558,    69,    77,  -558,  -424,  -406,  1515,  -494,
    -489,  -489,  1795,  1047,  1515,  1515,  1515,  1515,  1515,  1515,
    1515,  1515,  1515,  1515,  1515,  1515,  1515,  1515,  -558,  -558,
     579,  1047,     5,  -558,     7,  -558,  -423,  -408,  -495,  -495,
    -440,  -440,  -440,  -440,  -489,  -489,  -558,  -558,  -558,  -456,
    -463,  -558,    95,     8,  -459,     8,  -558,  1515,  -558,  -558,
     579,  -558,  -558,   -58,  -558,  -558,  -558,  -558,  -558,  -558,
    -558,  -130,  -394,  -449,  -558,  -558,  -391,  -558,  1047,  -458,
    -558
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     2,     0,     0,     0,     0,     0,     0,     8,     7,
       6,     0,     0,   523,     0,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   558,   555,   556,   559,     0,
       0,     0,   528,   557,     0,   526,   529,   532,   551,   552,
     553,   554,     3,     1,     4,     0,   276,   277,   278,   279,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   418,   419,   420,   421,
     422,   423,   424,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     425,   280,   417,     0,   557,    25,     0,     0,     0,     0,
     536,   537,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,    10,
       0,     0,     0,   533,     0,   527,   538,   539,   546,   545,
     547,   548,   549,   550,   540,   542,   541,   543,   544,     0,
       0,    12,     0,     0,     0,     0,   524,     0,   525,   535,
       0,    11,    14,    22,    20,    17,    16,    21,    18,    19,
      15,     0,     0,   531,    13,    23,     0,   534,     0,     0,
       9
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -558,  -558,  -558,  -558,  -558,  -558,  -473,  -464,   112,    -9,
    -558,  -558,  -557,  -418,  -558,  1011,  -558,  -558,  -558,   -11,
    -558
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,   580,   581,   600,   582,   273,
     535,    10,   274,   275,   588,   276,   277,   278,   279,   280,
     281
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     536,   537,   534,    13,   584,    11,     1,  -530,   586,    12,
     284,   563,   544,   282,   545,   585,   546,   283,   547,   548,
     548,   549,   549,   550,   550,   551,   551,   552,   552,   553,
     553,    14,   538,   554,   554,   555,   555,   556,   556,   554,
     590,   555,   591,   556,   543,   543,   601,   610,     2,   589,
     544,   609,   545,   557,   546,   558,   547,   544,   548,   545,
     549,   546,   550,   547,   551,   548,   552,   549,   553,   550,
     559,   551,   554,   552,   555,   553,   556,   593,   -24,   554,
     560,   555,   552,   556,   553,   545,   542,   546,   554,   547,
     555,   548,   556,   549,   594,   550,   592,   551,   561,   552,
     605,   553,   546,   606,   547,   554,   548,   555,   549,   556,
     550,   607,   551,   608,   552,     3,   553,   604,   595,   596,
     554,   602,   555,   533,   556,   565,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   597,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   598,     0,     0,   587,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   543,
     265,   266,   267,   268,     0,   599,   269,     0,     5,  -530,
       0,   544,   285,   545,     0,   546,     0,   547,     0,   548,
       0,   549,     0,   550,     0,   551,   270,   552,   271,   553,
     272,   564,     0,   554,     0,   555,     0,   556,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   583,
       0,   534,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   583,
       0,   534,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    14,   265,     0,     0,
       0,     0,     0,     0,     0,   530,     0,   531,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   532,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     539,   540,   541,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    14,   265,   266,   267,   268,   562,
       0,   269,     0,     0,     0,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,     0,
       0,   270,     0,   271,     0,   272,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   603,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,     0,   265,   266,   267,   268,     0,     0,   269,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   270,
       0,   271,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,     0,   265
};

static const yytype_int16 yycheck[] =
{
      11,    12,    11,     1,   561,   211,     0,     0,     1,   114,
       0,   505,   506,     0,   508,    10,   510,     0,   512,   514,
     514,   516,   516,   518,   518,   520,   520,   522,   522,   524,
     524,    29,   504,   528,   528,   530,   530,   532,   532,   528,
     503,   530,   505,   532,   503,   503,   505,   505,    42,   505,
     506,   608,   508,   504,   510,     0,   512,   506,   514,   508,
     516,   510,   518,   512,   520,   514,   522,   516,   524,   518,
       1,   520,   528,   522,   530,   524,   532,    69,     1,   528,
     504,   530,   522,   532,   524,   508,    90,   510,   528,   512,
     530,   514,   532,   516,    86,   518,     1,   520,   504,   522,
     158,   524,   510,   233,   512,   528,   514,   530,   516,   532,
     518,   505,   520,   504,   522,   109,   524,   590,   110,   111,
     528,   585,   530,    11,   532,   543,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   236,    -1,    -1,   240,    -1,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   503,
     498,   499,   500,   501,    -1,   497,   504,    -1,   502,   502,
      -1,   506,   502,   508,    -1,   510,    -1,   512,    -1,   514,
      -1,   516,    -1,   518,    -1,   520,   524,   522,   526,   524,
     528,   542,    -1,   528,    -1,   530,    -1,   532,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   560,
      -1,   560,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   590,
      -1,   590,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,    29,   498,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   506,    -1,   508,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   526,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     269,   270,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,    29,   498,   499,   500,   501,   538,
      -1,   504,    -1,    -1,    -1,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,    -1,
      -1,   524,    -1,   526,    -1,   528,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   587,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,    -1,   498,   499,   500,   501,    -1,    -1,   504,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   524,
      -1,   526,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,    -1,   498
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     0,    42,   109,   192,   502,   535,   536,   537,   538,
     545,   211,   114,     1,    29,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   498,   499,   500,   501,   504,
     524,   526,   528,   543,   546,   547,   549,   550,   551,   552,
     553,   554,     0,     0,     0,   502,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     506,   508,   526,   542,   543,   544,   553,   553,   504,   549,
     549,   549,    90,   503,   506,   508,   510,   512,   514,   516,
     518,   520,   522,   524,   528,   530,   532,   504,     0,     1,
     504,   504,   549,   505,   553,   547,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     539,   540,   542,   553,   546,    10,     1,   240,   548,   505,
     503,   505,     1,    69,    86,   110,   111,   164,   236,   497,
     541,   505,   541,   549,   540,   158,   233,   505,   504,   546,
     505
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   534,   535,   535,   535,   535,   536,   536,   536,   537,
     538,   538,   539,   539,   540,   540,   541,   541,   541,   541,
     541,   541,   541,   541,   542,   542,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   545,   545,   545,   546,   546,   547,   547,
     548,   548,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   550,   550,   550,   550,   551,   552,   553,   553,   554
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     3,     1,     1,     1,    10,
       4,     6,     1,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     5,     5,     1,     3,     1,     1,
       0,     2,     1,     3,     6,     4,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (parser, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, parser, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, EagleDbParser *parser, void* scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (parser);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, EagleDbParser *parser, void* scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, EagleDbParser *parser, void* scanner)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , parser, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parser, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, EagleDbParser *parser, void* scanner)
{
  YYUSE (yyvaluep);
  YYUSE (parser);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 537: /* insert_statement  */
#line 584 "sql.y" /* yacc.c:1257  */
      { EagleDbSqlInsert_Delete(((*yyvaluep))); }
#line 3064 "y.tab.c" /* yacc.c:1257  */
        break;

    case 538: /* create_table_statement  */
#line 583 "sql.y" /* yacc.c:1257  */
      { EagleDbTable_Delete(((*yyvaluep))); }
#line 3070 "y.tab.c" /* yacc.c:1257  */
        break;

    case 539: /* column_definition_list  */
#line 577 "sql.y" /* yacc.c:1257  */
      { EagleLinkedList_DeleteWithItems(((*yyvaluep))); }
#line 3076 "y.tab.c" /* yacc.c:1257  */
        break;

    case 540: /* column_definition  */
#line 582 "sql.y" /* yacc.c:1257  */
      { EagleDbColumn_Delete(((*yyvaluep))); }
#line 3082 "y.tab.c" /* yacc.c:1257  */
        break;

    case 541: /* data_type  */
#line 581 "sql.y" /* yacc.c:1257  */
      { EagleMemory_Free(((*yyvaluep))); }
#line 3088 "y.tab.c" /* yacc.c:1257  */
        break;

    case 545: /* select_statement  */
#line 580 "sql.y" /* yacc.c:1257  */
      { EagleDbSqlSelect_Delete(((*yyvaluep))); }
#line 3094 "y.tab.c" /* yacc.c:1257  */
        break;

    case 546: /* column_expression_list  */
#line 577 "sql.y" /* yacc.c:1257  */
      { EagleLinkedList_DeleteWithItems(((*yyvaluep))); }
#line 3100 "y.tab.c" /* yacc.c:1257  */
        break;

    case 547: /* column_expression  */
#line 579 "sql.y" /* yacc.c:1257  */
      { EagleDbSqlExpression_DeleteRecursive(((*yyvaluep))); }
#line 3106 "y.tab.c" /* yacc.c:1257  */
        break;

    case 548: /* where_expression  */
#line 579 "sql.y" /* yacc.c:1257  */
      { EagleDbSqlExpression_DeleteRecursive(((*yyvaluep))); }
#line 3112 "y.tab.c" /* yacc.c:1257  */
        break;

    case 549: /* expression  */
#line 579 "sql.y" /* yacc.c:1257  */
      { EagleDbSqlExpression_DeleteRecursive(((*yyvaluep))); }
#line 3118 "y.tab.c" /* yacc.c:1257  */
        break;

    case 550: /* value  */
#line 578 "sql.y" /* yacc.c:1257  */
      { EagleDbSqlValue_Delete(((*yyvaluep))); }
#line 3124 "y.tab.c" /* yacc.c:1257  */
        break;

    case 551: /* integer  */
#line 578 "sql.y" /* yacc.c:1257  */
      { EagleDbSqlValue_Delete(((*yyvaluep))); }
#line 3130 "y.tab.c" /* yacc.c:1257  */
        break;

    case 553: /* identifier  */
#line 578 "sql.y" /* yacc.c:1257  */
      { EagleDbSqlValue_Delete(((*yyvaluep))); }
#line 3136 "y.tab.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (EagleDbParser *parser, void* scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 593 "sql.y" /* yacc.c:1646  */
    {
        parser->yyparse_ast = (yyvsp[-1]);
    }
#line 3406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 597 "sql.y" /* yacc.c:1646  */
    {
        parser->yyparse_ast = (yyvsp[-2]);
    }
#line 3414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 603 "sql.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); parser->yystatementtype = EagleDbSqlStatementTypeSelect; }
#line 3420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 604 "sql.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); parser->yystatementtype = EagleDbSqlStatementTypeCreateTable; }
#line 3426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 605 "sql.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); parser->yystatementtype = EagleDbSqlStatementTypeInsert; }
#line 3432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 612 "sql.y" /* yacc.c:1646  */
    {
        EagleDbSqlInsert *insert = EagleDbSqlInsert_New();
        char *table = strdup(((EagleDbSqlValue*) (yyvsp[-7]))->value.identifier);
        EagleDbSqlValue_Delete((yyvsp[-7]));
        insert->table = table;
        insert->names = (yyvsp[-5]);
        insert->values = (yyvsp[-1]);
        (yyval) = insert;
    }
#line 3446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 625 "sql.y" /* yacc.c:1646  */
    {
        ABORT("You cannot use the keyword '%s' for an table name.", (yyvsp[-1]));
        (yyval) = NULL;
    }
#line 3455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 631 "sql.y" /* yacc.c:1646  */
    {
        EagleDbTable *table = EagleDbTable_New(((EagleDbSqlValue*) (yyvsp[-3]))->value.identifier);
        EagleDbTable_setColumns(table, (yyvsp[-1]));
        EagleDbSqlValue_Delete((yyvsp[-3]));
        (yyval) = table;
    }
#line 3466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 640 "sql.y" /* yacc.c:1646  */
    {
        (yyval) = EagleLinkedList_New();
        EagleLinkedListItem *item = EagleLinkedListItem_New((yyvsp[0]), EagleTrue, (void(*)(void*)) EagleDbColumn_Delete);
        EagleLinkedList_add((yyval), item);
    }
#line 3476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 646 "sql.y" /* yacc.c:1646  */
    {
        EagleLinkedListItem *item = EagleLinkedListItem_New((yyvsp[0]), EagleTrue, (void(*)(void*)) EagleDbColumn_Delete);
        EagleLinkedList_add((yyvsp[-2]), item);
        (yyval) = (yyval);
    }
#line 3486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 654 "sql.y" /* yacc.c:1646  */
    {
        ABORT("You cannot use the keyword '%s' for a column name.", (yyvsp[-1]));
        (yyval) = NULL;
    }
#line 3495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 659 "sql.y" /* yacc.c:1646  */
    {
        (yyval) = EagleDbColumn_New(((EagleDbSqlValue*) (yyvsp[-1]))->value.identifier, *((int*) (yyvsp[0])));
        EagleDbSqlValue_Delete((yyvsp[-1]));
        EagleMemory_Free((yyvsp[0]));
    }
#line 3505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 667 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleData_Int(EagleDataTypeInteger); }
#line 3511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 668 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleData_Int(EagleDataTypeInteger); }
#line 3517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 669 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleData_Int(EagleDataTypeVarchar); }
#line 3523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 670 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleData_Int(EagleDataTypeVarchar); }
#line 3529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 671 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleData_Int(EagleDataTypeFloat); }
#line 3535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 672 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleData_Int(EagleDataTypeFloat); }
#line 3541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 673 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleData_Int(EagleDataTypeFloat); }
#line 3547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 674 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleData_Int(EagleDataTypeFloat); }
#line 3553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 682 "sql.y" /* yacc.c:1646  */
    { (yyval) = "A"; }
#line 3559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 683 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ABS"; }
#line 3565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 684 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ABSOLUTE"; }
#line 3571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 685 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ACTION"; }
#line 3577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 686 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ADA"; }
#line 3583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 687 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ADMIN"; }
#line 3589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 688 "sql.y" /* yacc.c:1646  */
    { (yyval) = "AFTER"; }
#line 3595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 689 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ALWAYS"; }
#line 3601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 690 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ASC"; }
#line 3607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 691 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ASSERTION"; }
#line 3613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 692 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ASSIGNMENT"; }
#line 3619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 693 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ATTRIBUTE"; }
#line 3625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 694 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ATTRIBUTES"; }
#line 3631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 695 "sql.y" /* yacc.c:1646  */
    { (yyval) = "AVG"; }
#line 3637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 696 "sql.y" /* yacc.c:1646  */
    { (yyval) = "BEFORE"; }
#line 3643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 697 "sql.y" /* yacc.c:1646  */
    { (yyval) = "BERNOULLI"; }
#line 3649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 698 "sql.y" /* yacc.c:1646  */
    { (yyval) = "BREADTH"; }
#line 3655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 699 "sql.y" /* yacc.c:1646  */
    { (yyval) = "C"; }
#line 3661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 700 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CARDINALITY"; }
#line 3667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 701 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CASCADE"; }
#line 3673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 702 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CATALOG"; }
#line 3679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 703 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CATALOG_NAME"; }
#line 3685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 704 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CEIL"; }
#line 3691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 705 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CEILING"; }
#line 3697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 706 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CHAIN"; }
#line 3703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 707 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CHARACTERISTICS"; }
#line 3709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 708 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CHARACTERS"; }
#line 3715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 709 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CHARACTER_LENGTH"; }
#line 3721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 710 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CHARACTER_SET_CATALOG"; }
#line 3727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 711 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CHARACTER_SET_NAME"; }
#line 3733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 712 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CHARACTER_SET_SCHEMA"; }
#line 3739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 713 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CHAR_LENGTH"; }
#line 3745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 714 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CHECKED"; }
#line 3751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 715 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CLASS_ORIGIN"; }
#line 3757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 716 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COALESCE"; }
#line 3763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 717 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COBOL"; }
#line 3769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 718 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CODE_UNITS"; }
#line 3775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 719 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COLLATION"; }
#line 3781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 720 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COLLATION_CATALOG"; }
#line 3787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 721 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COLLATION_NAME"; }
#line 3793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 722 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COLLATION_SCHEMA"; }
#line 3799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 723 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COLLECT"; }
#line 3805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 724 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COLUMN_NAME"; }
#line 3811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 725 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COMMAND_FUNCTION"; }
#line 3817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 726 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COMMAND_FUNCTION_CODE"; }
#line 3823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 727 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COMMITTED"; }
#line 3829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 728 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CONDITION"; }
#line 3835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 729 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CONDITION_NUMBER"; }
#line 3841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 730 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CONNECTION_NAME"; }
#line 3847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 731 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CONSTRAINTS"; }
#line 3853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 732 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CONSTRAINT_CATALOG"; }
#line 3859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 733 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CONSTRAINT_NAME"; }
#line 3865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 734 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CONSTRAINT_SCHEMA"; }
#line 3871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 735 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CONSTRUCTORS"; }
#line 3877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 736 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CONTAINS"; }
#line 3883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 737 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CONVERT"; }
#line 3889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 738 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CORR"; }
#line 3895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 739 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COUNT"; }
#line 3901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 740 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COVAR_POP"; }
#line 3907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 741 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COVAR_SAMP"; }
#line 3913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 742 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CUME_DIST"; }
#line 3919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 743 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CURRENT_COLLATION"; }
#line 3925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 744 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CURSOR_NAME"; }
#line 3931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 745 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DATA"; }
#line 3937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 746 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DATETIME_INTERVAL_CODE"; }
#line 3943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 747 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DATETIME_INTERVAL_PRECISION"; }
#line 3949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 748 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DEFAULTS"; }
#line 3955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 749 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DEFERRABLE"; }
#line 3961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 750 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DEFERRED"; }
#line 3967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 751 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DEFINED"; }
#line 3973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 752 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DEFINER"; }
#line 3979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 753 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DEGREE"; }
#line 3985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 754 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DENSE_RANK"; }
#line 3991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 755 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DEPTH"; }
#line 3997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 756 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DERIVED"; }
#line 4003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 757 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DESC"; }
#line 4009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 758 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DESCRIPTOR"; }
#line 4015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 759 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DIAGNOSTICS"; }
#line 4021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 760 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DISPATCH"; }
#line 4027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 761 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DOMAIN"; }
#line 4033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 762 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DYNAMIC_FUNCTION"; }
#line 4039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 763 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DYNAMIC_FUNCTION_CODE"; }
#line 4045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 764 "sql.y" /* yacc.c:1646  */
    { (yyval) = "EQUALS"; }
#line 4051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 765 "sql.y" /* yacc.c:1646  */
    { (yyval) = "EVERY"; }
#line 4057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 766 "sql.y" /* yacc.c:1646  */
    { (yyval) = "EXCEPTION"; }
#line 4063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 767 "sql.y" /* yacc.c:1646  */
    { (yyval) = "EXCLUDE"; }
#line 4069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 768 "sql.y" /* yacc.c:1646  */
    { (yyval) = "EXCLUDING"; }
#line 4075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 769 "sql.y" /* yacc.c:1646  */
    { (yyval) = "EXP"; }
#line 4081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 770 "sql.y" /* yacc.c:1646  */
    { (yyval) = "EXTRACT"; }
#line 4087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 771 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FINAL"; }
#line 4093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 772 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FIRST"; }
#line 4099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 773 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FLOOR"; }
#line 4105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 774 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FOLLOWING"; }
#line 4111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 775 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FORTRAN"; }
#line 4117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 776 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FOUND"; }
#line 4123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 777 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FUSION"; }
#line 4129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 778 "sql.y" /* yacc.c:1646  */
    { (yyval) = "G"; }
#line 4135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 779 "sql.y" /* yacc.c:1646  */
    { (yyval) = "GENERAL"; }
#line 4141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 780 "sql.y" /* yacc.c:1646  */
    { (yyval) = "GO"; }
#line 4147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 781 "sql.y" /* yacc.c:1646  */
    { (yyval) = "GOTO"; }
#line 4153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 782 "sql.y" /* yacc.c:1646  */
    { (yyval) = "GRANTED"; }
#line 4159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 783 "sql.y" /* yacc.c:1646  */
    { (yyval) = "HIERARCHY"; }
#line 4165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 784 "sql.y" /* yacc.c:1646  */
    { (yyval) = "IMPLEMENTATION"; }
#line 4171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 785 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INCLUDING"; }
#line 4177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 786 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INCREMENT"; }
#line 4183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 787 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INITIALLY"; }
#line 4189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 788 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INSTANCE"; }
#line 4195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 789 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INSTANTIABLE"; }
#line 4201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 790 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INTERSECTION"; }
#line 4207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 791 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INVOKER"; }
#line 4213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 792 "sql.y" /* yacc.c:1646  */
    { (yyval) = "K"; }
#line 4219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 793 "sql.y" /* yacc.c:1646  */
    { (yyval) = "KEY"; }
#line 4225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 794 "sql.y" /* yacc.c:1646  */
    { (yyval) = "KEY_MEMBER"; }
#line 4231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 795 "sql.y" /* yacc.c:1646  */
    { (yyval) = "KEY_TYPE"; }
#line 4237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 796 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LAST"; }
#line 4243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 797 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LENGTH"; }
#line 4249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 798 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LEVEL"; }
#line 4255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 799 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LN"; }
#line 4261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 800 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LOCATOR"; }
#line 4267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 801 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LOWER"; }
#line 4273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 802 "sql.y" /* yacc.c:1646  */
    { (yyval) = "M"; }
#line 4279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 803 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MAP"; }
#line 4285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 804 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MATCHED"; }
#line 4291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 805 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MAX"; }
#line 4297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 806 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MAXVALUE"; }
#line 4303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 807 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MESSAGE_LENGTH"; }
#line 4309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 808 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MESSAGE_OCTET_LENGTH"; }
#line 4315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 809 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MESSAGE_TEXT"; }
#line 4321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 810 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MIN"; }
#line 4327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 811 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MINVALUE"; }
#line 4333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 812 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MOD"; }
#line 4339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 813 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MORE"; }
#line 4345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 814 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MUMPS"; }
#line 4351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 815 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NAME"; }
#line 4357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 816 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NAMES"; }
#line 4363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 817 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NESTING"; }
#line 4369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 818 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NEXT"; }
#line 4375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 819 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NORMALIZE"; }
#line 4381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 820 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NORMALIZED"; }
#line 4387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 821 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NULLABLE"; }
#line 4393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 822 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NULLIF"; }
#line 4399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 823 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NULLS"; }
#line 4405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 824 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NUMBER"; }
#line 4411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 825 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OBJECT"; }
#line 4417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 826 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OCTETS"; }
#line 4423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 827 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OCTET_LENGTH"; }
#line 4429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 828 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OPTION"; }
#line 4435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 829 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OPTIONS"; }
#line 4441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 830 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ORDERING"; }
#line 4447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 831 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ORDINALITY"; }
#line 4453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 832 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OTHERS"; }
#line 4459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 833 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OVERLAY"; }
#line 4465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 834 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OVERRIDING"; }
#line 4471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 835 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PAD"; }
#line 4477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 836 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PARAMETER_MODE"; }
#line 4483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 837 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PARAMETER_NAME"; }
#line 4489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 838 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PARAMETER_ORDINAL_POSITION"; }
#line 4495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 839 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PARAMETER_SPECIFIC_CATALOG"; }
#line 4501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 840 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PARAMETER_SPECIFIC_NAME"; }
#line 4507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 841 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PARAMETER_SPECIFIC_SCHEMA"; }
#line 4513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 842 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PARTIAL"; }
#line 4519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 843 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PASCAL"; }
#line 4525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 844 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PATH"; }
#line 4531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 845 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PERCENTILE_CONT"; }
#line 4537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 846 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PERCENTILE_DISC"; }
#line 4543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 847 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PERCENT_RANK"; }
#line 4549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 848 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PLACING"; }
#line 4555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 849 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PLI"; }
#line 4561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 850 "sql.y" /* yacc.c:1646  */
    { (yyval) = "POSITION"; }
#line 4567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 851 "sql.y" /* yacc.c:1646  */
    { (yyval) = "POWER"; }
#line 4573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 852 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PRECEDING"; }
#line 4579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 853 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PRESERVE"; }
#line 4585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 854 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PRIOR"; }
#line 4591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 855 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PRIVILEGES"; }
#line 4597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 856 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PUBLIC"; }
#line 4603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 857 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RANK"; }
#line 4609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 858 "sql.y" /* yacc.c:1646  */
    { (yyval) = "READ"; }
#line 4615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 859 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RELATIVE"; }
#line 4621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 860 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REPEATABLE"; }
#line 4627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 861 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RESTART"; }
#line 4633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 862 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RETURNED_CARDINALITY"; }
#line 4639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 863 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RETURNED_LENGTH"; }
#line 4645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 864 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RETURNED_OCTET_LENGTH"; }
#line 4651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 865 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RETURNED_SQLSTATE"; }
#line 4657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 866 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ROLE"; }
#line 4663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 867 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ROUTINE"; }
#line 4669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 868 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ROUTINE_CATALOG"; }
#line 4675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 869 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ROUTINE_NAME"; }
#line 4681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 870 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ROUTINE_SCHEMA"; }
#line 4687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 871 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ROW_COUNT"; }
#line 4693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 872 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ROW_NUMBER"; }
#line 4699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 873 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SCALE"; }
#line 4705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 874 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SCHEMA"; }
#line 4711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 875 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SCHEMA_NAME"; }
#line 4717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 876 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SCOPE_CATALOG"; }
#line 4723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 877 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SCOPE_NAME"; }
#line 4729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 878 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SCOPE_SCHEMA"; }
#line 4735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 879 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SECTION"; }
#line 4741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 880 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SECURITY"; }
#line 4747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 881 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SELF"; }
#line 4753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 882 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SEQUENCE"; }
#line 4759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 883 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SERIALIZABLE"; }
#line 4765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 884 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SERVER_NAME"; }
#line 4771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 885 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SESSION"; }
#line 4777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 886 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SETS"; }
#line 4783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 887 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SIMPLE"; }
#line 4789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 888 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SIZE"; }
#line 4795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 889 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SOURCE"; }
#line 4801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 890 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SPACE"; }
#line 4807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 891 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SPECIFIC_NAME"; }
#line 4813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 892 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SQRT"; }
#line 4819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 893 "sql.y" /* yacc.c:1646  */
    { (yyval) = "STATE"; }
#line 4825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 894 "sql.y" /* yacc.c:1646  */
    { (yyval) = "STATEMENT"; }
#line 4831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 895 "sql.y" /* yacc.c:1646  */
    { (yyval) = "STDDEV_POP"; }
#line 4837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 896 "sql.y" /* yacc.c:1646  */
    { (yyval) = "STDDEV_SAMP"; }
#line 4843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 897 "sql.y" /* yacc.c:1646  */
    { (yyval) = "STRUCTURE"; }
#line 4849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 898 "sql.y" /* yacc.c:1646  */
    { (yyval) = "STYLE"; }
#line 4855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 899 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SUBCLASS_ORIGIN"; }
#line 4861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 900 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SUBSTRING"; }
#line 4867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 901 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SUM"; }
#line 4873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 902 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TABLESAMPLE"; }
#line 4879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 903 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TABLE_NAME"; }
#line 4885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 904 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TEMPORARY"; }
#line 4891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 905 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TIES"; }
#line 4897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 906 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TOP_LEVEL_COUNT"; }
#line 4903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 907 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRANSACTION"; }
#line 4909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 908 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRANSACTIONS_COMMITTED"; }
#line 4915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 909 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRANSACTIONS_ROLLED_BACK"; }
#line 4921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 910 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRANSACTION_ACTIVE"; }
#line 4927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 911 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRANSFORM"; }
#line 4933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 912 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRANSFORMS"; }
#line 4939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 913 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRANSLATE"; }
#line 4945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 914 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRIGGER_CATALOG"; }
#line 4951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 915 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRIGGER_NAME"; }
#line 4957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 916 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRIGGER_SCHEMA"; }
#line 4963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 917 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRIM"; }
#line 4969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 918 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TYPE"; }
#line 4975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 919 "sql.y" /* yacc.c:1646  */
    { (yyval) = "UNBOUNDED"; }
#line 4981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 920 "sql.y" /* yacc.c:1646  */
    { (yyval) = "UNCOMMITTED"; }
#line 4987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 921 "sql.y" /* yacc.c:1646  */
    { (yyval) = "UNDER"; }
#line 4993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 922 "sql.y" /* yacc.c:1646  */
    { (yyval) = "UNNAMED"; }
#line 4999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 923 "sql.y" /* yacc.c:1646  */
    { (yyval) = "USAGE"; }
#line 5005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 924 "sql.y" /* yacc.c:1646  */
    { (yyval) = "USER_DEFINED_TYPE_CATALOG"; }
#line 5011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 925 "sql.y" /* yacc.c:1646  */
    { (yyval) = "USER_DEFINED_TYPE_CODE"; }
#line 5017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 926 "sql.y" /* yacc.c:1646  */
    { (yyval) = "USER_DEFINED_TYPE_NAME"; }
#line 5023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 927 "sql.y" /* yacc.c:1646  */
    { (yyval) = "USER_DEFINED_TYPE_SCHEMA"; }
#line 5029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 928 "sql.y" /* yacc.c:1646  */
    { (yyval) = "VIEW"; }
#line 5035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 929 "sql.y" /* yacc.c:1646  */
    { (yyval) = "WORK"; }
#line 5041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 930 "sql.y" /* yacc.c:1646  */
    { (yyval) = "WRITE"; }
#line 5047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 931 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ZONE"; }
#line 5053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 935 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ADD"; }
#line 5059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 936 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ALL"; }
#line 5065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 937 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ALLOCATE"; }
#line 5071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 938 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ALTER"; }
#line 5077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 939 "sql.y" /* yacc.c:1646  */
    { (yyval) = "AND"; }
#line 5083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 940 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ANY"; }
#line 5089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 941 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ARE"; }
#line 5095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 942 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ARRAY"; }
#line 5101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 943 "sql.y" /* yacc.c:1646  */
    { (yyval) = "AS"; }
#line 5107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 944 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ASENSITIVE"; }
#line 5113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 945 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ASYMMETRIC"; }
#line 5119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 946 "sql.y" /* yacc.c:1646  */
    { (yyval) = "AT"; }
#line 5125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 947 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ATOMIC"; }
#line 5131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 948 "sql.y" /* yacc.c:1646  */
    { (yyval) = "AUTHORIZATION"; }
#line 5137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 949 "sql.y" /* yacc.c:1646  */
    { (yyval) = "BEGIN"; }
#line 5143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 950 "sql.y" /* yacc.c:1646  */
    { (yyval) = "BETWEEN"; }
#line 5149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 951 "sql.y" /* yacc.c:1646  */
    { (yyval) = "BIGINT"; }
#line 5155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 952 "sql.y" /* yacc.c:1646  */
    { (yyval) = "BINARY"; }
#line 5161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 953 "sql.y" /* yacc.c:1646  */
    { (yyval) = "BIT"; }
#line 5167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 954 "sql.y" /* yacc.c:1646  */
    { (yyval) = "BLOB"; }
#line 5173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 955 "sql.y" /* yacc.c:1646  */
    { (yyval) = "BOOLEAN"; }
#line 5179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 956 "sql.y" /* yacc.c:1646  */
    { (yyval) = "BOTH"; }
#line 5185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 957 "sql.y" /* yacc.c:1646  */
    { (yyval) = "BY"; }
#line 5191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 958 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CALL"; }
#line 5197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 959 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CALLED"; }
#line 5203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 960 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CASCADED"; }
#line 5209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 961 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CASE"; }
#line 5215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 962 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CAST"; }
#line 5221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 963 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CHAR"; }
#line 5227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 964 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CHARACTER"; }
#line 5233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 965 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CHECK"; }
#line 5239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 966 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CLOB"; }
#line 5245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 967 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CLOSE"; }
#line 5251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 968 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COLLATE"; }
#line 5257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 969 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COLUMN"; }
#line 5263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 970 "sql.y" /* yacc.c:1646  */
    { (yyval) = "COMMIT"; }
#line 5269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 971 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CONNECT"; }
#line 5275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 972 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CONSTRAINT"; }
#line 5281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 973 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CONTINUE"; }
#line 5287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 974 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CORRESPONDING"; }
#line 5293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 975 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CREATE"; }
#line 5299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 976 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CROSS"; }
#line 5305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 977 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CUBE"; }
#line 5311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 978 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CURRENT"; }
#line 5317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 979 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CURRENT_DATE"; }
#line 5323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 980 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CURRENT_DEFAULT_TRANSFORM_GROUP"; }
#line 5329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 981 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CURRENT_PATH"; }
#line 5335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 982 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CURRENT_ROLE"; }
#line 5341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 983 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CURRENT_TIME"; }
#line 5347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 984 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CURRENT_TIMESTAMP"; }
#line 5353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 985 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CURRENT_TRANSFORM_GROUP_FOR_TYPE"; }
#line 5359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 986 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CURRENT_USER"; }
#line 5365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 987 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CURSOR"; }
#line 5371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 988 "sql.y" /* yacc.c:1646  */
    { (yyval) = "CYCLE"; }
#line 5377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 989 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DATE"; }
#line 5383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 990 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DAY"; }
#line 5389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 991 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DEALLOCATE"; }
#line 5395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 992 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DEC"; }
#line 5401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 993 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DECIMAL"; }
#line 5407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 994 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DECLARE"; }
#line 5413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 995 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DEFAULT"; }
#line 5419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 996 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DELETE"; }
#line 5425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 997 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DEREF"; }
#line 5431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 998 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DESCRIBE"; }
#line 5437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 999 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DETERMINISTIC"; }
#line 5443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1000 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DISCONNECT"; }
#line 5449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1001 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DISTINCT"; }
#line 5455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1002 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DOUBLE"; }
#line 5461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1003 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DROP"; }
#line 5467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1004 "sql.y" /* yacc.c:1646  */
    { (yyval) = "DYNAMIC"; }
#line 5473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1005 "sql.y" /* yacc.c:1646  */
    { (yyval) = "EACH"; }
#line 5479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1006 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ELEMENT"; }
#line 5485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1007 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ELSE"; }
#line 5491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1008 "sql.y" /* yacc.c:1646  */
    { (yyval) = "END"; }
#line 5497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1009 "sql.y" /* yacc.c:1646  */
    { (yyval) = "END-EXEC"; }
#line 5503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1010 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ESCAPE"; }
#line 5509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1011 "sql.y" /* yacc.c:1646  */
    { (yyval) = "EXCEPT"; }
#line 5515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1012 "sql.y" /* yacc.c:1646  */
    { (yyval) = "EXEC"; }
#line 5521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1013 "sql.y" /* yacc.c:1646  */
    { (yyval) = "EXECUTE"; }
#line 5527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1014 "sql.y" /* yacc.c:1646  */
    { (yyval) = "EXISTS"; }
#line 5533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1015 "sql.y" /* yacc.c:1646  */
    { (yyval) = "EXTERNAL"; }
#line 5539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1016 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FALSE"; }
#line 5545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1017 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FETCH"; }
#line 5551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1018 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FILTER"; }
#line 5557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1019 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FLOAT"; }
#line 5563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1020 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FOR"; }
#line 5569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1021 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FOREIGN"; }
#line 5575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1022 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FREE"; }
#line 5581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1023 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FROM"; }
#line 5587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1024 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FULL"; }
#line 5593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1025 "sql.y" /* yacc.c:1646  */
    { (yyval) = "FUNCTION"; }
#line 5599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1026 "sql.y" /* yacc.c:1646  */
    { (yyval) = "GET"; }
#line 5605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1027 "sql.y" /* yacc.c:1646  */
    { (yyval) = "GLOBAL"; }
#line 5611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1028 "sql.y" /* yacc.c:1646  */
    { (yyval) = "GRANT"; }
#line 5617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1029 "sql.y" /* yacc.c:1646  */
    { (yyval) = "GROUP"; }
#line 5623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1030 "sql.y" /* yacc.c:1646  */
    { (yyval) = "GROUPING"; }
#line 5629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 1031 "sql.y" /* yacc.c:1646  */
    { (yyval) = "HAVING"; }
#line 5635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1032 "sql.y" /* yacc.c:1646  */
    { (yyval) = "HOLD"; }
#line 5641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1033 "sql.y" /* yacc.c:1646  */
    { (yyval) = "HOUR"; }
#line 5647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1034 "sql.y" /* yacc.c:1646  */
    { (yyval) = "IDENTITY"; }
#line 5653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1035 "sql.y" /* yacc.c:1646  */
    { (yyval) = "IMMEDIATE"; }
#line 5659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1036 "sql.y" /* yacc.c:1646  */
    { (yyval) = "IN"; }
#line 5665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1037 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INDICATOR"; }
#line 5671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 1038 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INNER"; }
#line 5677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1039 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INOUT"; }
#line 5683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1040 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INPUT"; }
#line 5689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1041 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INSENSITIVE"; }
#line 5695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1042 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INSERT"; }
#line 5701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1043 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INT"; }
#line 5707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1044 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INTEGER"; }
#line 5713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1045 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INTERSECT"; }
#line 5719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1046 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INTERVAL"; }
#line 5725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1047 "sql.y" /* yacc.c:1646  */
    { (yyval) = "INTO"; }
#line 5731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1048 "sql.y" /* yacc.c:1646  */
    { (yyval) = "IS"; }
#line 5737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1049 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ISOLATION"; }
#line 5743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1050 "sql.y" /* yacc.c:1646  */
    { (yyval) = "JOIN"; }
#line 5749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1051 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LANGUAGE"; }
#line 5755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1052 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LARGE"; }
#line 5761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 1053 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LATERAL"; }
#line 5767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 1054 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LEADING"; }
#line 5773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 1055 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LEFT"; }
#line 5779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 1056 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LIKE"; }
#line 5785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1057 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LOCAL"; }
#line 5791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1058 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LOCALTIME"; }
#line 5797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1059 "sql.y" /* yacc.c:1646  */
    { (yyval) = "LOCALTIMESTAMP"; }
#line 5803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1060 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MATCH"; }
#line 5809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1061 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MEMBER"; }
#line 5815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1062 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MERGE"; }
#line 5821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1063 "sql.y" /* yacc.c:1646  */
    { (yyval) = "METHOD"; }
#line 5827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1064 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MINUTE"; }
#line 5833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1065 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MODIFIES"; }
#line 5839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1066 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MODULE"; }
#line 5845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1067 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MONTH"; }
#line 5851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1068 "sql.y" /* yacc.c:1646  */
    { (yyval) = "MULTISET"; }
#line 5857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1069 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NATIONAL"; }
#line 5863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1070 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NATURAL"; }
#line 5869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1071 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NCHAR"; }
#line 5875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1072 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NCLOB"; }
#line 5881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1073 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NEW"; }
#line 5887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1074 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NO"; }
#line 5893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1075 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NONE"; }
#line 5899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1076 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NOT"; }
#line 5905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1077 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NULL"; }
#line 5911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 1078 "sql.y" /* yacc.c:1646  */
    { (yyval) = "NUMERIC"; }
#line 5917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1079 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OF"; }
#line 5923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1080 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OLD"; }
#line 5929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1081 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ON"; }
#line 5935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1082 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ONLY"; }
#line 5941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1083 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OPEN"; }
#line 5947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1084 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OR"; }
#line 5953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1085 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ORDER"; }
#line 5959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1086 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OUT"; }
#line 5965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1087 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OUTER"; }
#line 5971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1088 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OUTPUT"; }
#line 5977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1089 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OVER"; }
#line 5983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1090 "sql.y" /* yacc.c:1646  */
    { (yyval) = "OVERLAPS"; }
#line 5989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1091 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PARAMETER"; }
#line 5995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1092 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PARTITION"; }
#line 6001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1093 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PRECISION"; }
#line 6007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1094 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PREPARE"; }
#line 6013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1095 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PRIMARY"; }
#line 6019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1096 "sql.y" /* yacc.c:1646  */
    { (yyval) = "PROCEDURE"; }
#line 6025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1097 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RANGE"; }
#line 6031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1098 "sql.y" /* yacc.c:1646  */
    { (yyval) = "READS"; }
#line 6037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1099 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REAL"; }
#line 6043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1100 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RECURSIVE"; }
#line 6049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1101 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REF"; }
#line 6055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1102 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REFERENCES"; }
#line 6061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1103 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REFERENCING"; }
#line 6067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1104 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REGR_AVGX"; }
#line 6073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1105 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REGR_AVGY"; }
#line 6079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1106 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REGR_COUNT"; }
#line 6085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1107 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REGR_INTERCEPT"; }
#line 6091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1108 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REGR_R2"; }
#line 6097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1109 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REGR_SLOPE"; }
#line 6103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1110 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REGR_SXX"; }
#line 6109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1111 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REGR_SXY"; }
#line 6115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1112 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REGR_SYY"; }
#line 6121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1113 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RELEASE"; }
#line 6127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1114 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RESULT"; }
#line 6133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1115 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RETURN"; }
#line 6139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1116 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RETURNS"; }
#line 6145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1117 "sql.y" /* yacc.c:1646  */
    { (yyval) = "REVOKE"; }
#line 6151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1118 "sql.y" /* yacc.c:1646  */
    { (yyval) = "RIGHT"; }
#line 6157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1119 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ROLLBACK"; }
#line 6163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1120 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ROLLUP"; }
#line 6169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1121 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ROW"; }
#line 6175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1122 "sql.y" /* yacc.c:1646  */
    { (yyval) = "ROWS"; }
#line 6181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1123 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SAVEPOINT"; }
#line 6187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1124 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SCROLL"; }
#line 6193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1125 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SEARCH"; }
#line 6199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 1126 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SECOND"; }
#line 6205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1127 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SELECT"; }
#line 6211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 1128 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SENSITIVE"; }
#line 6217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1129 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SESSION_USER"; }
#line 6223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 1130 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SET"; }
#line 6229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 1131 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SIMILAR"; }
#line 6235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 1132 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SMALLINT"; }
#line 6241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 1133 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SOME"; }
#line 6247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 1134 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SPECIFIC"; }
#line 6253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 1135 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SPECIFICTYPE"; }
#line 6259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 1136 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SQL"; }
#line 6265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1137 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SQLEXCEPTION"; }
#line 6271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 1138 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SQLSTATE"; }
#line 6277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1139 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SQLWARNING"; }
#line 6283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1140 "sql.y" /* yacc.c:1646  */
    { (yyval) = "START"; }
#line 6289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1141 "sql.y" /* yacc.c:1646  */
    { (yyval) = "STATIC"; }
#line 6295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 1142 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SUBMULTISET"; }
#line 6301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 1143 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SYMMETRIC"; }
#line 6307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 1144 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SYSTEM"; }
#line 6313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 1145 "sql.y" /* yacc.c:1646  */
    { (yyval) = "SYSTEM_USER"; }
#line 6319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1146 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TABLE"; }
#line 6325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1147 "sql.y" /* yacc.c:1646  */
    { (yyval) = "THEN"; }
#line 6331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1148 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TIME"; }
#line 6337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1149 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TIMESTAMP"; }
#line 6343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1150 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TIMEZONE_HOUR"; }
#line 6349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1151 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TIMEZONE_MINUTE"; }
#line 6355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1152 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TO"; }
#line 6361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1153 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRAILING"; }
#line 6367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1154 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRANSLATION"; }
#line 6373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1155 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TREAT"; }
#line 6379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1156 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRIGGER"; }
#line 6385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1157 "sql.y" /* yacc.c:1646  */
    { (yyval) = "TRUE"; }
#line 6391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 1158 "sql.y" /* yacc.c:1646  */
    { (yyval) = "UESCAPE"; }
#line 6397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1159 "sql.y" /* yacc.c:1646  */
    { (yyval) = "UNION"; }
#line 6403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1160 "sql.y" /* yacc.c:1646  */
    { (yyval) = "UNIQUE"; }
#line 6409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1161 "sql.y" /* yacc.c:1646  */
    { (yyval) = "UNKNOWN"; }
#line 6415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 1162 "sql.y" /* yacc.c:1646  */
    { (yyval) = "UNNEST"; }
#line 6421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1163 "sql.y" /* yacc.c:1646  */
    { (yyval) = "UPDATE"; }
#line 6427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1164 "sql.y" /* yacc.c:1646  */
    { (yyval) = "UPPER"; }
#line 6433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1165 "sql.y" /* yacc.c:1646  */
    { (yyval) = "USER"; }
#line 6439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1166 "sql.y" /* yacc.c:1646  */
    { (yyval) = "USING"; }
#line 6445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1167 "sql.y" /* yacc.c:1646  */
    { (yyval) = "VALUE"; }
#line 6451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1168 "sql.y" /* yacc.c:1646  */
    { (yyval) = "VALUES"; }
#line 6457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1169 "sql.y" /* yacc.c:1646  */
    { (yyval) = "VAR_POP"; }
#line 6463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1170 "sql.y" /* yacc.c:1646  */
    { (yyval) = "VAR_SAMP"; }
#line 6469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1171 "sql.y" /* yacc.c:1646  */
    { (yyval) = "VARCHAR"; }
#line 6475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 1172 "sql.y" /* yacc.c:1646  */
    { (yyval) = "VARYING"; }
#line 6481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1173 "sql.y" /* yacc.c:1646  */
    { (yyval) = "WHEN"; }
#line 6487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1174 "sql.y" /* yacc.c:1646  */
    { (yyval) = "WHENEVER"; }
#line 6493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1175 "sql.y" /* yacc.c:1646  */
    { (yyval) = "WHERE"; }
#line 6499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1176 "sql.y" /* yacc.c:1646  */
    { (yyval) = "WIDTH_BUCKET"; }
#line 6505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1177 "sql.y" /* yacc.c:1646  */
    { (yyval) = "WINDOW"; }
#line 6511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1178 "sql.y" /* yacc.c:1646  */
    { (yyval) = "WITH"; }
#line 6517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1179 "sql.y" /* yacc.c:1646  */
    { (yyval) = "WITHIN"; }
#line 6523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1180 "sql.y" /* yacc.c:1646  */
    { (yyval) = "WITHOUT"; }
#line 6529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1181 "sql.y" /* yacc.c:1646  */
    { (yyval) = "YEAR"; }
#line 6535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1185 "sql.y" /* yacc.c:1646  */
    {
        ABORT("%s", "Missing expression list after SELECT");
        (yyval) = NULL;
    }
#line 6544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1190 "sql.y" /* yacc.c:1646  */
    {
        EagleLinkedList_DeleteWithItems((yyvsp[-3]));
        EagleDbSqlValue_Delete((yyvsp[-1]));
        
        ABORT("%s", "Unexpected token after FROM clause");
        (yyval) = NULL;
    }
#line 6556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1198 "sql.y" /* yacc.c:1646  */
    {
        EagleDbSqlSelect *select = EagleDbSqlSelect_New();
        select->selectExpressions = (yyvsp[-3]);
        char *name = strdup(((EagleDbSqlValue*) (yyvsp[-1]))->value.identifier);
        EagleDbSqlValue_Delete((yyvsp[-1]));
        select->tableName = name;
        select->whereExpression = (yyvsp[0]);
        (yyval) = select;
    }
#line 6570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1210 "sql.y" /* yacc.c:1646  */
    {
        (yyval) = EagleLinkedList_New();
        EagleLinkedListItem *item = EagleLinkedListItem_New((yyvsp[0]), EagleTrue, (void(*)(void*)) EagleDbSqlExpression_DeleteRecursive);
        EagleLinkedList_add((yyval), item);
    }
#line 6580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1216 "sql.y" /* yacc.c:1646  */
    {
        EagleLinkedListItem *item = EagleLinkedListItem_New((yyvsp[0]), EagleTrue, (void(*)(void*)) EagleDbSqlExpression_DeleteRecursive);
        EagleLinkedList_add((yyvsp[-2]), item);
        (yyval) = (yyval);
    }
#line 6590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1224 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlValue_NewWithAsterisk(); }
#line 6596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1229 "sql.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 6602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1230 "sql.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1237 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlUnaryExpression_New(EagleDbSqlUnaryExpressionOperatorGrouping, (yyvsp[-1])); }
#line 6614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1240 "sql.y" /* yacc.c:1646  */
    {
        int *type = (yyvsp[-1]);
        (yyval) = EagleDbSqlCastExpression_New((yyvsp[-3]), *type);
        EagleMemory_Free(type);
    }
#line 6624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 1247 "sql.y" /* yacc.c:1646  */
    {
        EagleDbSqlValue *_1 = (EagleDbSqlValue*) (yyvsp[-3]);
        (yyval) = EagleDbSqlFunctionExpression_New(_1->value.identifier, (yyvsp[-1]));
        EagleDbSqlValue_Delete(_1);
    }
#line 6634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1254 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlUnaryExpression_New(EagleDbSqlUnaryExpressionOperatorNegate, (yyvsp[0])); }
#line 6640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1255 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlUnaryExpression_New(EagleDbSqlUnaryExpressionOperatorNot, (yyvsp[0])); }
#line 6646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1258 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlBinaryExpression_New((yyvsp[-2]), EagleDbSqlBinaryExpressionOperatorOr, (yyvsp[0])); }
#line 6652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1259 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlBinaryExpression_New((yyvsp[-2]), EagleDbSqlBinaryExpressionOperatorAnd, (yyvsp[0])); }
#line 6658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 1262 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlBinaryExpression_New((yyvsp[-2]), EagleDbSqlBinaryExpressionOperatorPlus, (yyvsp[0])); }
#line 6664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 1263 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlBinaryExpression_New((yyvsp[-2]), EagleDbSqlBinaryExpressionOperatorMultiply, (yyvsp[0])); }
#line 6670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 1264 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlBinaryExpression_New((yyvsp[-2]), EagleDbSqlBinaryExpressionOperatorMinus, (yyvsp[0])); }
#line 6676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 1265 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlBinaryExpression_New((yyvsp[-2]), EagleDbSqlBinaryExpressionOperatorDivide, (yyvsp[0])); }
#line 6682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 1266 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlBinaryExpression_New((yyvsp[-2]), EagleDbSqlBinaryExpressionOperatorModulus, (yyvsp[0])); }
#line 6688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 1269 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlBinaryExpression_New((yyvsp[-2]), EagleDbSqlBinaryExpressionOperatorEquals, (yyvsp[0])); }
#line 6694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 1270 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlBinaryExpression_New((yyvsp[-2]), EagleDbSqlBinaryExpressionOperatorNotEquals, (yyvsp[0])); }
#line 6700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 1271 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlBinaryExpression_New((yyvsp[-2]), EagleDbSqlBinaryExpressionOperatorGreaterThan, (yyvsp[0])); }
#line 6706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1272 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlBinaryExpression_New((yyvsp[-2]), EagleDbSqlBinaryExpressionOperatorLessThan, (yyvsp[0])); }
#line 6712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 1273 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlBinaryExpression_New((yyvsp[-2]), EagleDbSqlBinaryExpressionOperatorGreaterThanEqual, (yyvsp[0])); }
#line 6718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 1274 "sql.y" /* yacc.c:1646  */
    { (yyval) = EagleDbSqlBinaryExpression_New((yyvsp[-2]), EagleDbSqlBinaryExpressionOperatorLessThanEqual, (yyvsp[0])); }
#line 6724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 1282 "sql.y" /* yacc.c:1646  */
    {
        char *lastToken = EagleDbParser_lastToken(parser);
        EagleDataTypeIntegerType value = atoi(lastToken);
        (yyval) = EagleDbSqlValue_NewWithInteger(value);
    }
#line 6734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 1290 "sql.y" /* yacc.c:1646  */
    {
        char *lastToken = EagleDbParser_lastToken(parser);
        EagleDataTypeFloatType value = atof(lastToken);
        (yyval) = EagleDbSqlValue_NewWithFloat(value);
    }
#line 6744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 1298 "sql.y" /* yacc.c:1646  */
    {
        char *lower = EagleUtils_ToLowerCaseCopy((yyvsp[0]));
        (yyval) = EagleDbSqlValue_NewWithIdentifier(lower);
        free(lower);
    }
#line 6754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 1303 "sql.y" /* yacc.c:1646  */
    {
        char *lastToken = EagleDbParser_lastToken(parser);
        (yyval) = EagleDbSqlValue_NewWithIdentifier(lastToken);
    }
#line 6763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 1310 "sql.y" /* yacc.c:1646  */
    {
        char *lastToken = EagleDbParser_lastToken(parser);
        (yyval) = EagleDbSqlValue_NewWithString(lastToken, EagleTrue);
    }
#line 6772 "y.tab.c" /* yacc.c:1646  */
    break;


#line 6776 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (parser, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (parser, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, parser, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, parser, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (parser, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, parser, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, parser, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1316 "sql.y" /* yacc.c:1906  */

