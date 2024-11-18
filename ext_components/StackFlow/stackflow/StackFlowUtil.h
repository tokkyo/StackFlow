/*
 * SPDX-FileCopyrightText: 2024 M5Stack Technology CO LTD
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once
#include <string>
#include <unordered_map>
#define WORK_ID_NONE -100
namespace StackFlows {
std::string sample_json_str_get(const std::string &json_str, const std::string &json_key);
int sample_get_work_id_num(const std::string &work_id);
std::string sample_get_work_id_name(const std::string &work_id);
std::string sample_get_work_id(int work_id_num, const std::string &unit_name);
std::string sample_escapeString(const std::string &input);
std::string sample_unescapeString(const std::string &input);
bool decode_stream(const std::string &in, std::string &out, std::unordered_map<int, std::string> &stream_buff);
int decode_base64(const std::string &in, std::string &out);
int encode_base64(const std::string &in, std::string &out);
};  // namespace StackFlows
