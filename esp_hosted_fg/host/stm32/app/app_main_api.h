// Copyright 2015-2021 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/** prevent recursive inclusion **/
#ifndef __APP_MAIN_API_H
#define __APP_MAIN_API_H

#ifdef __cplusplus
extern "C" {
#endif

/** Includes **/

/** Exported Structures **/

/** Exported variables **/

/** Inline functions **/

/** Exported Functions **/
uint8_t * stream_get(uint8_t * stream, uint8_t offset, uint16_t len);
void stream_set(uint8_t * stream, const void *val,
		uint8_t offset, uint16_t len);

#ifdef __cplusplus
}
#endif

#endif
