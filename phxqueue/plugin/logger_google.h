/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



#pragma once

#include <cstdio>
#include <string>

#include "phxqueue/comm.h"


namespace phxqueue {

namespace plugin {


class LoggerGoogle {
  public:
    static int GetLogger(const std::string &module_name, const std::string &log_path,
                         const int google_log_level, comm::LogFunc &log_func);

    static void Log(const int log_level, const char *format, va_list args);
};


}  // namespace plugin

}  // namespace phxqueue

