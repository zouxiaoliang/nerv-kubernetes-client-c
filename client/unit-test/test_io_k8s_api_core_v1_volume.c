#ifndef io_k8s_api_core_v1_volume_TEST
#define io_k8s_api_core_v1_volume_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_volume_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_volume.h"
io_k8s_api_core_v1_volume_t* instantiate_io_k8s_api_core_v1_volume(int include_optional);

#include "test_io_k8s_api_core_v1_aws_elastic_block_store_volume_source.c"
#include "test_io_k8s_api_core_v1_azure_disk_volume_source.c"
#include "test_io_k8s_api_core_v1_azure_file_volume_source.c"
#include "test_io_k8s_api_core_v1_ceph_fs_volume_source.c"
#include "test_io_k8s_api_core_v1_cinder_volume_source.c"
#include "test_io_k8s_api_core_v1_config_map_volume_source.c"
#include "test_io_k8s_api_core_v1_csi_volume_source.c"
#include "test_io_k8s_api_core_v1_downward_api_volume_source.c"
#include "test_io_k8s_api_core_v1_empty_dir_volume_source.c"
#include "test_io_k8s_api_core_v1_ephemeral_volume_source.c"
#include "test_io_k8s_api_core_v1_fc_volume_source.c"
#include "test_io_k8s_api_core_v1_flex_volume_source.c"
#include "test_io_k8s_api_core_v1_flocker_volume_source.c"
#include "test_io_k8s_api_core_v1_gce_persistent_disk_volume_source.c"
#include "test_io_k8s_api_core_v1_git_repo_volume_source.c"
#include "test_io_k8s_api_core_v1_glusterfs_volume_source.c"
#include "test_io_k8s_api_core_v1_host_path_volume_source.c"
#include "test_io_k8s_api_core_v1_iscsi_volume_source.c"
#include "test_io_k8s_api_core_v1_nfs_volume_source.c"
#include "test_io_k8s_api_core_v1_persistent_volume_claim_volume_source.c"
#include "test_io_k8s_api_core_v1_photon_persistent_disk_volume_source.c"
#include "test_io_k8s_api_core_v1_portworx_volume_source.c"
#include "test_io_k8s_api_core_v1_projected_volume_source.c"
#include "test_io_k8s_api_core_v1_quobyte_volume_source.c"
#include "test_io_k8s_api_core_v1_rbd_volume_source.c"
#include "test_io_k8s_api_core_v1_scale_io_volume_source.c"
#include "test_io_k8s_api_core_v1_secret_volume_source.c"
#include "test_io_k8s_api_core_v1_storage_os_volume_source.c"
#include "test_io_k8s_api_core_v1_vsphere_virtual_disk_volume_source.c"


io_k8s_api_core_v1_volume_t* instantiate_io_k8s_api_core_v1_volume(int include_optional) {
  io_k8s_api_core_v1_volume_t* io_k8s_api_core_v1_volume = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_volume = io_k8s_api_core_v1_volume_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_aws_elastic_block_store_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_azure_disk_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_azure_file_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_ceph_fs_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_cinder_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_config_map_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_csi_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_downward_api_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_empty_dir_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_ephemeral_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_fc_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_flex_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_flocker_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_gce_persistent_disk_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_git_repo_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_glusterfs_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_host_path_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_iscsi_volume_source(0),
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_nfs_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_persistent_volume_claim_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_photon_persistent_disk_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_portworx_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_projected_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_quobyte_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_rbd_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_scale_io_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_secret_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_storage_os_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_vsphere_virtual_disk_volume_source(0)
    );
  } else {
    io_k8s_api_core_v1_volume = io_k8s_api_core_v1_volume_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      "0",
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return io_k8s_api_core_v1_volume;
}


#ifdef io_k8s_api_core_v1_volume_MAIN

void test_io_k8s_api_core_v1_volume(int include_optional) {
    io_k8s_api_core_v1_volume_t* io_k8s_api_core_v1_volume_1 = instantiate_io_k8s_api_core_v1_volume(include_optional);

	cJSON* jsonio_k8s_api_core_v1_volume_1 = io_k8s_api_core_v1_volume_convertToJSON(io_k8s_api_core_v1_volume_1);
	printf("io_k8s_api_core_v1_volume :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_volume_1));
	io_k8s_api_core_v1_volume_t* io_k8s_api_core_v1_volume_2 = io_k8s_api_core_v1_volume_parseFromJSON(jsonio_k8s_api_core_v1_volume_1);
	cJSON* jsonio_k8s_api_core_v1_volume_2 = io_k8s_api_core_v1_volume_convertToJSON(io_k8s_api_core_v1_volume_2);
	printf("repeating io_k8s_api_core_v1_volume:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_volume_2));
}

int main() {
  test_io_k8s_api_core_v1_volume(1);
  test_io_k8s_api_core_v1_volume(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_volume_MAIN
#endif // io_k8s_api_core_v1_volume_TEST
