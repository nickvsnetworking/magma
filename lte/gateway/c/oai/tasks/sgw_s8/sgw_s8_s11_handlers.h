/*
Copyright 2020 The Magma Authors.

This source code is licensed under the BSD-style license found in the
LICENSE file in the root directory of this source tree.

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#pragma once
#include "common_types.h"
#include "s11_messages_types.h"
#include "intertask_interface.h"
#include "spgw_types.h"

void sgw_s8_handle_s11_create_session_request(
    sgw_state_t* sgw_state,
    const itti_s11_create_session_request_t* const session_req_p,
    imsi64_t imsi64);
