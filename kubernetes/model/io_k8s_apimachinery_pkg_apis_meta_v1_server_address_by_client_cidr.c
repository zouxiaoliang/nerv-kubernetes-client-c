#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr.h"



io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_create(
    char *client_cidr,
    char *server_address
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_local_var->client_cidr = client_cidr;
    io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_local_var->server_address = server_address;

    return io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_free(io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->client_cidr) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->client_cidr);
        io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->client_cidr = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->server_address) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->server_address);
        io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->server_address = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->client_cidr
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->client_cidr) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "clientCIDR", io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->client_cidr) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->server_address
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->server_address) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "serverAddress", io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->server_address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidrJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->client_cidr
    cJSON *client_cidr = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidrJSON, "clientCIDR");
    if (!client_cidr) {
        goto end;
    }

    
    if(!cJSON_IsString(client_cidr))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr->server_address
    cJSON *server_address = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidrJSON, "serverAddress");
    if (!server_address) {
        goto end;
    }

    
    if(!cJSON_IsString(server_address))
    {
    goto end; //String
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_create (
        strdup(client_cidr->valuestring),
        strdup(server_address->valuestring)
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_local_var;
end:
    return NULL;

}
