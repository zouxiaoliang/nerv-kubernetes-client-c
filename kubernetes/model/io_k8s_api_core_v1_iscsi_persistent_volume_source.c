#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_iscsi_persistent_volume_source.h"



io_k8s_api_core_v1_iscsi_persistent_volume_source_t *io_k8s_api_core_v1_iscsi_persistent_volume_source_create(
    int chap_auth_discovery,
    int chap_auth_session,
    char *fs_type,
    char *initiator_name,
    char *iqn,
    char *iscsi_interface,
    int lun,
    list_t *portals,
    int read_only,
    io_k8s_api_core_v1_secret_reference_t *secret_ref,
    char *target_portal
    ) {
    io_k8s_api_core_v1_iscsi_persistent_volume_source_t *io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_iscsi_persistent_volume_source_t));
    if (!io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var->chap_auth_discovery = chap_auth_discovery;
    io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var->chap_auth_session = chap_auth_session;
    io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var->fs_type = fs_type;
    io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var->initiator_name = initiator_name;
    io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var->iqn = iqn;
    io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var->iscsi_interface = iscsi_interface;
    io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var->lun = lun;
    io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var->portals = portals;
    io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var->read_only = read_only;
    io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var->secret_ref = secret_ref;
    io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var->target_portal = target_portal;

    return io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var;
}


void io_k8s_api_core_v1_iscsi_persistent_volume_source_free(io_k8s_api_core_v1_iscsi_persistent_volume_source_t *io_k8s_api_core_v1_iscsi_persistent_volume_source) {
    if(NULL == io_k8s_api_core_v1_iscsi_persistent_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_iscsi_persistent_volume_source->fs_type) {
        free(io_k8s_api_core_v1_iscsi_persistent_volume_source->fs_type);
        io_k8s_api_core_v1_iscsi_persistent_volume_source->fs_type = NULL;
    }
    if (io_k8s_api_core_v1_iscsi_persistent_volume_source->initiator_name) {
        free(io_k8s_api_core_v1_iscsi_persistent_volume_source->initiator_name);
        io_k8s_api_core_v1_iscsi_persistent_volume_source->initiator_name = NULL;
    }
    if (io_k8s_api_core_v1_iscsi_persistent_volume_source->iqn) {
        free(io_k8s_api_core_v1_iscsi_persistent_volume_source->iqn);
        io_k8s_api_core_v1_iscsi_persistent_volume_source->iqn = NULL;
    }
    if (io_k8s_api_core_v1_iscsi_persistent_volume_source->iscsi_interface) {
        free(io_k8s_api_core_v1_iscsi_persistent_volume_source->iscsi_interface);
        io_k8s_api_core_v1_iscsi_persistent_volume_source->iscsi_interface = NULL;
    }
    if (io_k8s_api_core_v1_iscsi_persistent_volume_source->portals) {
        list_ForEach(listEntry, io_k8s_api_core_v1_iscsi_persistent_volume_source->portals) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_iscsi_persistent_volume_source->portals);
        io_k8s_api_core_v1_iscsi_persistent_volume_source->portals = NULL;
    }
    if (io_k8s_api_core_v1_iscsi_persistent_volume_source->secret_ref) {
        io_k8s_api_core_v1_secret_reference_free(io_k8s_api_core_v1_iscsi_persistent_volume_source->secret_ref);
        io_k8s_api_core_v1_iscsi_persistent_volume_source->secret_ref = NULL;
    }
    if (io_k8s_api_core_v1_iscsi_persistent_volume_source->target_portal) {
        free(io_k8s_api_core_v1_iscsi_persistent_volume_source->target_portal);
        io_k8s_api_core_v1_iscsi_persistent_volume_source->target_portal = NULL;
    }
    free(io_k8s_api_core_v1_iscsi_persistent_volume_source);
}

cJSON *io_k8s_api_core_v1_iscsi_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_iscsi_persistent_volume_source_t *io_k8s_api_core_v1_iscsi_persistent_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_iscsi_persistent_volume_source->chap_auth_discovery
    if(io_k8s_api_core_v1_iscsi_persistent_volume_source->chap_auth_discovery) { 
    if(cJSON_AddBoolToObject(item, "chapAuthDiscovery", io_k8s_api_core_v1_iscsi_persistent_volume_source->chap_auth_discovery) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_iscsi_persistent_volume_source->chap_auth_session
    if(io_k8s_api_core_v1_iscsi_persistent_volume_source->chap_auth_session) { 
    if(cJSON_AddBoolToObject(item, "chapAuthSession", io_k8s_api_core_v1_iscsi_persistent_volume_source->chap_auth_session) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_iscsi_persistent_volume_source->fs_type
    if(io_k8s_api_core_v1_iscsi_persistent_volume_source->fs_type) { 
    if(cJSON_AddStringToObject(item, "fsType", io_k8s_api_core_v1_iscsi_persistent_volume_source->fs_type) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_iscsi_persistent_volume_source->initiator_name
    if(io_k8s_api_core_v1_iscsi_persistent_volume_source->initiator_name) { 
    if(cJSON_AddStringToObject(item, "initiatorName", io_k8s_api_core_v1_iscsi_persistent_volume_source->initiator_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_iscsi_persistent_volume_source->iqn
    if (!io_k8s_api_core_v1_iscsi_persistent_volume_source->iqn) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "iqn", io_k8s_api_core_v1_iscsi_persistent_volume_source->iqn) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_iscsi_persistent_volume_source->iscsi_interface
    if(io_k8s_api_core_v1_iscsi_persistent_volume_source->iscsi_interface) { 
    if(cJSON_AddStringToObject(item, "iscsiInterface", io_k8s_api_core_v1_iscsi_persistent_volume_source->iscsi_interface) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_iscsi_persistent_volume_source->lun
    if (!io_k8s_api_core_v1_iscsi_persistent_volume_source->lun) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "lun", io_k8s_api_core_v1_iscsi_persistent_volume_source->lun) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_core_v1_iscsi_persistent_volume_source->portals
    if(io_k8s_api_core_v1_iscsi_persistent_volume_source->portals) { 
    cJSON *portals = cJSON_AddArrayToObject(item, "portals");
    if(portals == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *portalsListEntry;
    list_ForEach(portalsListEntry, io_k8s_api_core_v1_iscsi_persistent_volume_source->portals) {
    if(cJSON_AddStringToObject(portals, "", (char*)portalsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_iscsi_persistent_volume_source->read_only
    if(io_k8s_api_core_v1_iscsi_persistent_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_iscsi_persistent_volume_source->read_only) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_iscsi_persistent_volume_source->secret_ref
    if(io_k8s_api_core_v1_iscsi_persistent_volume_source->secret_ref) { 
    cJSON *secret_ref_local_JSON = io_k8s_api_core_v1_secret_reference_convertToJSON(io_k8s_api_core_v1_iscsi_persistent_volume_source->secret_ref);
    if(secret_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "secretRef", secret_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_iscsi_persistent_volume_source->target_portal
    if (!io_k8s_api_core_v1_iscsi_persistent_volume_source->target_portal) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "targetPortal", io_k8s_api_core_v1_iscsi_persistent_volume_source->target_portal) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_iscsi_persistent_volume_source_t *io_k8s_api_core_v1_iscsi_persistent_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_iscsi_persistent_volume_sourceJSON){

    io_k8s_api_core_v1_iscsi_persistent_volume_source_t *io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_iscsi_persistent_volume_source->chap_auth_discovery
    cJSON *chap_auth_discovery = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_iscsi_persistent_volume_sourceJSON, "chapAuthDiscovery");
    if (chap_auth_discovery) { 
    if(!cJSON_IsBool(chap_auth_discovery))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_iscsi_persistent_volume_source->chap_auth_session
    cJSON *chap_auth_session = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_iscsi_persistent_volume_sourceJSON, "chapAuthSession");
    if (chap_auth_session) { 
    if(!cJSON_IsBool(chap_auth_session))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_iscsi_persistent_volume_source->fs_type
    cJSON *fs_type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_iscsi_persistent_volume_sourceJSON, "fsType");
    if (fs_type) { 
    if(!cJSON_IsString(fs_type))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_iscsi_persistent_volume_source->initiator_name
    cJSON *initiator_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_iscsi_persistent_volume_sourceJSON, "initiatorName");
    if (initiator_name) { 
    if(!cJSON_IsString(initiator_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_iscsi_persistent_volume_source->iqn
    cJSON *iqn = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_iscsi_persistent_volume_sourceJSON, "iqn");
    if (!iqn) {
        goto end;
    }

    
    if(!cJSON_IsString(iqn))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_iscsi_persistent_volume_source->iscsi_interface
    cJSON *iscsi_interface = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_iscsi_persistent_volume_sourceJSON, "iscsiInterface");
    if (iscsi_interface) { 
    if(!cJSON_IsString(iscsi_interface))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_iscsi_persistent_volume_source->lun
    cJSON *lun = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_iscsi_persistent_volume_sourceJSON, "lun");
    if (!lun) {
        goto end;
    }

    
    if(!cJSON_IsNumber(lun))
    {
    goto end; //Numeric
    }

    // io_k8s_api_core_v1_iscsi_persistent_volume_source->portals
    cJSON *portals = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_iscsi_persistent_volume_sourceJSON, "portals");
    list_t *portalsList;
    if (portals) { 
    cJSON *portals_local;
    if(!cJSON_IsArray(portals)) {
        goto end;//primitive container
    }
    portalsList = list_create();

    cJSON_ArrayForEach(portals_local, portals)
    {
        if(!cJSON_IsString(portals_local))
        {
            goto end;
        }
        list_addElement(portalsList , strdup(portals_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_iscsi_persistent_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_iscsi_persistent_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_iscsi_persistent_volume_source->secret_ref
    cJSON *secret_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_iscsi_persistent_volume_sourceJSON, "secretRef");
    io_k8s_api_core_v1_secret_reference_t *secret_ref_local_nonprim = NULL;
    if (secret_ref) { 
    secret_ref_local_nonprim = io_k8s_api_core_v1_secret_reference_parseFromJSON(secret_ref); //nonprimitive
    }

    // io_k8s_api_core_v1_iscsi_persistent_volume_source->target_portal
    cJSON *target_portal = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_iscsi_persistent_volume_sourceJSON, "targetPortal");
    if (!target_portal) {
        goto end;
    }

    
    if(!cJSON_IsString(target_portal))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var = io_k8s_api_core_v1_iscsi_persistent_volume_source_create (
        chap_auth_discovery ? chap_auth_discovery->valueint : 0,
        chap_auth_session ? chap_auth_session->valueint : 0,
        fs_type ? strdup(fs_type->valuestring) : NULL,
        initiator_name ? strdup(initiator_name->valuestring) : NULL,
        strdup(iqn->valuestring),
        iscsi_interface ? strdup(iscsi_interface->valuestring) : NULL,
        lun->valuedouble,
        portals ? portalsList : NULL,
        read_only ? read_only->valueint : 0,
        secret_ref ? secret_ref_local_nonprim : NULL,
        strdup(target_portal->valuestring)
        );

    return io_k8s_api_core_v1_iscsi_persistent_volume_source_local_var;
end:
    if (secret_ref_local_nonprim) {
        io_k8s_api_core_v1_secret_reference_free(secret_ref_local_nonprim);
        secret_ref_local_nonprim = NULL;
    }
    return NULL;

}
