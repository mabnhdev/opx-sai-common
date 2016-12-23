/************************************************************************
* LEGALESE:   "Copyright (c); 2016, Dell Inc. All rights reserved."
*
* This source code is confidential, proprietary, and contains trade
* secrets that are the sole property of Dell Inc.
* Copy and/or distribution of this source code or disassembly or reverse
* engineering of the resultant object code are strictly forbidden without
* the written consent of Dell Inc.
*
************************************************************************/
/**
* @file sai_tunnel_api_utils.h
*
* @brief This private header file contains SAI Tunnel util functions
*        data structure definitions
*
****************************************************************************/
#ifndef _SAI_TUNNEL_API_UTILS_H_
#define _SAI_TUNNEL_API_UTILS_H_

#include "saitunnel.h"
#include "saitypes.h"
#include "sai_common_utils.h"
#include "sai_tunnel_util.h"

void dn_sai_tunnel_term_obj_api_fill (sai_tunnel_api_t *api_table);

sai_status_t dn_sai_tunnel_attr_list_validate (sai_object_type_t obj_type,
                                               uint32_t attr_count,
                                               const sai_attribute_t *attr_list,
                                               dn_sai_operations_t op_type);

/* Accessor functions for Tunnel API global info */
static inline uint8_t *dn_sai_tunnel_obj_id_bitmap (void)
{
    return (dn_sai_tunnel_access_global_config()->tunnel_obj_id_bitmap);
}

static inline uint8_t *dn_sai_tunnel_term_obj_id_bitmap (void)
{
    return (dn_sai_tunnel_access_global_config()->tunnel_term_id_bitmap);
}

static inline uint8_t *dn_sai_tunnel_map_obj_id_bitmap (void)
{
    return (dn_sai_tunnel_access_global_config()->tunnel_map_id_bitmap);
}

#endif /* _SAI_TUNNEL_API_UTILS_H_ */
