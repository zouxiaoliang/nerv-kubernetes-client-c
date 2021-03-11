#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_exec_action.h"



io_k8s_api_core_v1_exec_action_t *io_k8s_api_core_v1_exec_action_create(
    list_t *command
    ) {
    io_k8s_api_core_v1_exec_action_t *io_k8s_api_core_v1_exec_action_local_var = malloc(sizeof(io_k8s_api_core_v1_exec_action_t));
    if (!io_k8s_api_core_v1_exec_action_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_exec_action_local_var->command = command;

    return io_k8s_api_core_v1_exec_action_local_var;
}


void io_k8s_api_core_v1_exec_action_free(io_k8s_api_core_v1_exec_action_t *io_k8s_api_core_v1_exec_action) {
    if(NULL == io_k8s_api_core_v1_exec_action){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_exec_action->command) {
        list_ForEach(listEntry, io_k8s_api_core_v1_exec_action->command) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_exec_action->command);
        io_k8s_api_core_v1_exec_action->command = NULL;
    }
    free(io_k8s_api_core_v1_exec_action);
}

cJSON *io_k8s_api_core_v1_exec_action_convertToJSON(io_k8s_api_core_v1_exec_action_t *io_k8s_api_core_v1_exec_action) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_exec_action->command
    if(io_k8s_api_core_v1_exec_action->command) { 
    cJSON *command = cJSON_AddArrayToObject(item, "command");
    if(command == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *commandListEntry;
    list_ForEach(commandListEntry, io_k8s_api_core_v1_exec_action->command) {
    if(cJSON_AddStringToObject(command, "", (char*)commandListEntry->data) == NULL)
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

io_k8s_api_core_v1_exec_action_t *io_k8s_api_core_v1_exec_action_parseFromJSON(cJSON *io_k8s_api_core_v1_exec_actionJSON){

    io_k8s_api_core_v1_exec_action_t *io_k8s_api_core_v1_exec_action_local_var = NULL;

    // io_k8s_api_core_v1_exec_action->command
    cJSON *command = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_exec_actionJSON, "command");
    list_t *commandList;
    if (command) { 
    cJSON *command_local;
    if(!cJSON_IsArray(command)) {
        goto end;//primitive container
    }
    commandList = list_create();

    cJSON_ArrayForEach(command_local, command)
    {
        if(!cJSON_IsString(command_local))
        {
            goto end;
        }
        list_addElement(commandList , strdup(command_local->valuestring));
    }
    }


    io_k8s_api_core_v1_exec_action_local_var = io_k8s_api_core_v1_exec_action_create (
        command ? commandList : NULL
        );

    return io_k8s_api_core_v1_exec_action_local_var;
end:
    return NULL;

}
