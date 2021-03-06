static const uint8_t test_enum_small_VALUE[2] = { 0x08, 0x00 };
static const uint8_t test_enum_small_OTHER_VALUE[2] = { 0x08, 0x01 };
static const uint8_t test_enum_big_VALUE0[2] = { 0x08, 0x00 };
static const uint8_t test_enum_big_VALUE127[2] = { 0x08, 0x7f };
static const uint8_t test_enum_big_VALUE128[3] = { 0x08, 0x80, 0x01 };
static const uint8_t test_enum_big_VALUE16383[3] = { 0x08, 0xff, 0x7f };
static const uint8_t test_enum_big_VALUE16384[4] = { 0x08, 0x80, 0x80, 0x01 };
static const uint8_t test_enum_big_VALUE2097151[4] = { 0x08, 0xff, 0xff, 0x7f };
static const uint8_t test_enum_big_VALUE2097152[5] = { 0x08, 0x80, 0x80, 0x80, 0x01 };
static const uint8_t test_enum_big_VALUE268435455[5] = { 0x08, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_enum_big_VALUE268435456[6] = { 0x08, 0x80, 0x80, 0x80, 0x80, 0x01 };
static const uint8_t test_field_number_15[5] = { 0x7a, 0x03, 0x74, 0x73, 0x74 };
static const uint8_t test_field_number_16[6] = { 0x82, 0x01, 0x03, 0x74, 0x73, 0x74 };
static const uint8_t test_field_number_2047[6] = { 0xfa, 0x7f, 0x03, 0x74, 0x73, 0x74 };
static const uint8_t test_field_number_2048[7] = { 0x82, 0x80, 0x01, 0x03, 0x74, 0x73, 0x74 };
static const uint8_t test_field_number_262143[7] = { 0xfa, 0xff, 0x7f, 0x03, 0x74, 0x73, 0x74 };
static const uint8_t test_field_number_262144[8] = { 0x82, 0x80, 0x80, 0x01, 0x03, 0x74, 0x73, 0x74 };
static const uint8_t test_field_number_33554431[8] = { 0xfa, 0xff, 0xff, 0x7f, 0x03, 0x74, 0x73, 0x74 };
static const uint8_t test_field_number_33554432[9] = { 0x82, 0x80, 0x80, 0x80, 0x01, 0x03, 0x74, 0x73, 0x74 };
static const uint8_t test_required_int32_min[12] = { 0xd0, 0x02, 0x80, 0x80, 0x80, 0x80, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_required_int32_m1000[12] = { 0xd0, 0x02, 0x98, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_required_int32_0[3] = { 0xd0, 0x02, 0x00 };
static const uint8_t test_required_int32_max[7] = { 0xd0, 0x02, 0xff, 0xff, 0xff, 0xff, 0x07 };
static const uint8_t test_required_sint32_min[7] = { 0xd8, 0x02, 0xff, 0xff, 0xff, 0xff, 0x0f };
static const uint8_t test_required_sint32_m1000[4] = { 0xd8, 0x02, 0xcf, 0x0f };
static const uint8_t test_required_sint32_0[3] = { 0xd8, 0x02, 0x00 };
static const uint8_t test_required_sint32_max[7] = { 0xd8, 0x02, 0xfe, 0xff, 0xff, 0xff, 0x0f };
static const uint8_t test_required_sfixed32_min[6] = { 0xa5, 0x06, 0x00, 0x00, 0x00, 0x80 };
static const uint8_t test_required_sfixed32_m1000[6] = { 0xa5, 0x06, 0x18, 0xfc, 0xff, 0xff };
static const uint8_t test_required_sfixed32_0[6] = { 0xa5, 0x06, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_required_sfixed32_max[6] = { 0xa5, 0x06, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_required_uint32_0[2] = { 0x08, 0x00 };
static const uint8_t test_required_uint32_million[4] = { 0x08, 0xc0, 0x84, 0x3d };
static const uint8_t test_required_uint32_max[6] = { 0x08, 0xff, 0xff, 0xff, 0xff, 0x0f };
static const uint8_t test_required_fixed32_0[5] = { 0x0d, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_required_fixed32_million[5] = { 0x0d, 0x40, 0x42, 0x0f, 0x00 };
static const uint8_t test_required_fixed32_max[5] = { 0x0d, 0xff, 0xff, 0xff, 0xff };
static const uint8_t test_required_int64_min[11] = { 0x08, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x01 };
static const uint8_t test_required_int64_mtril[11] = { 0x08, 0x80, 0xe0, 0xeb, 0xda, 0xf2, 0xe2, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_required_int64_0[2] = { 0x08, 0x00 };
static const uint8_t test_required_int64_quad[9] = { 0x08, 0x80, 0x80, 0x9a, 0xa6, 0xea, 0xaf, 0xe3, 0x01 };
static const uint8_t test_required_int64_max[10] = { 0x08, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_required_sint64_min[11] = { 0x58, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_required_sint64_mtril[7] = { 0x58, 0xff, 0xbf, 0xa8, 0xca, 0x9a, 0x3a };
static const uint8_t test_required_sint64_0[2] = { 0x58, 0x00 };
static const uint8_t test_required_sint64_quad[9] = { 0x58, 0x80, 0x80, 0xb4, 0xcc, 0xd4, 0xdf, 0xc6, 0x03 };
static const uint8_t test_required_sint64_max[11] = { 0x58, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_required_sfixed64_min[9] = { 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80 };
static const uint8_t test_required_sfixed64_mtril[9] = { 0x61, 0x00, 0xf0, 0x5a, 0x2b, 0x17, 0xff, 0xff, 0xff };
static const uint8_t test_required_sfixed64_0[9] = { 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_required_sfixed64_quad[9] = { 0x61, 0x00, 0x80, 0xc6, 0xa4, 0x7e, 0x8d, 0x03, 0x00 };
static const uint8_t test_required_sfixed64_max[9] = { 0x61, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_required_uint64_0[2] = { 0x08, 0x00 };
static const uint8_t test_required_uint64_thou[3] = { 0x08, 0xe8, 0x07 };
static const uint8_t test_required_uint64_mill[4] = { 0x08, 0xc0, 0x84, 0x3d };
static const uint8_t test_required_uint64_bill[6] = { 0x08, 0x80, 0x94, 0xeb, 0xdc, 0x03 };
static const uint8_t test_required_uint64_tril[7] = { 0x08, 0x80, 0xa0, 0x94, 0xa5, 0x8d, 0x1d };
static const uint8_t test_required_uint64_quad[9] = { 0x08, 0x80, 0x80, 0x9a, 0xa6, 0xea, 0xaf, 0xe3, 0x01 };
static const uint8_t test_required_uint64_quint[10] = { 0x08, 0x80, 0x80, 0x90, 0xbb, 0xba, 0xd6, 0xad, 0xf0, 0x0d };
static const uint8_t test_required_uint64_max[11] = { 0x08, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_required_fixed64_0[9] = { 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_required_fixed64_thou[9] = { 0x09, 0xe8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_required_fixed64_mill[9] = { 0x09, 0x40, 0x42, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_required_fixed64_bill[9] = { 0x09, 0x00, 0xca, 0x9a, 0x3b, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_required_fixed64_tril[9] = { 0x09, 0x00, 0x10, 0xa5, 0xd4, 0xe8, 0x00, 0x00, 0x00 };
static const uint8_t test_required_fixed64_quad[9] = { 0x09, 0x00, 0x80, 0xc6, 0xa4, 0x7e, 0x8d, 0x03, 0x00 };
static const uint8_t test_required_fixed64_quint[9] = { 0x09, 0x00, 0x00, 0x64, 0xa7, 0xb3, 0xb6, 0xe0, 0x0d };
static const uint8_t test_required_fixed64_max[9] = { 0x09, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };
static const uint8_t test_required_float_mthou[5] = { 0x0d, 0x00, 0x00, 0x7a, 0xc4 };
static const uint8_t test_required_float_0[5] = { 0x0d, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_required_float_420[5] = { 0x0d, 0x00, 0x00, 0xd2, 0x43 };
static const uint8_t test_required_double_mthou[9] = { 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x8f, 0xc0 };
static const uint8_t test_required_double_0[9] = { 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_required_double_420[9] = { 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x7a, 0x40 };
static const uint8_t test_required_bool_0[2] = { 0x08, 0x00 };
static const uint8_t test_required_bool_1[2] = { 0x08, 0x01 };
static const uint8_t test_required_enum_small_VALUE[2] = { 0x08, 0x00 };
static const uint8_t test_required_enum_small_OTHER_VALUE[2] = { 0x08, 0x01 };
static const uint8_t test_required_enum_0[2] = { 0x08, 0x00 };
static const uint8_t test_required_enum_1[2] = { 0x08, 0x01 };
static const uint8_t test_required_enum_127[2] = { 0x08, 0x7f };
static const uint8_t test_required_enum_128[3] = { 0x08, 0x80, 0x01 };
static const uint8_t test_required_enum_16383[3] = { 0x08, 0xff, 0x7f };
static const uint8_t test_required_enum_16384[4] = { 0x08, 0x80, 0x80, 0x01 };
static const uint8_t test_required_enum_2097151[4] = { 0x08, 0xff, 0xff, 0x7f };
static const uint8_t test_required_enum_2097152[5] = { 0x08, 0x80, 0x80, 0x80, 0x01 };
static const uint8_t test_required_enum_268435455[5] = { 0x08, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_required_enum_268435456[6] = { 0x08, 0x80, 0x80, 0x80, 0x80, 0x01 };
static const uint8_t test_required_string_empty[2] = { 0x0a, 0x00 };
static const uint8_t test_required_string_hello[7] = { 0x0a, 0x05, 0x68, 0x65, 0x6c, 0x6c, 0x6f };
static const uint8_t test_required_string_long[226] = { 0x0a, 0xdf, 0x01, 0x74, 0x77, 0x6f, 0x20, 0x68, 0x75, 0x6e, 0x64, 0x72, 0x65, 0x64, 0x20, 0x78, 0x73, 0x20, 0x66, 0x6f, 0x6c, 0x6c, 0x6f, 0x77, 0x3a, 0x20, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78 };
static const uint8_t test_required_bytes_empty[2] = { 0x0a, 0x00 };
static const uint8_t test_required_bytes_hello[7] = { 0x0a, 0x05, 0x68, 0x65, 0x6c, 0x6c, 0x6f };
static const uint8_t test_required_bytes_random[7] = { 0x0a, 0x05, 0x01, 0x00, 0xfd, 0x02, 0x04 };
static const uint8_t test_required_submess_0[4] = { 0x0a, 0x02, 0x20, 0x00 };
static const uint8_t test_required_submess_42[4] = { 0x0a, 0x02, 0x20, 0x2a };
static const uint8_t test_optional_int32_min[11] = { 0x08, 0x80, 0x80, 0x80, 0x80, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_optional_int32_m1[11] = { 0x08, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_optional_int32_0[2] = { 0x08, 0x00 };
static const uint8_t test_optional_int32_666[3] = { 0x08, 0x9a, 0x05 };
static const uint8_t test_optional_int32_max[6] = { 0x08, 0xff, 0xff, 0xff, 0xff, 0x07 };
static const uint8_t test_optional_sint32_min[6] = { 0x10, 0xff, 0xff, 0xff, 0xff, 0x0f };
static const uint8_t test_optional_sint32_m1[2] = { 0x10, 0x01 };
static const uint8_t test_optional_sint32_0[2] = { 0x10, 0x00 };
static const uint8_t test_optional_sint32_666[3] = { 0x10, 0xb4, 0x0a };
static const uint8_t test_optional_sint32_max[6] = { 0x10, 0xfe, 0xff, 0xff, 0xff, 0x0f };
static const uint8_t test_optional_sfixed32_min[5] = { 0x1d, 0x00, 0x00, 0x00, 0x80 };
static const uint8_t test_optional_sfixed32_m1[5] = { 0x1d, 0xff, 0xff, 0xff, 0xff };
static const uint8_t test_optional_sfixed32_0[5] = { 0x1d, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_optional_sfixed32_666[5] = { 0x1d, 0x9a, 0x02, 0x00, 0x00 };
static const uint8_t test_optional_sfixed32_max[5] = { 0x1d, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_optional_int64_min[11] = { 0x20, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x01 };
static const uint8_t test_optional_int64_m1111111111LL[11] = { 0x20, 0xb9, 0x94, 0x97, 0xee, 0xfb, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_optional_int64_0[2] = { 0x20, 0x00 };
static const uint8_t test_optional_int64_quintillion[10] = { 0x20, 0x80, 0x80, 0x90, 0xbb, 0xba, 0xd6, 0xad, 0xf0, 0x0d };
static const uint8_t test_optional_int64_max[10] = { 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_optional_sint64_min[11] = { 0x28, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_optional_sint64_m1111111111LL[6] = { 0x28, 0x8d, 0xd7, 0xd1, 0xa3, 0x08 };
static const uint8_t test_optional_sint64_0[2] = { 0x28, 0x00 };
static const uint8_t test_optional_sint64_quintillion[10] = { 0x28, 0x80, 0x80, 0xa0, 0xf6, 0xf4, 0xac, 0xdb, 0xe0, 0x1b };
static const uint8_t test_optional_sint64_max[11] = { 0x28, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_optional_sfixed64_min[9] = { 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80 };
static const uint8_t test_optional_sfixed64_m1111111111LL[9] = { 0x31, 0x39, 0xca, 0xc5, 0xbd, 0xff, 0xff, 0xff, 0xff };
static const uint8_t test_optional_sfixed64_0[9] = { 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_optional_sfixed64_quintillion[9] = { 0x31, 0x00, 0x00, 0x64, 0xa7, 0xb3, 0xb6, 0xe0, 0x0d };
static const uint8_t test_optional_sfixed64_max[9] = { 0x31, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_optional_uint32_0[2] = { 0x38, 0x00 };
static const uint8_t test_optional_uint32_669[3] = { 0x38, 0x9d, 0x05 };
static const uint8_t test_optional_uint32_max[6] = { 0x38, 0xff, 0xff, 0xff, 0xff, 0x0f };
static const uint8_t test_optional_fixed32_0[5] = { 0x45, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_optional_fixed32_669[5] = { 0x45, 0x9d, 0x02, 0x00, 0x00 };
static const uint8_t test_optional_fixed32_max[5] = { 0x45, 0xff, 0xff, 0xff, 0xff };
static const uint8_t test_optional_uint64_0[2] = { 0x48, 0x00 };
static const uint8_t test_optional_uint64_669669669669669[9] = { 0x48, 0xa5, 0x96, 0x9c, 0xf6, 0xf9, 0xa1, 0x98, 0x01 };
static const uint8_t test_optional_uint64_max[11] = { 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_optional_fixed64_0[9] = { 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_optional_fixed64_669669669669669[9] = { 0x51, 0x25, 0x0b, 0xc7, 0x9e, 0x0f, 0x61, 0x02, 0x00 };
static const uint8_t test_optional_fixed64_max[9] = { 0x51, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };
static const uint8_t test_optional_float_m100[5] = { 0x5d, 0x00, 0x00, 0xc8, 0xc2 };
static const uint8_t test_optional_float_0[5] = { 0x5d, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_optional_float_141243[5] = { 0x5d, 0xc0, 0xee, 0x09, 0x48 };
static const uint8_t test_optional_double_m100[9] = { 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x59, 0xc0 };
static const uint8_t test_optional_double_0[9] = { 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_optional_double_141243[9] = { 0x61, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x3d, 0x01, 0x41 };
static const uint8_t test_optional_bool_0[2] = { 0x68, 0x00 };
static const uint8_t test_optional_bool_1[2] = { 0x68, 0x01 };
static const uint8_t test_optional_enum_small_0[2] = { 0x70, 0x00 };
static const uint8_t test_optional_enum_small_1[2] = { 0x70, 0x01 };
static const uint8_t test_optional_enum_0[2] = { 0x78, 0x00 };
static const uint8_t test_optional_enum_1[2] = { 0x78, 0x01 };
static const uint8_t test_optional_enum_127[2] = { 0x78, 0x7f };
static const uint8_t test_optional_enum_128[3] = { 0x78, 0x80, 0x01 };
static const uint8_t test_optional_enum_16383[3] = { 0x78, 0xff, 0x7f };
static const uint8_t test_optional_enum_16384[4] = { 0x78, 0x80, 0x80, 0x01 };
static const uint8_t test_optional_enum_2097151[4] = { 0x78, 0xff, 0xff, 0x7f };
static const uint8_t test_optional_enum_2097152[5] = { 0x78, 0x80, 0x80, 0x80, 0x01 };
static const uint8_t test_optional_enum_268435455[5] = { 0x78, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_optional_enum_268435456[6] = { 0x78, 0x80, 0x80, 0x80, 0x80, 0x01 };
static const uint8_t test_optional_string_empty[3] = { 0x82, 0x01, 0x00 };
static const uint8_t test_optional_string_hello[8] = { 0x82, 0x01, 0x05, 0x68, 0x65, 0x6c, 0x6c, 0x6f };
static const uint8_t test_optional_bytes_empty[3] = { 0x8a, 0x01, 0x00 };
static const uint8_t test_optional_bytes_hello[8] = { 0x8a, 0x01, 0x05, 0x68, 0x65, 0x6c, 0x6c, 0x6f };
static const uint8_t test_optional_bytes_random[8] = { 0x8a, 0x01, 0x05, 0x01, 0x00, 0xfd, 0x02, 0x04 };
static const uint8_t test_optional_submess_0[5] = { 0x92, 0x01, 0x02, 0x20, 0x00 };
static const uint8_t test_optional_submess_42[5] = { 0x92, 0x01, 0x02, 0x20, 0x2a };
static const uint8_t test_repeated_int32_arr0[13] = { 0x08, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x08, 0x01 };
static const uint8_t test_repeated_int32_arr1[20] = { 0x08, 0x2a, 0x08, 0x9a, 0x05, 0x08, 0xcd, 0xb9, 0xbb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x08, 0x00, 0x08, 0x2f };
static const uint8_t test_repeated_int32_arr_min_max[17] = { 0x08, 0x80, 0x80, 0x80, 0x80, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x01, 0x08, 0xff, 0xff, 0xff, 0xff, 0x07 };
static const uint8_t test_repeated_sint32_arr0[4] = { 0x10, 0x01, 0x10, 0x02 };
static const uint8_t test_repeated_sint32_arr1[14] = { 0x10, 0x54, 0x10, 0xb4, 0x0a, 0x10, 0xe5, 0x8c, 0x89, 0x01, 0x10, 0x00, 0x10, 0x5e };
static const uint8_t test_repeated_sint32_arr_min_max[12] = { 0x10, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x10, 0xfe, 0xff, 0xff, 0xff, 0x0f };
static const uint8_t test_repeated_uint32_roundnumbers[14] = { 0x38, 0x80, 0x94, 0xeb, 0xdc, 0x03, 0x38, 0xc0, 0x84, 0x3d, 0x38, 0x01, 0x38, 0x00 };
static const uint8_t test_repeated_uint32_0_max[8] = { 0x38, 0x00, 0x38, 0xff, 0xff, 0xff, 0xff, 0x0f };
static const uint8_t test_repeated_sfixed32_arr0[10] = { 0x1d, 0xff, 0xff, 0xff, 0xff, 0x1d, 0x01, 0x00, 0x00, 0x00 };
static const uint8_t test_repeated_sfixed32_arr1[25] = { 0x1d, 0x2a, 0x00, 0x00, 0x00, 0x1d, 0x9a, 0x02, 0x00, 0x00, 0x1d, 0xcd, 0xdc, 0xee, 0xff, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x1d, 0x2f, 0x00, 0x00, 0x00 };
static const uint8_t test_repeated_sfixed32_arr_min_max[10] = { 0x1d, 0x00, 0x00, 0x00, 0x80, 0x1d, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_repeated_fixed32_roundnumbers[20] = { 0x45, 0x00, 0xca, 0x9a, 0x3b, 0x45, 0x40, 0x42, 0x0f, 0x00, 0x45, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_repeated_fixed32_0_max[10] = { 0x45, 0x00, 0x00, 0x00, 0x00, 0x45, 0xff, 0xff, 0xff, 0xff };
static const uint8_t test_repeated_int64_roundnumbers[111] = { 0x20, 0x80, 0x80, 0xf0, 0xc4, 0xc5, 0xa9, 0xd2, 0x8f, 0xf2, 0x01, 0x20, 0x80, 0x80, 0xe6, 0xd9, 0x95, 0xd0, 0x9c, 0xfe, 0xff, 0x01, 0x20, 0x80, 0xe0, 0xeb, 0xda, 0xf2, 0xe2, 0xff, 0xff, 0xff, 0x01, 0x20, 0x80, 0xec, 0x94, 0xa3, 0xfc, 0xff, 0xff, 0xff, 0xff, 0x01, 0x20, 0xc0, 0xfb, 0xc2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x20, 0x98, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x20, 0x01, 0x20, 0xe8, 0x07, 0x20, 0xc0, 0x84, 0x3d, 0x20, 0x80, 0x94, 0xeb, 0xdc, 0x03, 0x20, 0x80, 0xa0, 0x94, 0xa5, 0x8d, 0x1d, 0x20, 0x80, 0x80, 0x9a, 0xa6, 0xea, 0xaf, 0xe3, 0x01, 0x20, 0x80, 0x80, 0x90, 0xbb, 0xba, 0xd6, 0xad, 0xf0, 0x0d, 0x20, 0x00, 0x20, 0x00 };
static const uint8_t test_repeated_int64_min_max[21] = { 0x20, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x01, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_repeated_sint64_roundnumbers[84] = { 0x28, 0xff, 0xff, 0x9f, 0xf6, 0xf4, 0xac, 0xdb, 0xe0, 0x1b, 0x28, 0xff, 0xff, 0xb3, 0xcc, 0xd4, 0xdf, 0xc6, 0x03, 0x28, 0xff, 0xbf, 0xa8, 0xca, 0x9a, 0x3a, 0x28, 0xff, 0xa7, 0xd6, 0xb9, 0x07, 0x28, 0xff, 0x88, 0x7a, 0x28, 0xcf, 0x0f, 0x28, 0x02, 0x28, 0xd0, 0x0f, 0x28, 0x80, 0x89, 0x7a, 0x28, 0x80, 0xa8, 0xd6, 0xb9, 0x07, 0x28, 0x80, 0xc0, 0xa8, 0xca, 0x9a, 0x3a, 0x28, 0x80, 0x80, 0xb4, 0xcc, 0xd4, 0xdf, 0xc6, 0x03, 0x28, 0x80, 0x80, 0xa0, 0xf6, 0xf4, 0xac, 0xdb, 0xe0, 0x1b, 0x28, 0x00, 0x28, 0x00 };
static const uint8_t test_repeated_sint64_min_max[22] = { 0x28, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x28, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_repeated_sfixed64_roundnumbers[135] = { 0x31, 0x00, 0x00, 0x9c, 0x58, 0x4c, 0x49, 0x1f, 0xf2, 0x31, 0x00, 0x80, 0x39, 0x5b, 0x81, 0x72, 0xfc, 0xff, 0x31, 0x00, 0xf0, 0x5a, 0x2b, 0x17, 0xff, 0xff, 0xff, 0x31, 0x00, 0x36, 0x65, 0xc4, 0xff, 0xff, 0xff, 0xff, 0x31, 0xc0, 0xbd, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x31, 0x18, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x31, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0xe8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x40, 0x42, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0xca, 0x9a, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x10, 0xa5, 0xd4, 0xe8, 0x00, 0x00, 0x00, 0x31, 0x00, 0x80, 0xc6, 0xa4, 0x7e, 0x8d, 0x03, 0x00, 0x31, 0x00, 0x00, 0x64, 0xa7, 0xb3, 0xb6, 0xe0, 0x0d, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_repeated_sfixed64_min_max[18] = { 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x31, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_repeated_uint64_roundnumbers[45] = { 0x48, 0x01, 0x48, 0xe8, 0x07, 0x48, 0xc0, 0x84, 0x3d, 0x48, 0x80, 0x94, 0xeb, 0xdc, 0x03, 0x48, 0x80, 0xa0, 0x94, 0xa5, 0x8d, 0x1d, 0x48, 0x80, 0x80, 0x9a, 0xa6, 0xea, 0xaf, 0xe3, 0x01, 0x48, 0x80, 0x80, 0x90, 0xbb, 0xba, 0xd6, 0xad, 0xf0, 0x0d, 0x48, 0x00, 0x48, 0x00 };
static const uint8_t test_repeated_uint64_0_1_max[15] = { 0x48, 0x00, 0x48, 0x01, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_repeated_uint64_random[22] = { 0x48, 0x00, 0x48, 0x9a, 0x05, 0x48, 0x80, 0xd4, 0xdb, 0xd2, 0x0f, 0x48, 0xa1, 0x80, 0x80, 0xb2, 0xa7, 0xe7, 0xda, 0x85, 0xde, 0x01 };
static const uint8_t test_repeated_fixed64_roundnumbers[81] = { 0x51, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x40, 0x42, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0xca, 0x9a, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x10, 0xa5, 0xd4, 0xe8, 0x00, 0x00, 0x00, 0x51, 0x00, 0x80, 0xc6, 0xa4, 0x7e, 0x8d, 0x03, 0x00, 0x51, 0x00, 0x00, 0x64, 0xa7, 0xb3, 0xb6, 0xe0, 0x0d, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_repeated_fixed64_0_1_max[27] = { 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };
static const uint8_t test_repeated_fixed64_random[36] = { 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x9a, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0xea, 0x56, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x51, 0x21, 0x00, 0x40, 0x76, 0x3a, 0x6b, 0x0b, 0xde };
static const uint8_t test_repeated_float_random[30] = { 0x5d, 0x00, 0x00, 0x7a, 0xc4, 0x5d, 0x00, 0x00, 0xc8, 0xc2, 0x5d, 0x00, 0x00, 0x28, 0xc2, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x80, 0x26, 0x44, 0x5d, 0x40, 0x3c, 0x00, 0x48 };
static const uint8_t test_repeated_double_random[54] = { 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x8f, 0xc0, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x59, 0xc0, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0xc0, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x84, 0x40, 0x61, 0x00, 0x00, 0x00, 0x00, 0x88, 0x07, 0x00, 0x41 };
static const uint8_t test_repeated_boolean_0[2] = { 0x68, 0x00 };
static const uint8_t test_repeated_boolean_1[2] = { 0x68, 0x01 };
static const uint8_t test_repeated_boolean_random[52] = { 0x68, 0x00, 0x68, 0x01, 0x68, 0x01, 0x68, 0x00, 0x68, 0x00, 0x68, 0x01, 0x68, 0x01, 0x68, 0x01, 0x68, 0x00, 0x68, 0x00, 0x68, 0x00, 0x68, 0x00, 0x68, 0x00, 0x68, 0x01, 0x68, 0x01, 0x68, 0x01, 0x68, 0x01, 0x68, 0x01, 0x68, 0x01, 0x68, 0x00, 0x68, 0x01, 0x68, 0x01, 0x68, 0x00, 0x68, 0x01, 0x68, 0x01, 0x68, 0x00 };
static const uint8_t test_repeated_enum_small_0[2] = { 0x70, 0x00 };
static const uint8_t test_repeated_enum_small_1[2] = { 0x70, 0x01 };
static const uint8_t test_repeated_enum_small_random[52] = { 0x70, 0x00, 0x70, 0x01, 0x70, 0x01, 0x70, 0x00, 0x70, 0x00, 0x70, 0x01, 0x70, 0x01, 0x70, 0x01, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x01, 0x70, 0x01, 0x70, 0x01, 0x70, 0x01, 0x70, 0x01, 0x70, 0x01, 0x70, 0x00, 0x70, 0x01, 0x70, 0x01, 0x70, 0x00, 0x70, 0x01, 0x70, 0x01, 0x70, 0x00 };
static const uint8_t test_repeated_enum_0[2] = { 0x78, 0x00 };
static const uint8_t test_repeated_enum_1[2] = { 0x78, 0x01 };
static const uint8_t test_repeated_enum_random[55] = { 0x78, 0x00, 0x78, 0xff, 0xff, 0xff, 0x7f, 0x78, 0x7f, 0x78, 0x80, 0x80, 0x01, 0x78, 0xff, 0x7f, 0x78, 0x80, 0x80, 0x80, 0x01, 0x78, 0xff, 0xff, 0x7f, 0x78, 0x80, 0x01, 0x78, 0x80, 0x80, 0x80, 0x80, 0x01, 0x78, 0x00, 0x78, 0x80, 0x80, 0x80, 0x01, 0x78, 0xff, 0xff, 0xff, 0x7f, 0x78, 0x7f, 0x78, 0xff, 0x7f, 0x78, 0x80, 0x80, 0x01 };
static const uint8_t test_repeated_strings_0[12] = { 0x82, 0x01, 0x09, 0x6f, 0x6e, 0x65, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67 };
static const uint8_t test_repeated_strings_1[15] = { 0x82, 0x01, 0x03, 0x74, 0x77, 0x6f, 0x82, 0x01, 0x06, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67 };
static const uint8_t test_repeated_strings_2[57] = { 0x82, 0x01, 0x04, 0x6d, 0x61, 0x6e, 0x79, 0x82, 0x01, 0x04, 0x74, 0x69, 0x6e, 0x79, 0x82, 0x01, 0x06, 0x6c, 0x69, 0x74, 0x74, 0x6c, 0x65, 0x82, 0x01, 0x07, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x73, 0x82, 0x01, 0x06, 0x73, 0x68, 0x6f, 0x75, 0x6c, 0x64, 0x82, 0x01, 0x02, 0x62, 0x65, 0x82, 0x01, 0x07, 0x68, 0x61, 0x6e, 0x64, 0x6c, 0x65, 0x64 };
static const uint8_t test_repeated_strings_3[335] = { 0x82, 0x01, 0xcb, 0x02, 0x6f, 0x6e, 0x65, 0x20, 0x76, 0x65, 0x72, 0x79, 0x20, 0x6c, 0x6f, 0x6e, 0x67, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x73, 0x20, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58 };
static const uint8_t test_repeated_bytes_0[32] = { 0x8a, 0x01, 0x04, 0x74, 0x65, 0x78, 0x74, 0x8a, 0x01, 0x09, 0x73, 0x74, 0x72, 0x01, 0x02, 0x03, 0x04, 0x05, 0x00, 0x8a, 0x01, 0x0a, 0x67, 0x6f, 0x62, 0x62, 0x6c, 0x65, 0x00, 0x66, 0x6f, 0x6f };
static const uint8_t test_repeated_submess_0[15] = { 0x92, 0x01, 0x02, 0x20, 0x00, 0x92, 0x01, 0x02, 0x20, 0x00, 0x92, 0x01, 0x02, 0x20, 0x00 };
static const uint8_t test_repeated_submess_1[25] = { 0x92, 0x01, 0x02, 0x20, 0x2a, 0x92, 0x01, 0x0b, 0x20, 0xf0, 0xb1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x92, 0x01, 0x03, 0x20, 0x9b, 0x05 };
static const uint8_t test_packed_repeated_int32_arr0[13] = { 0x0a, 0x0b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x01 };
static const uint8_t test_packed_repeated_int32_arr1[17] = { 0x0a, 0x0f, 0x2a, 0x9a, 0x05, 0xcd, 0xb9, 0xbb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x2f };
static const uint8_t test_packed_repeated_int32_arr_min_max[17] = { 0x0a, 0x0f, 0x80, 0x80, 0x80, 0x80, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0xff, 0x07 };
static const uint8_t test_packed_repeated_sint32_arr0[4] = { 0x12, 0x02, 0x01, 0x02 };
static const uint8_t test_packed_repeated_sint32_arr1[11] = { 0x12, 0x09, 0x54, 0xb4, 0x0a, 0xe5, 0x8c, 0x89, 0x01, 0x00, 0x5e };
static const uint8_t test_packed_repeated_sint32_arr_min_max[12] = { 0x12, 0x0a, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xfe, 0xff, 0xff, 0xff, 0x0f };
static const uint8_t test_packed_repeated_uint32_roundnumbers[12] = { 0x3a, 0x0a, 0x80, 0x94, 0xeb, 0xdc, 0x03, 0xc0, 0x84, 0x3d, 0x01, 0x00 };
static const uint8_t test_packed_repeated_uint32_0_max[8] = { 0x3a, 0x06, 0x00, 0xff, 0xff, 0xff, 0xff, 0x0f };
static const uint8_t test_packed_repeated_sfixed32_arr0[10] = { 0x1a, 0x08, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00 };
static const uint8_t test_packed_repeated_sfixed32_arr1[22] = { 0x1a, 0x14, 0x2a, 0x00, 0x00, 0x00, 0x9a, 0x02, 0x00, 0x00, 0xcd, 0xdc, 0xee, 0xff, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00 };
static const uint8_t test_packed_repeated_sfixed32_arr_min_max[10] = { 0x1a, 0x08, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_packed_repeated_fixed32_roundnumbers[18] = { 0x42, 0x10, 0x00, 0xca, 0x9a, 0x3b, 0x40, 0x42, 0x0f, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_packed_repeated_fixed32_0_max[10] = { 0x42, 0x08, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff };
static const uint8_t test_packed_repeated_int64_roundnumbers[98] = { 0x22, 0x60, 0x80, 0x80, 0xf0, 0xc4, 0xc5, 0xa9, 0xd2, 0x8f, 0xf2, 0x01, 0x80, 0x80, 0xe6, 0xd9, 0x95, 0xd0, 0x9c, 0xfe, 0xff, 0x01, 0x80, 0xe0, 0xeb, 0xda, 0xf2, 0xe2, 0xff, 0xff, 0xff, 0x01, 0x80, 0xec, 0x94, 0xa3, 0xfc, 0xff, 0xff, 0xff, 0xff, 0x01, 0xc0, 0xfb, 0xc2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x98, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x01, 0xe8, 0x07, 0xc0, 0x84, 0x3d, 0x80, 0x94, 0xeb, 0xdc, 0x03, 0x80, 0xa0, 0x94, 0xa5, 0x8d, 0x1d, 0x80, 0x80, 0x9a, 0xa6, 0xea, 0xaf, 0xe3, 0x01, 0x80, 0x80, 0x90, 0xbb, 0xba, 0xd6, 0xad, 0xf0, 0x0d, 0x00, 0x00 };
static const uint8_t test_packed_repeated_int64_min_max[21] = { 0x22, 0x13, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_packed_repeated_sint64_roundnumbers[71] = { 0x2a, 0x45, 0xff, 0xff, 0x9f, 0xf6, 0xf4, 0xac, 0xdb, 0xe0, 0x1b, 0xff, 0xff, 0xb3, 0xcc, 0xd4, 0xdf, 0xc6, 0x03, 0xff, 0xbf, 0xa8, 0xca, 0x9a, 0x3a, 0xff, 0xa7, 0xd6, 0xb9, 0x07, 0xff, 0x88, 0x7a, 0xcf, 0x0f, 0x02, 0xd0, 0x0f, 0x80, 0x89, 0x7a, 0x80, 0xa8, 0xd6, 0xb9, 0x07, 0x80, 0xc0, 0xa8, 0xca, 0x9a, 0x3a, 0x80, 0x80, 0xb4, 0xcc, 0xd4, 0xdf, 0xc6, 0x03, 0x80, 0x80, 0xa0, 0xf6, 0xf4, 0xac, 0xdb, 0xe0, 0x1b, 0x00, 0x00 };
static const uint8_t test_packed_repeated_sint64_min_max[22] = { 0x2a, 0x14, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_packed_repeated_sfixed64_roundnumbers[122] = { 0x32, 0x78, 0x00, 0x00, 0x9c, 0x58, 0x4c, 0x49, 0x1f, 0xf2, 0x00, 0x80, 0x39, 0x5b, 0x81, 0x72, 0xfc, 0xff, 0x00, 0xf0, 0x5a, 0x2b, 0x17, 0xff, 0xff, 0xff, 0x00, 0x36, 0x65, 0xc4, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xbd, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x18, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x42, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xca, 0x9a, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xa5, 0xd4, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc6, 0xa4, 0x7e, 0x8d, 0x03, 0x00, 0x00, 0x00, 0x64, 0xa7, 0xb3, 0xb6, 0xe0, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_packed_repeated_sfixed64_min_max[18] = { 0x32, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f };
static const uint8_t test_packed_repeated_uint64_roundnumbers[38] = { 0x4a, 0x24, 0x01, 0xe8, 0x07, 0xc0, 0x84, 0x3d, 0x80, 0x94, 0xeb, 0xdc, 0x03, 0x80, 0xa0, 0x94, 0xa5, 0x8d, 0x1d, 0x80, 0x80, 0x9a, 0xa6, 0xea, 0xaf, 0xe3, 0x01, 0x80, 0x80, 0x90, 0xbb, 0xba, 0xd6, 0xad, 0xf0, 0x0d, 0x00, 0x00 };
static const uint8_t test_packed_repeated_uint64_0_1_max[14] = { 0x4a, 0x0c, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01 };
static const uint8_t test_packed_repeated_uint64_random[20] = { 0x4a, 0x12, 0x00, 0x9a, 0x05, 0x80, 0xd4, 0xdb, 0xd2, 0x0f, 0xa1, 0x80, 0x80, 0xb2, 0xa7, 0xe7, 0xda, 0x85, 0xde, 0x01 };
static const uint8_t test_packed_repeated_fixed64_roundnumbers[74] = { 0x52, 0x48, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x42, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xca, 0x9a, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xa5, 0xd4, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc6, 0xa4, 0x7e, 0x8d, 0x03, 0x00, 0x00, 0x00, 0x64, 0xa7, 0xb3, 0xb6, 0xe0, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const uint8_t test_packed_repeated_fixed64_0_1_max[26] = { 0x52, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };
static const uint8_t test_packed_repeated_fixed64_random[34] = { 0x52, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xea, 0x56, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x40, 0x76, 0x3a, 0x6b, 0x0b, 0xde };
static const uint8_t test_packed_repeated_float_random[26] = { 0x5a, 0x18, 0x00, 0x00, 0x7a, 0xc4, 0x00, 0x00, 0xc8, 0xc2, 0x00, 0x00, 0x28, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x26, 0x44, 0x40, 0x3c, 0x00, 0x48 };
static const uint8_t test_packed_repeated_double_random[50] = { 0x62, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x8f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x59, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x84, 0x40, 0x00, 0x00, 0x00, 0x00, 0x88, 0x07, 0x00, 0x41 };
static const uint8_t test_packed_repeated_boolean_0[3] = { 0x6a, 0x01, 0x00 };
static const uint8_t test_packed_repeated_boolean_1[3] = { 0x6a, 0x01, 0x01 };
static const uint8_t test_packed_repeated_boolean_random[28] = { 0x6a, 0x1a, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00 };
static const uint8_t test_packed_repeated_enum_small_0[3] = { 0x72, 0x01, 0x00 };
static const uint8_t test_packed_repeated_enum_small_1[3] = { 0x72, 0x01, 0x01 };
static const uint8_t test_packed_repeated_enum_small_random[28] = { 0x72, 0x1a, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00 };
static const uint8_t test_packed_repeated_enum_0[3] = { 0x7a, 0x01, 0x00 };
static const uint8_t test_packed_repeated_enum_1[3] = { 0x7a, 0x01, 0x01 };
static const uint8_t test_packed_repeated_enum_random[42] = { 0x7a, 0x28, 0x00, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x80, 0x80, 0x01, 0xff, 0x7f, 0x80, 0x80, 0x80, 0x01, 0xff, 0xff, 0x7f, 0x80, 0x01, 0x80, 0x80, 0x80, 0x80, 0x01, 0x00, 0x80, 0x80, 0x80, 0x01, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0x7f, 0x80, 0x80, 0x01 };
static const uint8_t test_unknown_fields_0[12] = { 0xf0, 0xd4, 0x02, 0xff, 0x01, 0x9d, 0xdb, 0x02, 0x04, 0x01, 0x00, 0x00 };
static const uint8_t test_unknown_fields_1[23] = { 0xd2, 0xa0, 0x03, 0x08, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x89, 0xe6, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 };
