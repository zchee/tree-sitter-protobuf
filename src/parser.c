#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 257
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_syntax = 2,
  anon_sym_EQ = 3,
  aux_sym_syntax_token1 = 4,
  anon_sym_SEMI = 5,
  anon_sym_extend = 6,
  anon_sym_package = 7,
  anon_sym_import = 8,
  anon_sym_option = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_enum = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_DASH = 15,
  anon_sym_LBRACK = 16,
  anon_sym_COMMA = 17,
  anon_sym_RBRACK = 18,
  anon_sym_message = 19,
  anon_sym_service = 20,
  anon_sym_rpc = 21,
  anon_sym_stream = 22,
  anon_sym_returns = 23,
  anon_sym_repeated = 24,
  anon_sym_oneof = 25,
  anon_sym_map = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_int32 = 29,
  anon_sym_int64 = 30,
  anon_sym_uint32 = 31,
  anon_sym_uint64 = 32,
  anon_sym_sint32 = 33,
  anon_sym_sint64 = 34,
  anon_sym_fixed32 = 35,
  anon_sym_fixed64 = 36,
  anon_sym_sfixed32 = 37,
  anon_sym_sfixed64 = 38,
  anon_sym_bool = 39,
  anon_sym_string = 40,
  anon_sym_reserved = 41,
  anon_sym_to = 42,
  anon_sym_max = 43,
  sym_intLit = 44,
  aux_sym_floatLit_token1 = 45,
  aux_sym_floatLit_token2 = 46,
  aux_sym_floatLit_token3 = 47,
  anon_sym_inf = 48,
  anon_sym_nan = 49,
  sym_boolLit = 50,
  anon_sym_DQUOTE = 51,
  aux_sym_strLit_token1 = 52,
  anon_sym_SQUOTE = 53,
  aux_sym_strLit_token2 = 54,
  anon_sym_double = 55,
  anon_sym_float = 56,
  anon_sym_bytes = 57,
  aux_sym_constant_token1 = 58,
  anon_sym_COLON = 59,
  sym_ident = 60,
  anon_sym_DOT = 61,
  sym_source_file = 62,
  sym_syntax = 63,
  sym_extend = 64,
  sym_package = 65,
  sym_import = 66,
  sym_option = 67,
  sym_optionName = 68,
  sym_enum = 69,
  sym_enumBody = 70,
  sym_enumField = 71,
  sym_enumValueOption = 72,
  sym_message = 73,
  sym_messageBody = 74,
  sym_service = 75,
  sym_rpc = 76,
  sym_field = 77,
  sym_fieldOptions = 78,
  sym_fieldOption = 79,
  sym_oneof = 80,
  sym_oneofField = 81,
  sym_mapField = 82,
  sym_keyType = 83,
  sym_reserved = 84,
  sym_ranges = 85,
  sym_range = 86,
  sym_fieldNames = 87,
  sym_floatLit = 88,
  sym_strLit = 89,
  sym_type = 90,
  sym_fieldNumber = 91,
  sym_emptyStatement = 92,
  sym_constant = 93,
  sym_msgLit = 94,
  sym_fullIdent = 95,
  sym_extendName = 96,
  sym_messageName = 97,
  sym_mapName = 98,
  sym_enumName = 99,
  sym_fieldName = 100,
  sym_enumVariantName = 101,
  sym_oneofName = 102,
  sym_serviceName = 103,
  sym_rpcName = 104,
  sym_enumMessageType = 105,
  aux_sym_source_file_repeat1 = 106,
  aux_sym_enumBody_repeat1 = 107,
  aux_sym_enumField_repeat1 = 108,
  aux_sym_messageBody_repeat1 = 109,
  aux_sym_service_repeat1 = 110,
  aux_sym_rpc_repeat1 = 111,
  aux_sym_fieldOptions_repeat1 = 112,
  aux_sym_oneof_repeat1 = 113,
  aux_sym_ranges_repeat1 = 114,
  aux_sym_fieldNames_repeat1 = 115,
  aux_sym_msgLit_repeat1 = 116,
  aux_sym_fullIdent_repeat1 = 117,
  aux_sym_enumMessageType_repeat1 = 118,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_syntax] = "syntax",
  [anon_sym_EQ] = "=",
  [aux_sym_syntax_token1] = "syntax_token1",
  [anon_sym_SEMI] = ";",
  [anon_sym_extend] = "extend",
  [anon_sym_package] = "package",
  [anon_sym_import] = "import",
  [anon_sym_option] = "option",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_message] = "message",
  [anon_sym_service] = "service",
  [anon_sym_rpc] = "rpc",
  [anon_sym_stream] = "stream",
  [anon_sym_returns] = "returns",
  [anon_sym_repeated] = "repeated",
  [anon_sym_oneof] = "oneof",
  [anon_sym_map] = "map",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_sint32] = "sint32",
  [anon_sym_sint64] = "sint64",
  [anon_sym_fixed32] = "fixed32",
  [anon_sym_fixed64] = "fixed64",
  [anon_sym_sfixed32] = "sfixed32",
  [anon_sym_sfixed64] = "sfixed64",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_reserved] = "reserved",
  [anon_sym_to] = "to",
  [anon_sym_max] = "max",
  [sym_intLit] = "intLit",
  [aux_sym_floatLit_token1] = "floatLit_token1",
  [aux_sym_floatLit_token2] = "floatLit_token2",
  [aux_sym_floatLit_token3] = "floatLit_token3",
  [anon_sym_inf] = "inf",
  [anon_sym_nan] = "nan",
  [sym_boolLit] = "boolLit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_strLit_token1] = "strLit_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_strLit_token2] = "strLit_token2",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_bytes] = "bytes",
  [aux_sym_constant_token1] = "constant_token1",
  [anon_sym_COLON] = ":",
  [sym_ident] = "ident",
  [anon_sym_DOT] = ".",
  [sym_source_file] = "source_file",
  [sym_syntax] = "syntax",
  [sym_extend] = "extend",
  [sym_package] = "package",
  [sym_import] = "import",
  [sym_option] = "option",
  [sym_optionName] = "optionName",
  [sym_enum] = "enum",
  [sym_enumBody] = "enumBody",
  [sym_enumField] = "enumField",
  [sym_enumValueOption] = "enumValueOption",
  [sym_message] = "message",
  [sym_messageBody] = "messageBody",
  [sym_service] = "service",
  [sym_rpc] = "rpc",
  [sym_field] = "field",
  [sym_fieldOptions] = "fieldOptions",
  [sym_fieldOption] = "fieldOption",
  [sym_oneof] = "oneof",
  [sym_oneofField] = "oneofField",
  [sym_mapField] = "mapField",
  [sym_keyType] = "keyType",
  [sym_reserved] = "reserved",
  [sym_ranges] = "ranges",
  [sym_range] = "range",
  [sym_fieldNames] = "fieldNames",
  [sym_floatLit] = "floatLit",
  [sym_strLit] = "strLit",
  [sym_type] = "type",
  [sym_fieldNumber] = "fieldNumber",
  [sym_emptyStatement] = "emptyStatement",
  [sym_constant] = "constant",
  [sym_msgLit] = "msgLit",
  [sym_fullIdent] = "fullIdent",
  [sym_extendName] = "extendName",
  [sym_messageName] = "messageName",
  [sym_mapName] = "mapName",
  [sym_enumName] = "enumName",
  [sym_fieldName] = "fieldName",
  [sym_enumVariantName] = "enumVariantName",
  [sym_oneofName] = "oneofName",
  [sym_serviceName] = "serviceName",
  [sym_rpcName] = "rpcName",
  [sym_enumMessageType] = "enumMessageType",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_enumBody_repeat1] = "enumBody_repeat1",
  [aux_sym_enumField_repeat1] = "enumField_repeat1",
  [aux_sym_messageBody_repeat1] = "messageBody_repeat1",
  [aux_sym_service_repeat1] = "service_repeat1",
  [aux_sym_rpc_repeat1] = "rpc_repeat1",
  [aux_sym_fieldOptions_repeat1] = "fieldOptions_repeat1",
  [aux_sym_oneof_repeat1] = "oneof_repeat1",
  [aux_sym_ranges_repeat1] = "ranges_repeat1",
  [aux_sym_fieldNames_repeat1] = "fieldNames_repeat1",
  [aux_sym_msgLit_repeat1] = "msgLit_repeat1",
  [aux_sym_fullIdent_repeat1] = "fullIdent_repeat1",
  [aux_sym_enumMessageType_repeat1] = "enumMessageType_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_syntax] = anon_sym_syntax,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_syntax_token1] = aux_sym_syntax_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_rpc] = anon_sym_rpc,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_repeated] = anon_sym_repeated,
  [anon_sym_oneof] = anon_sym_oneof,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_sint32] = anon_sym_sint32,
  [anon_sym_sint64] = anon_sym_sint64,
  [anon_sym_fixed32] = anon_sym_fixed32,
  [anon_sym_fixed64] = anon_sym_fixed64,
  [anon_sym_sfixed32] = anon_sym_sfixed32,
  [anon_sym_sfixed64] = anon_sym_sfixed64,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_reserved] = anon_sym_reserved,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_max] = anon_sym_max,
  [sym_intLit] = sym_intLit,
  [aux_sym_floatLit_token1] = aux_sym_floatLit_token1,
  [aux_sym_floatLit_token2] = aux_sym_floatLit_token2,
  [aux_sym_floatLit_token3] = aux_sym_floatLit_token3,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_nan] = anon_sym_nan,
  [sym_boolLit] = sym_boolLit,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_strLit_token1] = aux_sym_strLit_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_strLit_token2] = aux_sym_strLit_token2,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bytes] = anon_sym_bytes,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_ident] = sym_ident,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_source_file] = sym_source_file,
  [sym_syntax] = sym_syntax,
  [sym_extend] = sym_extend,
  [sym_package] = sym_package,
  [sym_import] = sym_import,
  [sym_option] = sym_option,
  [sym_optionName] = sym_optionName,
  [sym_enum] = sym_enum,
  [sym_enumBody] = sym_enumBody,
  [sym_enumField] = sym_enumField,
  [sym_enumValueOption] = sym_enumValueOption,
  [sym_message] = sym_message,
  [sym_messageBody] = sym_messageBody,
  [sym_service] = sym_service,
  [sym_rpc] = sym_rpc,
  [sym_field] = sym_field,
  [sym_fieldOptions] = sym_fieldOptions,
  [sym_fieldOption] = sym_fieldOption,
  [sym_oneof] = sym_oneof,
  [sym_oneofField] = sym_oneofField,
  [sym_mapField] = sym_mapField,
  [sym_keyType] = sym_keyType,
  [sym_reserved] = sym_reserved,
  [sym_ranges] = sym_ranges,
  [sym_range] = sym_range,
  [sym_fieldNames] = sym_fieldNames,
  [sym_floatLit] = sym_floatLit,
  [sym_strLit] = sym_strLit,
  [sym_type] = sym_type,
  [sym_fieldNumber] = sym_fieldNumber,
  [sym_emptyStatement] = sym_emptyStatement,
  [sym_constant] = sym_constant,
  [sym_msgLit] = sym_msgLit,
  [sym_fullIdent] = sym_fullIdent,
  [sym_extendName] = sym_extendName,
  [sym_messageName] = sym_messageName,
  [sym_mapName] = sym_mapName,
  [sym_enumName] = sym_enumName,
  [sym_fieldName] = sym_fieldName,
  [sym_enumVariantName] = sym_enumVariantName,
  [sym_oneofName] = sym_oneofName,
  [sym_serviceName] = sym_serviceName,
  [sym_rpcName] = sym_rpcName,
  [sym_enumMessageType] = sym_enumMessageType,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_enumBody_repeat1] = aux_sym_enumBody_repeat1,
  [aux_sym_enumField_repeat1] = aux_sym_enumField_repeat1,
  [aux_sym_messageBody_repeat1] = aux_sym_messageBody_repeat1,
  [aux_sym_service_repeat1] = aux_sym_service_repeat1,
  [aux_sym_rpc_repeat1] = aux_sym_rpc_repeat1,
  [aux_sym_fieldOptions_repeat1] = aux_sym_fieldOptions_repeat1,
  [aux_sym_oneof_repeat1] = aux_sym_oneof_repeat1,
  [aux_sym_ranges_repeat1] = aux_sym_ranges_repeat1,
  [aux_sym_fieldNames_repeat1] = aux_sym_fieldNames_repeat1,
  [aux_sym_msgLit_repeat1] = aux_sym_msgLit_repeat1,
  [aux_sym_fullIdent_repeat1] = aux_sym_fullIdent_repeat1,
  [aux_sym_enumMessageType_repeat1] = aux_sym_enumMessageType_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_syntax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_syntax_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserved] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [sym_intLit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_floatLit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_floatLit_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_floatLit_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_inf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nan] = {
    .visible = true,
    .named = false,
  },
  [sym_boolLit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_strLit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_strLit_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_extend] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_optionName] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enumBody] = {
    .visible = true,
    .named = true,
  },
  [sym_enumField] = {
    .visible = true,
    .named = true,
  },
  [sym_enumValueOption] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_messageBody] = {
    .visible = true,
    .named = true,
  },
  [sym_service] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldOptions] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldOption] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof] = {
    .visible = true,
    .named = true,
  },
  [sym_oneofField] = {
    .visible = true,
    .named = true,
  },
  [sym_mapField] = {
    .visible = true,
    .named = true,
  },
  [sym_keyType] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved] = {
    .visible = true,
    .named = true,
  },
  [sym_ranges] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldNames] = {
    .visible = true,
    .named = true,
  },
  [sym_floatLit] = {
    .visible = true,
    .named = true,
  },
  [sym_strLit] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldNumber] = {
    .visible = true,
    .named = true,
  },
  [sym_emptyStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_msgLit] = {
    .visible = true,
    .named = true,
  },
  [sym_fullIdent] = {
    .visible = true,
    .named = true,
  },
  [sym_extendName] = {
    .visible = true,
    .named = true,
  },
  [sym_messageName] = {
    .visible = true,
    .named = true,
  },
  [sym_mapName] = {
    .visible = true,
    .named = true,
  },
  [sym_enumName] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldName] = {
    .visible = true,
    .named = true,
  },
  [sym_enumVariantName] = {
    .visible = true,
    .named = true,
  },
  [sym_oneofName] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceName] = {
    .visible = true,
    .named = true,
  },
  [sym_rpcName] = {
    .visible = true,
    .named = true,
  },
  [sym_enumMessageType] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enumBody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enumField_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_messageBody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldOptions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneof_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ranges_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldNames_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_msgLit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fullIdent_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enumMessageType_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_strLit_token2_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c >= 'a' && c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(165);
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(269);
      if (lookahead == '(') ADVANCE(191);
      if (lookahead == ')') ADVANCE(192);
      if (lookahead == '+') ADVANCE(281);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(245);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == ';') ADVANCE(185);
      if (lookahead == '<') ADVANCE(214);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == 'E') ADVANCE(151);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == '{') ADVANCE(195);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(269);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(245);
      if (lookahead == 'f') ADVANCE(301);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == '{') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(281);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(184);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(249);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == ';') ADVANCE(185);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == 'b') ADVANCE(352);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(298);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead == 'u') ADVANCE(331);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(191);
      if (lookahead == ')') ADVANCE(192);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(249);
      if (lookahead == ';') ADVANCE(185);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '{') ADVANCE(195);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(181);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(10);
      if (aux_sym_strLit_token2_character_set_1(lookahead)) ADVANCE(271);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(11);
      if (aux_sym_strLit_token2_character_set_1(lookahead)) ADVANCE(265);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(271);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(265);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(9);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(185);
      if (lookahead == 'b') ADVANCE(352);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(298);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == 'u') ADVANCE(331);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(185);
      if (lookahead == 'b') ADVANCE(352);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead == 'u') ADVANCE(331);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(352);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead == 'u') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(166);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(216);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(224);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(220);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(228);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(232);
      END_STATE();
    case 30:
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == '3') ADVANCE(2);
      END_STATE();
    case 32:
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '6') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == '3') ADVANCE(27);
      if (lookahead == '6') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == '6') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == '3') ADVANCE(29);
      if (lookahead == '6') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == '4') ADVANCE(218);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(226);
      END_STATE();
    case 38:
      if (lookahead == '4') ADVANCE(222);
      END_STATE();
    case 39:
      if (lookahead == '4') ADVANCE(230);
      END_STATE();
    case 40:
      if (lookahead == '4') ADVANCE(234);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(257);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(210);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'x') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(255);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'x') ADVANCE(244);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 145:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 146:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 147:
      if (lookahead == 'x') ADVANCE(244);
      END_STATE();
    case 148:
      if (lookahead == 'x') ADVANCE(182);
      END_STATE();
    case 149:
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 150:
      if (lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 151:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(255);
      END_STATE();
    case 152:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(254);
      END_STATE();
    case 153:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(256);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(159);
      if (aux_sym_strLit_token2_character_set_1(lookahead)) ADVANCE(274);
      END_STATE();
    case 156:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(160);
      if (aux_sym_strLit_token2_character_set_1(lookahead)) ADVANCE(268);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(274);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(268);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(157);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(158);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(274);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(268);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(175);
      if (aux_sym_strLit_token2_character_set_1(lookahead)) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(176);
      if (aux_sym_strLit_token2_character_set_1(lookahead)) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_syntax_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_repeated);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_intLit);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(252);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_intLit);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_intLit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_intLit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_intLit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(252);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_intLit);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_intLit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_intLit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_floatLit_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_floatLit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_floatLit_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_floatLit_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_inf);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_nan);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_nan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_boolLit);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_boolLit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_strLit_token1);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_strLit_token1);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(16);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_strLit_token1);
      if (lookahead == '/') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_strLit_token1);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(16);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_strLit_token1);
      if (lookahead == '\\') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_strLit_token2);
      if (lookahead == '*') ADVANCE(271);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(274);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_strLit_token2);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(16);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_strLit_token2);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_strLit_token2);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(16);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_strLit_token2);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(283);
      if (lookahead == '6') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(284);
      if (lookahead == '6') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(285);
      if (lookahead == '6') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(286);
      if (lookahead == '6') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(287);
      if (lookahead == '6') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(332);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 't') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == 'y') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(318);
      if (lookahead == 's') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 23},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 23},
  [116] = {.lex_state = 23},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 22},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 272},
  [228] = {.lex_state = 266},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_syntax] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_rpc] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [anon_sym_repeated] = ACTIONS(1),
    [anon_sym_oneof] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_sint32] = ACTIONS(1),
    [anon_sym_sint64] = ACTIONS(1),
    [anon_sym_fixed32] = ACTIONS(1),
    [anon_sym_fixed64] = ACTIONS(1),
    [anon_sym_sfixed32] = ACTIONS(1),
    [anon_sym_sfixed64] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_reserved] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [sym_intLit] = ACTIONS(1),
    [aux_sym_floatLit_token1] = ACTIONS(1),
    [aux_sym_floatLit_token2] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_nan] = ACTIONS(1),
    [sym_boolLit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(250),
    [sym_syntax] = STATE(44),
    [sym_comment] = ACTIONS(3),
    [anon_sym_syntax] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_message,
    ACTIONS(17), 1,
      anon_sym_repeated,
    ACTIONS(19), 1,
      anon_sym_oneof,
    ACTIONS(21), 1,
      anon_sym_map,
    ACTIONS(25), 1,
      anon_sym_reserved,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_DOT,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(146), 1,
      sym_type,
    STATE(183), 1,
      sym_enumMessageType,
    STATE(5), 9,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_mapField,
      sym_reserved,
      sym_emptyStatement,
      aux_sym_messageBody_repeat1,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [77] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_message,
    ACTIONS(17), 1,
      anon_sym_repeated,
    ACTIONS(19), 1,
      anon_sym_oneof,
    ACTIONS(21), 1,
      anon_sym_map,
    ACTIONS(25), 1,
      anon_sym_reserved,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(146), 1,
      sym_type,
    STATE(183), 1,
      sym_enumMessageType,
    STATE(4), 9,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_mapField,
      sym_reserved,
      sym_emptyStatement,
      aux_sym_messageBody_repeat1,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [154] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_message,
    ACTIONS(17), 1,
      anon_sym_repeated,
    ACTIONS(19), 1,
      anon_sym_oneof,
    ACTIONS(21), 1,
      anon_sym_map,
    ACTIONS(25), 1,
      anon_sym_reserved,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(146), 1,
      sym_type,
    STATE(183), 1,
      sym_enumMessageType,
    STATE(5), 9,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_mapField,
      sym_reserved,
      sym_emptyStatement,
      aux_sym_messageBody_repeat1,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [231] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      anon_sym_option,
    ACTIONS(41), 1,
      anon_sym_enum,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      anon_sym_message,
    ACTIONS(49), 1,
      anon_sym_repeated,
    ACTIONS(52), 1,
      anon_sym_oneof,
    ACTIONS(55), 1,
      anon_sym_map,
    ACTIONS(61), 1,
      anon_sym_reserved,
    ACTIONS(64), 1,
      sym_ident,
    ACTIONS(67), 1,
      anon_sym_DOT,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(146), 1,
      sym_type,
    STATE(183), 1,
      sym_enumMessageType,
    STATE(5), 9,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_mapField,
      sym_reserved,
      sym_emptyStatement,
      aux_sym_messageBody_repeat1,
    ACTIONS(58), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [308] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_message,
    ACTIONS(17), 1,
      anon_sym_repeated,
    ACTIONS(19), 1,
      anon_sym_oneof,
    ACTIONS(21), 1,
      anon_sym_map,
    ACTIONS(25), 1,
      anon_sym_reserved,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(146), 1,
      sym_type,
    STATE(183), 1,
      sym_enumMessageType,
    STATE(2), 9,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_mapField,
      sym_reserved,
      sym_emptyStatement,
      aux_sym_messageBody_repeat1,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(74), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_to,
    ACTIONS(76), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(78), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [460] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    ACTIONS(84), 1,
      anon_sym_option,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(172), 1,
      sym_type,
    STATE(183), 1,
      sym_enumMessageType,
    STATE(10), 4,
      sym_option,
      sym_oneofField,
      sym_emptyStatement,
      aux_sym_oneof_repeat1,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [514] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      anon_sym_option,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      sym_ident,
    ACTIONS(102), 1,
      anon_sym_DOT,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(172), 1,
      sym_type,
    STATE(183), 1,
      sym_enumMessageType,
    STATE(10), 4,
      sym_option,
      sym_oneofField,
      sym_emptyStatement,
      aux_sym_oneof_repeat1,
    ACTIONS(96), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [568] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_fieldNames_repeat1,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(107), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [608] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_ranges_repeat1,
    ACTIONS(111), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(113), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [648] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_ranges_repeat1,
    ACTIONS(118), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(120), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [688] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    ACTIONS(84), 1,
      anon_sym_option,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(172), 1,
      sym_type,
    STATE(183), 1,
      sym_enumMessageType,
    STATE(9), 4,
      sym_option,
      sym_oneofField,
      sym_emptyStatement,
      aux_sym_oneof_repeat1,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [742] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_fieldNames_repeat1,
    ACTIONS(126), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(128), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [782] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_ranges_repeat1,
    ACTIONS(130), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(132), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [822] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_fieldNames_repeat1,
    ACTIONS(134), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(136), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(136), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(113), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(143), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(147), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(151), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(155), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(159), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(163), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(167), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(171), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(175), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(179), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(183), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(187), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(191), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(195), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(199), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(203), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(207), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(211), 23,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1545] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_DOT,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(183), 1,
      sym_enumMessageType,
    STATE(246), 1,
      sym_type,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1584] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_DOT,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(158), 1,
      sym_type,
    STATE(183), 1,
      sym_enumMessageType,
    ACTIONS(23), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(215), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(171), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(167), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(219), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1735] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      anon_sym_extend,
    ACTIONS(227), 1,
      anon_sym_package,
    ACTIONS(229), 1,
      anon_sym_import,
    ACTIONS(231), 1,
      anon_sym_option,
    ACTIONS(233), 1,
      anon_sym_enum,
    ACTIONS(235), 1,
      anon_sym_message,
    ACTIONS(237), 1,
      anon_sym_service,
    STATE(46), 9,
      sym_extend,
      sym_package,
      sym_import,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      sym_emptyStatement,
      aux_sym_source_file_repeat1,
  [1777] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    ACTIONS(244), 1,
      anon_sym_extend,
    ACTIONS(247), 1,
      anon_sym_package,
    ACTIONS(250), 1,
      anon_sym_import,
    ACTIONS(253), 1,
      anon_sym_option,
    ACTIONS(256), 1,
      anon_sym_enum,
    ACTIONS(259), 1,
      anon_sym_message,
    ACTIONS(262), 1,
      anon_sym_service,
    STATE(45), 9,
      sym_extend,
      sym_package,
      sym_import,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      sym_emptyStatement,
      aux_sym_source_file_repeat1,
  [1819] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      anon_sym_extend,
    ACTIONS(227), 1,
      anon_sym_package,
    ACTIONS(229), 1,
      anon_sym_import,
    ACTIONS(231), 1,
      anon_sym_option,
    ACTIONS(233), 1,
      anon_sym_enum,
    ACTIONS(235), 1,
      anon_sym_message,
    ACTIONS(237), 1,
      anon_sym_service,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(45), 9,
      sym_extend,
      sym_package,
      sym_import,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      sym_emptyStatement,
      aux_sym_source_file_repeat1,
  [1861] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      aux_sym_constant_token1,
    ACTIONS(281), 1,
      sym_ident,
    STATE(242), 1,
      sym_constant,
    ACTIONS(269), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(273), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(271), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(106), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [1902] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      aux_sym_constant_token1,
    ACTIONS(281), 1,
      sym_ident,
    STATE(225), 1,
      sym_constant,
    ACTIONS(269), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(273), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(271), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(106), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [1943] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      aux_sym_constant_token1,
    ACTIONS(281), 1,
      sym_ident,
    STATE(148), 1,
      sym_constant,
    ACTIONS(269), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(273), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(271), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(106), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [1984] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      aux_sym_constant_token1,
    ACTIONS(281), 1,
      sym_ident,
    STATE(180), 1,
      sym_constant,
    ACTIONS(269), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(273), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(271), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(106), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [2025] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      aux_sym_constant_token1,
    ACTIONS(281), 1,
      sym_ident,
    STATE(187), 1,
      sym_constant,
    ACTIONS(269), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(273), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(271), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(106), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [2066] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      aux_sym_constant_token1,
    ACTIONS(281), 1,
      sym_ident,
    STATE(244), 1,
      sym_constant,
    ACTIONS(269), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(273), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(271), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(106), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [2107] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      aux_sym_constant_token1,
    ACTIONS(281), 1,
      sym_ident,
    STATE(245), 1,
      sym_constant,
    ACTIONS(269), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(273), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(271), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(106), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [2148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(255), 1,
      sym_keyType,
    ACTIONS(283), 12,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
  [2169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_service,
      anon_sym_rpc,
  [2186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_service,
      anon_sym_rpc,
  [2203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_fullIdent_repeat1,
    ACTIONS(285), 8,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [2223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_fullIdent_repeat1,
    ACTIONS(289), 8,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [2243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_fullIdent_repeat1,
    ACTIONS(294), 8,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [2263] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_SEMI,
    ACTIONS(299), 1,
      anon_sym_option,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 1,
      sym_ident,
    STATE(237), 1,
      sym_enumVariantName,
    STATE(60), 4,
      sym_option,
      sym_enumField,
      sym_emptyStatement,
      aux_sym_enumBody_repeat1,
  [2288] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(309), 1,
      anon_sym_option,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 1,
      sym_ident,
    STATE(237), 1,
      sym_enumVariantName,
    STATE(70), 4,
      sym_option,
      sym_enumField,
      sym_emptyStatement,
      aux_sym_enumBody_repeat1,
  [2313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2343] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(309), 1,
      anon_sym_option,
    ACTIONS(313), 1,
      sym_ident,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_enumVariantName,
    STATE(74), 4,
      sym_option,
      sym_enumField,
      sym_emptyStatement,
      aux_sym_enumBody_repeat1,
  [2368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
      anon_sym_DOT,
  [2413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2443] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(309), 1,
      anon_sym_option,
    ACTIONS(313), 1,
      sym_ident,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_enumVariantName,
    STATE(60), 4,
      sym_option,
      sym_enumField,
      sym_emptyStatement,
      aux_sym_enumBody_repeat1,
  [2468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2513] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(309), 1,
      anon_sym_option,
    ACTIONS(313), 1,
      sym_ident,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_enumVariantName,
    STATE(60), 4,
      sym_option,
      sym_enumField,
      sym_emptyStatement,
      aux_sym_enumBody_repeat1,
  [2538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2583] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(336), 1,
      anon_sym_option,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 1,
      anon_sym_rpc,
    STATE(78), 4,
      sym_option,
      sym_rpc,
      sym_emptyStatement,
      aux_sym_service_repeat1,
  [2605] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_option,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 1,
      anon_sym_rpc,
    STATE(78), 4,
      sym_option,
      sym_rpc,
      sym_emptyStatement,
      aux_sym_service_repeat1,
  [2627] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_option,
    ACTIONS(346), 1,
      anon_sym_rpc,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(79), 4,
      sym_option,
      sym_rpc,
      sym_emptyStatement,
      aux_sym_service_repeat1,
  [2649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_intLit,
    STATE(97), 1,
      sym_floatLit,
    ACTIONS(271), 5,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
      anon_sym_inf,
      anon_sym_nan,
  [2666] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_option,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(89), 3,
      sym_option,
      sym_emptyStatement,
      aux_sym_rpc_repeat1,
  [2684] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_ident,
    STATE(135), 1,
      sym_fieldOption,
    STATE(200), 1,
      sym_fieldOptions,
    STATE(221), 1,
      sym_fullIdent,
    STATE(236), 1,
      sym_optionName,
  [2706] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_ident,
    STATE(135), 1,
      sym_fieldOption,
    STATE(221), 1,
      sym_fullIdent,
    STATE(235), 1,
      sym_fieldOptions,
    STATE(236), 1,
      sym_optionName,
  [2728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_SEMI,
    ACTIONS(361), 1,
      anon_sym_option,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_option,
      sym_emptyStatement,
      aux_sym_rpc_repeat1,
  [2746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_option,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_option,
      sym_emptyStatement,
      aux_sym_rpc_repeat1,
  [2764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_option,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_option,
      sym_emptyStatement,
      aux_sym_rpc_repeat1,
  [2782] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_stream,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(254), 1,
      sym_enumMessageType,
  [2804] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_option,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_option,
      sym_emptyStatement,
      aux_sym_rpc_repeat1,
  [2822] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_option,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(86), 3,
      sym_option,
      sym_emptyStatement,
      aux_sym_rpc_repeat1,
  [2840] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      anon_sym_option,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_option,
      sym_emptyStatement,
      aux_sym_rpc_repeat1,
  [2858] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_ident,
    STATE(135), 1,
      sym_fieldOption,
    STATE(211), 1,
      sym_fieldOptions,
    STATE(221), 1,
      sym_fullIdent,
    STATE(236), 1,
      sym_optionName,
  [2880] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_stream,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(201), 1,
      sym_enumMessageType,
  [2902] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_intLit,
    ACTIONS(378), 1,
      sym_ident,
    STATE(11), 1,
      sym_fieldName,
    STATE(16), 1,
      sym_range,
    STATE(35), 2,
      sym_ranges,
      sym_fieldNames,
  [2922] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_ident,
    STATE(135), 1,
      sym_fieldOption,
    STATE(217), 1,
      sym_fieldOptions,
    STATE(221), 1,
      sym_fullIdent,
    STATE(236), 1,
      sym_optionName,
  [2944] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_stream,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(199), 1,
      sym_enumMessageType,
  [2966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [2977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [2988] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_ident,
    STATE(147), 1,
      sym_fieldOption,
    STATE(221), 1,
      sym_fullIdent,
    STATE(236), 1,
      sym_optionName,
  [3007] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      sym_ident,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(201), 1,
      sym_enumMessageType,
  [3026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [3037] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      sym_ident,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(206), 1,
      sym_enumMessageType,
  [3056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [3078] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_ident,
    STATE(181), 1,
      sym_enumValueOption,
    STATE(221), 1,
      sym_fullIdent,
    STATE(240), 1,
      sym_optionName,
  [3097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [3108] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_ident,
    STATE(139), 1,
      sym_enumValueOption,
    STATE(221), 1,
      sym_fullIdent,
    STATE(240), 1,
      sym_optionName,
  [3127] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_ident,
    STATE(137), 1,
      sym_enumValueOption,
    STATE(221), 1,
      sym_fullIdent,
    STATE(240), 1,
      sym_optionName,
  [3146] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      sym_ident,
    STATE(131), 1,
      sym_messageName,
    STATE(134), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(239), 1,
      sym_enumMessageType,
  [3165] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_ident,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      aux_sym_msgLit_repeat1,
    STATE(196), 1,
      sym_fieldName,
  [3181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(400), 2,
      anon_sym_option,
      sym_ident,
  [3193] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_ident,
    STATE(221), 1,
      sym_fullIdent,
    STATE(253), 1,
      sym_optionName,
  [3209] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_ident,
    STATE(221), 1,
      sym_fullIdent,
    STATE(252), 1,
      sym_optionName,
  [3225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_ident,
    STATE(221), 1,
      sym_fullIdent,
    STATE(251), 1,
      sym_optionName,
  [3241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(404), 2,
      anon_sym_option,
      sym_ident,
  [3253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(408), 2,
      anon_sym_option,
      sym_ident,
  [3265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_ident,
    STATE(221), 1,
      sym_fullIdent,
    STATE(223), 1,
      sym_optionName,
  [3281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(412), 2,
      anon_sym_option,
      sym_ident,
  [3293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(171), 2,
      anon_sym_option,
      sym_ident,
  [3305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(167), 2,
      anon_sym_option,
      sym_ident,
  [3317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    ACTIONS(416), 1,
      sym_ident,
    STATE(121), 1,
      aux_sym_msgLit_repeat1,
    STATE(196), 1,
      sym_fieldName,
  [3333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_DOT,
    ACTIONS(429), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_ident,
  [3395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(435), 2,
      anon_sym_option,
      sym_ident,
  [3407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_ident,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      aux_sym_msgLit_repeat1,
    STATE(196), 1,
      sym_fieldName,
  [3423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_fieldOptions_repeat1,
  [3436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_ident,
  [3445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_ident,
    STATE(138), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(142), 1,
      sym_messageName,
  [3458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_ident,
  [3467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_ident,
    STATE(142), 1,
      sym_messageName,
    STATE(178), 1,
      aux_sym_enumMessageType_repeat1,
  [3480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      aux_sym_fieldOptions_repeat1,
  [3493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
    STATE(226), 1,
      sym_strLit,
  [3506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      aux_sym_enumField_repeat1,
  [3519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_ident,
    STATE(133), 1,
      sym_messageName,
    STATE(178), 1,
      aux_sym_enumMessageType_repeat1,
  [3532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      aux_sym_enumField_repeat1,
  [3545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_fieldOptions_repeat1,
  [3558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_ident,
    STATE(167), 1,
      sym_extendName,
    STATE(231), 1,
      sym_fullIdent,
  [3571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_ident,
  [3580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_enumField_repeat1,
  [3593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_enumField_repeat1,
  [3606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_enumField_repeat1,
  [3619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_ident,
    STATE(202), 1,
      sym_fieldName,
  [3629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_RBRACE,
      sym_ident,
  [3645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SEMI,
    ACTIONS(473), 1,
      anon_sym_LBRACK,
  [3655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_max,
      sym_intLit,
  [3663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_intLit,
    STATE(19), 1,
      sym_range,
  [3673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    ACTIONS(479), 1,
      anon_sym_LBRACK,
  [3683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_ident,
    STATE(160), 1,
      sym_messageName,
  [3693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_ident,
    STATE(161), 1,
      sym_enumName,
  [3703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_ident,
    STATE(229), 1,
      sym_fullIdent,
  [3713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_ident,
    STATE(18), 1,
      sym_fieldName,
  [3723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_intLit,
    STATE(182), 1,
      sym_fieldNumber,
  [3733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_ident,
    STATE(195), 1,
      sym_fieldName,
  [3743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_ident,
    STATE(171), 1,
      sym_enumName,
  [3753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_messageBody,
  [3763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_enumBody,
  [3773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_ident,
    STATE(194), 1,
      sym_rpcName,
  [3783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_ident,
    STATE(173), 1,
      sym_messageName,
  [3793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_intLit,
    STATE(174), 1,
      sym_fieldNumber,
  [3803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_ident,
    STATE(212), 1,
      sym_mapName,
  [3813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_ident,
    STATE(210), 1,
      sym_serviceName,
  [3823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_messageBody,
  [3833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_ident,
    STATE(189), 1,
      sym_fullIdent,
  [3843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_SEMI,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
  [3853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_intLit,
    STATE(152), 1,
      sym_fieldNumber,
  [3863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_enumBody,
  [3873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_ident,
    STATE(248), 1,
      sym_fieldName,
  [3883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_messageBody,
  [3893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_SEMI,
    ACTIONS(507), 1,
      anon_sym_LBRACK,
  [3903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_LBRACE,
  [3913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
  [3923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_SEMI,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
  [3933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_ident,
    STATE(178), 1,
      aux_sym_enumMessageType_repeat1,
  [3943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(243), 1,
      sym_oneofName,
  [3953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      anon_sym_LBRACK,
  [3979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_GT,
      sym_ident,
  [3987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_SEMI,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
  [3997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_DASH,
    ACTIONS(536), 1,
      sym_intLit,
  [4007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_intLit,
    STATE(184), 1,
      sym_fieldNumber,
  [4017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK,
  [4033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
  [4040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_returns,
  [4047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_SEMI,
  [4054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
  [4061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
  [4068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
  [4075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_EQ,
  [4082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_COLON,
  [4089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_SEMI,
  [4096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LT,
  [4103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
  [4110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
  [4117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
  [4124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_EQ,
  [4131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_SEMI,
  [4138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_SQUOTE,
  [4145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_DQUOTE,
  [4152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
  [4159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_EQ,
  [4166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
  [4173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_ident,
  [4180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
  [4187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
  [4194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_EQ,
  [4201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_EQ,
  [4208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
  [4215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_EQ,
  [4222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_SEMI,
  [4229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
  [4236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
  [4243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
  [4250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
  [4257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_EQ,
  [4264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_SEMI,
  [4271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_EQ,
  [4278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_SEMI,
  [4285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_SEMI,
  [4292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_SEMI,
  [4299] = 2,
    ACTIONS(614), 1,
      sym_comment,
    ACTIONS(616), 1,
      aux_sym_strLit_token2,
  [4306] = 2,
    ACTIONS(614), 1,
      sym_comment,
    ACTIONS(618), 1,
      aux_sym_strLit_token1,
  [4313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_SEMI,
  [4320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_EQ,
  [4327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
  [4334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_SEMI,
  [4341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_intLit,
  [4348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_DOT,
  [4355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_RBRACK,
  [4362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_EQ,
  [4369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_EQ,
  [4376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_returns,
  [4383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
  [4390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_EQ,
  [4397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LBRACE,
  [4404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_SEMI,
  [4411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
  [4418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_SEMI,
  [4425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_SEMI,
  [4432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
  [4439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym_ident,
  [4446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_EQ,
  [4453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      aux_sym_syntax_token1,
  [4460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
  [4467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_EQ,
  [4474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_EQ,
  [4481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_EQ,
  [4488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
  [4495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COMMA,
  [4502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_COMMA,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 308,
  [SMALL_STATE(7)] = 385,
  [SMALL_STATE(8)] = 422,
  [SMALL_STATE(9)] = 460,
  [SMALL_STATE(10)] = 514,
  [SMALL_STATE(11)] = 568,
  [SMALL_STATE(12)] = 608,
  [SMALL_STATE(13)] = 648,
  [SMALL_STATE(14)] = 688,
  [SMALL_STATE(15)] = 742,
  [SMALL_STATE(16)] = 782,
  [SMALL_STATE(17)] = 822,
  [SMALL_STATE(18)] = 862,
  [SMALL_STATE(19)] = 897,
  [SMALL_STATE(20)] = 932,
  [SMALL_STATE(21)] = 967,
  [SMALL_STATE(22)] = 1001,
  [SMALL_STATE(23)] = 1035,
  [SMALL_STATE(24)] = 1069,
  [SMALL_STATE(25)] = 1103,
  [SMALL_STATE(26)] = 1137,
  [SMALL_STATE(27)] = 1171,
  [SMALL_STATE(28)] = 1205,
  [SMALL_STATE(29)] = 1239,
  [SMALL_STATE(30)] = 1273,
  [SMALL_STATE(31)] = 1307,
  [SMALL_STATE(32)] = 1341,
  [SMALL_STATE(33)] = 1375,
  [SMALL_STATE(34)] = 1409,
  [SMALL_STATE(35)] = 1443,
  [SMALL_STATE(36)] = 1477,
  [SMALL_STATE(37)] = 1511,
  [SMALL_STATE(38)] = 1545,
  [SMALL_STATE(39)] = 1584,
  [SMALL_STATE(40)] = 1623,
  [SMALL_STATE(41)] = 1651,
  [SMALL_STATE(42)] = 1679,
  [SMALL_STATE(43)] = 1707,
  [SMALL_STATE(44)] = 1735,
  [SMALL_STATE(45)] = 1777,
  [SMALL_STATE(46)] = 1819,
  [SMALL_STATE(47)] = 1861,
  [SMALL_STATE(48)] = 1902,
  [SMALL_STATE(49)] = 1943,
  [SMALL_STATE(50)] = 1984,
  [SMALL_STATE(51)] = 2025,
  [SMALL_STATE(52)] = 2066,
  [SMALL_STATE(53)] = 2107,
  [SMALL_STATE(54)] = 2148,
  [SMALL_STATE(55)] = 2169,
  [SMALL_STATE(56)] = 2186,
  [SMALL_STATE(57)] = 2203,
  [SMALL_STATE(58)] = 2223,
  [SMALL_STATE(59)] = 2243,
  [SMALL_STATE(60)] = 2263,
  [SMALL_STATE(61)] = 2288,
  [SMALL_STATE(62)] = 2313,
  [SMALL_STATE(63)] = 2328,
  [SMALL_STATE(64)] = 2343,
  [SMALL_STATE(65)] = 2368,
  [SMALL_STATE(66)] = 2383,
  [SMALL_STATE(67)] = 2398,
  [SMALL_STATE(68)] = 2413,
  [SMALL_STATE(69)] = 2428,
  [SMALL_STATE(70)] = 2443,
  [SMALL_STATE(71)] = 2468,
  [SMALL_STATE(72)] = 2483,
  [SMALL_STATE(73)] = 2498,
  [SMALL_STATE(74)] = 2513,
  [SMALL_STATE(75)] = 2538,
  [SMALL_STATE(76)] = 2553,
  [SMALL_STATE(77)] = 2568,
  [SMALL_STATE(78)] = 2583,
  [SMALL_STATE(79)] = 2605,
  [SMALL_STATE(80)] = 2627,
  [SMALL_STATE(81)] = 2649,
  [SMALL_STATE(82)] = 2666,
  [SMALL_STATE(83)] = 2684,
  [SMALL_STATE(84)] = 2706,
  [SMALL_STATE(85)] = 2728,
  [SMALL_STATE(86)] = 2746,
  [SMALL_STATE(87)] = 2764,
  [SMALL_STATE(88)] = 2782,
  [SMALL_STATE(89)] = 2804,
  [SMALL_STATE(90)] = 2822,
  [SMALL_STATE(91)] = 2840,
  [SMALL_STATE(92)] = 2858,
  [SMALL_STATE(93)] = 2880,
  [SMALL_STATE(94)] = 2902,
  [SMALL_STATE(95)] = 2922,
  [SMALL_STATE(96)] = 2944,
  [SMALL_STATE(97)] = 2966,
  [SMALL_STATE(98)] = 2977,
  [SMALL_STATE(99)] = 2988,
  [SMALL_STATE(100)] = 3007,
  [SMALL_STATE(101)] = 3026,
  [SMALL_STATE(102)] = 3037,
  [SMALL_STATE(103)] = 3056,
  [SMALL_STATE(104)] = 3067,
  [SMALL_STATE(105)] = 3078,
  [SMALL_STATE(106)] = 3097,
  [SMALL_STATE(107)] = 3108,
  [SMALL_STATE(108)] = 3127,
  [SMALL_STATE(109)] = 3146,
  [SMALL_STATE(110)] = 3165,
  [SMALL_STATE(111)] = 3181,
  [SMALL_STATE(112)] = 3193,
  [SMALL_STATE(113)] = 3209,
  [SMALL_STATE(114)] = 3225,
  [SMALL_STATE(115)] = 3241,
  [SMALL_STATE(116)] = 3253,
  [SMALL_STATE(117)] = 3265,
  [SMALL_STATE(118)] = 3281,
  [SMALL_STATE(119)] = 3293,
  [SMALL_STATE(120)] = 3305,
  [SMALL_STATE(121)] = 3317,
  [SMALL_STATE(122)] = 3333,
  [SMALL_STATE(123)] = 3343,
  [SMALL_STATE(124)] = 3353,
  [SMALL_STATE(125)] = 3363,
  [SMALL_STATE(126)] = 3373,
  [SMALL_STATE(127)] = 3383,
  [SMALL_STATE(128)] = 3395,
  [SMALL_STATE(129)] = 3407,
  [SMALL_STATE(130)] = 3423,
  [SMALL_STATE(131)] = 3436,
  [SMALL_STATE(132)] = 3445,
  [SMALL_STATE(133)] = 3458,
  [SMALL_STATE(134)] = 3467,
  [SMALL_STATE(135)] = 3480,
  [SMALL_STATE(136)] = 3493,
  [SMALL_STATE(137)] = 3506,
  [SMALL_STATE(138)] = 3519,
  [SMALL_STATE(139)] = 3532,
  [SMALL_STATE(140)] = 3545,
  [SMALL_STATE(141)] = 3558,
  [SMALL_STATE(142)] = 3571,
  [SMALL_STATE(143)] = 3580,
  [SMALL_STATE(144)] = 3593,
  [SMALL_STATE(145)] = 3606,
  [SMALL_STATE(146)] = 3619,
  [SMALL_STATE(147)] = 3629,
  [SMALL_STATE(148)] = 3637,
  [SMALL_STATE(149)] = 3645,
  [SMALL_STATE(150)] = 3655,
  [SMALL_STATE(151)] = 3663,
  [SMALL_STATE(152)] = 3673,
  [SMALL_STATE(153)] = 3683,
  [SMALL_STATE(154)] = 3693,
  [SMALL_STATE(155)] = 3703,
  [SMALL_STATE(156)] = 3713,
  [SMALL_STATE(157)] = 3723,
  [SMALL_STATE(158)] = 3733,
  [SMALL_STATE(159)] = 3743,
  [SMALL_STATE(160)] = 3753,
  [SMALL_STATE(161)] = 3763,
  [SMALL_STATE(162)] = 3773,
  [SMALL_STATE(163)] = 3783,
  [SMALL_STATE(164)] = 3793,
  [SMALL_STATE(165)] = 3803,
  [SMALL_STATE(166)] = 3813,
  [SMALL_STATE(167)] = 3823,
  [SMALL_STATE(168)] = 3833,
  [SMALL_STATE(169)] = 3843,
  [SMALL_STATE(170)] = 3853,
  [SMALL_STATE(171)] = 3863,
  [SMALL_STATE(172)] = 3873,
  [SMALL_STATE(173)] = 3883,
  [SMALL_STATE(174)] = 3893,
  [SMALL_STATE(175)] = 3903,
  [SMALL_STATE(176)] = 3913,
  [SMALL_STATE(177)] = 3923,
  [SMALL_STATE(178)] = 3933,
  [SMALL_STATE(179)] = 3943,
  [SMALL_STATE(180)] = 3953,
  [SMALL_STATE(181)] = 3961,
  [SMALL_STATE(182)] = 3969,
  [SMALL_STATE(183)] = 3979,
  [SMALL_STATE(184)] = 3987,
  [SMALL_STATE(185)] = 3997,
  [SMALL_STATE(186)] = 4007,
  [SMALL_STATE(187)] = 4017,
  [SMALL_STATE(188)] = 4025,
  [SMALL_STATE(189)] = 4033,
  [SMALL_STATE(190)] = 4040,
  [SMALL_STATE(191)] = 4047,
  [SMALL_STATE(192)] = 4054,
  [SMALL_STATE(193)] = 4061,
  [SMALL_STATE(194)] = 4068,
  [SMALL_STATE(195)] = 4075,
  [SMALL_STATE(196)] = 4082,
  [SMALL_STATE(197)] = 4089,
  [SMALL_STATE(198)] = 4096,
  [SMALL_STATE(199)] = 4103,
  [SMALL_STATE(200)] = 4110,
  [SMALL_STATE(201)] = 4117,
  [SMALL_STATE(202)] = 4124,
  [SMALL_STATE(203)] = 4131,
  [SMALL_STATE(204)] = 4138,
  [SMALL_STATE(205)] = 4145,
  [SMALL_STATE(206)] = 4152,
  [SMALL_STATE(207)] = 4159,
  [SMALL_STATE(208)] = 4166,
  [SMALL_STATE(209)] = 4173,
  [SMALL_STATE(210)] = 4180,
  [SMALL_STATE(211)] = 4187,
  [SMALL_STATE(212)] = 4194,
  [SMALL_STATE(213)] = 4201,
  [SMALL_STATE(214)] = 4208,
  [SMALL_STATE(215)] = 4215,
  [SMALL_STATE(216)] = 4222,
  [SMALL_STATE(217)] = 4229,
  [SMALL_STATE(218)] = 4236,
  [SMALL_STATE(219)] = 4243,
  [SMALL_STATE(220)] = 4250,
  [SMALL_STATE(221)] = 4257,
  [SMALL_STATE(222)] = 4264,
  [SMALL_STATE(223)] = 4271,
  [SMALL_STATE(224)] = 4278,
  [SMALL_STATE(225)] = 4285,
  [SMALL_STATE(226)] = 4292,
  [SMALL_STATE(227)] = 4299,
  [SMALL_STATE(228)] = 4306,
  [SMALL_STATE(229)] = 4313,
  [SMALL_STATE(230)] = 4320,
  [SMALL_STATE(231)] = 4327,
  [SMALL_STATE(232)] = 4334,
  [SMALL_STATE(233)] = 4341,
  [SMALL_STATE(234)] = 4348,
  [SMALL_STATE(235)] = 4355,
  [SMALL_STATE(236)] = 4362,
  [SMALL_STATE(237)] = 4369,
  [SMALL_STATE(238)] = 4376,
  [SMALL_STATE(239)] = 4383,
  [SMALL_STATE(240)] = 4390,
  [SMALL_STATE(241)] = 4397,
  [SMALL_STATE(242)] = 4404,
  [SMALL_STATE(243)] = 4411,
  [SMALL_STATE(244)] = 4418,
  [SMALL_STATE(245)] = 4425,
  [SMALL_STATE(246)] = 4432,
  [SMALL_STATE(247)] = 4439,
  [SMALL_STATE(248)] = 4446,
  [SMALL_STATE(249)] = 4453,
  [SMALL_STATE(250)] = 4460,
  [SMALL_STATE(251)] = 4467,
  [SMALL_STATE(252)] = 4474,
  [SMALL_STATE(253)] = 4481,
  [SMALL_STATE(254)] = 4488,
  [SMALL_STATE(255)] = 4495,
  [SMALL_STATE(256)] = 4502,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messageBody_repeat1, 2), SHIFT_REPEAT(26),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2), SHIFT_REPEAT(114),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2), SHIFT_REPEAT(154),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messageBody_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2), SHIFT_REPEAT(153),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2), SHIFT_REPEAT(39),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2), SHIFT_REPEAT(179),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2), SHIFT_REPEAT(198),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2), SHIFT_REPEAT(183),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2), SHIFT_REPEAT(94),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2), SHIFT_REPEAT(127),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messageBody_repeat1, 2), SHIFT_REPEAT(132),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldName, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(42),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(112),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(183),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(127),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(132),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldNames, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldNames, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ranges_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2), SHIFT_REPEAT(151),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranges, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldNames, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldNames, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranges, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldNames_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fieldNames_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldNames_repeat1, 2), SHIFT_REPEAT(156),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messageBody, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messageBody, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumBody, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumBody, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messageBody, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messageBody, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emptyStatement, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emptyStatement, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapField, 13),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapField, 13),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumBody, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumBody, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 5),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 8),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 9),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 9),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapField, 10),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapField, 10),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneofField, 8),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneofField, 8),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneofField, 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneofField, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fullIdent, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fullIdent_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fullIdent_repeat1, 2), SHIFT_REPEAT(209),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fullIdent, 1),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumBody_repeat1, 2), SHIFT_REPEAT(120),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enumBody_repeat1, 2), SHIFT_REPEAT(113),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumBody_repeat1, 2),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enumBody_repeat1, 2), SHIFT_REPEAT(230),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(55),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(117),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(162),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(55),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(117),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatLit, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgLit, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strLit, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgLit, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumField, 9),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumField, 9),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumField, 7),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumField, 7),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumField, 4),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumField, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumField, 5),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumField, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msgLit_repeat1, 2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msgLit_repeat1, 2), SHIFT_REPEAT(7),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 14),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messageName, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumField, 8),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumField, 8),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldOptions_repeat1, 2), SHIFT_REPEAT(99),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldOptions_repeat1, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumMessageType, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumMessageType, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldOptions, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldOptions, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumMessageType, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumField_repeat1, 2), SHIFT_REPEAT(105),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumField_repeat1, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msgLit_repeat1, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumMessageType_repeat1, 2), SHIFT_REPEAT(234),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumValueOption, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldOption, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldNumber, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionName, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcName, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceName, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapName, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumName, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionName, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumVariantName, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extendName, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneofName, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumMessageType_repeat1, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [660] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyType, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_protobuf(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
