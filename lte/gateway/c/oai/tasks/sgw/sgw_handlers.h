/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the terms found in the LICENSE file in the root of this source tree.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

/*! \file sgw_handlers.h
 * \brief
 * \author Lionel Gauthier
 * \company Eurecom
 * \email: lionel.gauthier@eurecom.fr
 */

#ifndef FILE_SGW_HANDLERS_SEEN
#define FILE_SGW_HANDLERS_SEEN

#include "common_types.h"
#include "gtpv1_u_messages_types.h"
#include "ip_forward_messages_types.h"
#include "s11_messages_types.h"
#include "spgw_state.h"
#include "intertask_interface.h"

extern task_zmq_ctx_t spgw_app_task_zmq_ctx;

int sgw_handle_s11_create_session_request(
    spgw_state_t* state,
    const itti_s11_create_session_request_t* const session_req_p,
    imsi64_t imsi64);
void sgw_handle_sgi_endpoint_updated(
    const itti_sgi_update_end_point_response_t* const resp_p, imsi64_t imsi64);
int sgw_handle_sgi_endpoint_deleted(
    const itti_sgi_delete_end_point_request_t* const resp_pP, imsi64_t imsi64);
int sgw_handle_modify_bearer_request(
    spgw_state_t* state,
    const itti_s11_modify_bearer_request_t* const modify_bearer_p,
    imsi64_t imsi64);
int sgw_handle_delete_session_request(
    spgw_state_t* spgw_state,
    const itti_s11_delete_session_request_t* const delete_session_p,
    imsi64_t imsi64);
int sgw_handle_release_access_bearers_request(
    const itti_s11_release_access_bearers_request_t* const
        release_access_bearers_req_pP,
    imsi64_t imsi64);
int sgw_handle_suspend_notification(
    const itti_s11_suspend_notification_t* const suspend_notification_pP,
    imsi64_t imsi64);
int sgw_handle_nw_initiated_actv_bearer_rsp(
    const itti_s11_nw_init_actv_bearer_rsp_t* const s11_actv_bearer_rsp,
    imsi64_t imsi64);
int sgw_handle_nw_initiated_deactv_bearer_rsp(
    spgw_state_t* spgw_state,
    const itti_s11_nw_init_deactv_bearer_rsp_t* const
        s11_pcrf_ded_bearer_deactv_rsp,
    imsi64_t imsi64);
int sgw_handle_ip_allocation_rsp(
    spgw_state_t* spgw_state,
    const itti_ip_allocation_response_t* ip_allocation_rsp, imsi64_t imsi64);
bool is_enb_ip_address_same(const fteid_t* fte_p, ip_address_t* ip_p);
uint32_t spgw_get_new_s1u_teid(spgw_state_t* state);
#endif /* FILE_SGW_HANDLERS_SEEN */
