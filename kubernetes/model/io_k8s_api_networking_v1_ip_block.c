#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1_ip_block.h"



io_k8s_api_networking_v1_ip_block_t *io_k8s_api_networking_v1_ip_block_create(
    char *cidr,
    list_t *except
    ) {
    io_k8s_api_networking_v1_ip_block_t *io_k8s_api_networking_v1_ip_block_local_var = malloc(sizeof(io_k8s_api_networking_v1_ip_block_t));
    if (!io_k8s_api_networking_v1_ip_block_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1_ip_block_local_var->cidr = cidr;
    io_k8s_api_networking_v1_ip_block_local_var->except = except;

    return io_k8s_api_networking_v1_ip_block_local_var;
}


void io_k8s_api_networking_v1_ip_block_free(io_k8s_api_networking_v1_ip_block_t *io_k8s_api_networking_v1_ip_block) {
    if(NULL == io_k8s_api_networking_v1_ip_block){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1_ip_block->cidr) {
        free(io_k8s_api_networking_v1_ip_block->cidr);
        io_k8s_api_networking_v1_ip_block->cidr = NULL;
    }
    if (io_k8s_api_networking_v1_ip_block->except) {
        list_ForEach(listEntry, io_k8s_api_networking_v1_ip_block->except) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_networking_v1_ip_block->except);
        io_k8s_api_networking_v1_ip_block->except = NULL;
    }
    free(io_k8s_api_networking_v1_ip_block);
}

cJSON *io_k8s_api_networking_v1_ip_block_convertToJSON(io_k8s_api_networking_v1_ip_block_t *io_k8s_api_networking_v1_ip_block) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1_ip_block->cidr
    if (!io_k8s_api_networking_v1_ip_block->cidr) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "cidr", io_k8s_api_networking_v1_ip_block->cidr) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_networking_v1_ip_block->except
    if(io_k8s_api_networking_v1_ip_block->except) { 
    cJSON *except = cJSON_AddArrayToObject(item, "except");
    if(except == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *exceptListEntry;
    list_ForEach(exceptListEntry, io_k8s_api_networking_v1_ip_block->except) {
    if(cJSON_AddStringToObject(except, "", (char*)exceptListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_networking_v1_ip_block_t *io_k8s_api_networking_v1_ip_block_parseFromJSON(cJSON *io_k8s_api_networking_v1_ip_blockJSON){

    io_k8s_api_networking_v1_ip_block_t *io_k8s_api_networking_v1_ip_block_local_var = NULL;

    // io_k8s_api_networking_v1_ip_block->cidr
    cJSON *cidr = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_ip_blockJSON, "cidr");
    if (!cidr) {
        goto end;
    }

    
    if(!cJSON_IsString(cidr))
    {
    goto end; //String
    }

    // io_k8s_api_networking_v1_ip_block->except
    cJSON *except = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_ip_blockJSON, "except");
    list_t *exceptList;
    if (except) { 
    cJSON *except_local;
    if(!cJSON_IsArray(except)) {
        goto end;//primitive container
    }
    exceptList = list_create();

    cJSON_ArrayForEach(except_local, except)
    {
        if(!cJSON_IsString(except_local))
        {
            goto end;
        }
        list_addElement(exceptList , strdup(except_local->valuestring));
    }
    }


    io_k8s_api_networking_v1_ip_block_local_var = io_k8s_api_networking_v1_ip_block_create (
        strdup(cidr->valuestring),
        except ? exceptList : NULL
        );

    return io_k8s_api_networking_v1_ip_block_local_var;
end:
    return NULL;

}
