#ifndef io_k8s_api_core_v1_persistent_volume_spec_TEST
#define io_k8s_api_core_v1_persistent_volume_spec_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_persistent_volume_spec_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_persistent_volume_spec.h"
io_k8s_api_core_v1_persistent_volume_spec_t* instantiate_io_k8s_api_core_v1_persistent_volume_spec(int include_optional);

#include "test_io_k8s_api_core_v1_aws_elastic_block_store_volume_source.c"
#include "test_io_k8s_api_core_v1_azure_disk_volume_source.c"
#include "test_io_k8s_api_core_v1_azure_file_persistent_volume_source.c"
#include "test_io_k8s_api_core_v1_ceph_fs_persistent_volume_source.c"
#include "test_io_k8s_api_core_v1_cinder_persistent_volume_source.c"
#include "test_io_k8s_api_core_v1_object_reference.c"
#include "test_io_k8s_api_core_v1_csi_persistent_volume_source.c"
#include "test_io_k8s_api_core_v1_fc_volume_source.c"
#include "test_io_k8s_api_core_v1_flex_persistent_volume_source.c"
#include "test_io_k8s_api_core_v1_flocker_volume_source.c"
#include "test_io_k8s_api_core_v1_gce_persistent_disk_volume_source.c"
#include "test_io_k8s_api_core_v1_glusterfs_persistent_volume_source.c"
#include "test_io_k8s_api_core_v1_host_path_volume_source.c"
#include "test_io_k8s_api_core_v1_iscsi_persistent_volume_source.c"
#include "test_io_k8s_api_core_v1_local_volume_source.c"
#include "test_io_k8s_api_core_v1_nfs_volume_source.c"
#include "test_io_k8s_api_core_v1_volume_node_affinity.c"
#include "test_io_k8s_api_core_v1_photon_persistent_disk_volume_source.c"
#include "test_io_k8s_api_core_v1_portworx_volume_source.c"
#include "test_io_k8s_api_core_v1_quobyte_volume_source.c"
#include "test_io_k8s_api_core_v1_rbd_persistent_volume_source.c"
#include "test_io_k8s_api_core_v1_scale_io_persistent_volume_source.c"
#include "test_io_k8s_api_core_v1_storage_os_persistent_volume_source.c"
#include "test_io_k8s_api_core_v1_vsphere_virtual_disk_volume_source.c"


io_k8s_api_core_v1_persistent_volume_spec_t* instantiate_io_k8s_api_core_v1_persistent_volume_spec(int include_optional) {
  io_k8s_api_core_v1_persistent_volume_spec_t* io_k8s_api_core_v1_persistent_volume_spec = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_persistent_volume_spec = io_k8s_api_core_v1_persistent_volume_spec_create(
      list_create(),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_aws_elastic_block_store_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_azure_disk_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_azure_file_persistent_volume_source(0),
      list_create(),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_ceph_fs_persistent_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_cinder_persistent_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_object_reference(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_csi_persistent_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_fc_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_flex_persistent_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_flocker_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_gce_persistent_disk_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_glusterfs_persistent_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_host_path_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_iscsi_persistent_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_local_volume_source(0),
      list_create(),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_nfs_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_volume_node_affinity(0),
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_photon_persistent_disk_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_portworx_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_quobyte_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_rbd_persistent_volume_source(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_scale_io_persistent_volume_source(0),
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_storage_os_persistent_volume_source(0),
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_vsphere_virtual_disk_volume_source(0)
    );
  } else {
    io_k8s_api_core_v1_persistent_volume_spec = io_k8s_api_core_v1_persistent_volume_spec_create(
      list_create(),
      NULL,
      NULL,
      NULL,
      list_create(),
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
      list_create(),
      NULL,
      NULL,
      "0",
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      "0",
      NULL,
      "0",
      NULL
    );
  }

  return io_k8s_api_core_v1_persistent_volume_spec;
}


#ifdef io_k8s_api_core_v1_persistent_volume_spec_MAIN

void test_io_k8s_api_core_v1_persistent_volume_spec(int include_optional) {
    io_k8s_api_core_v1_persistent_volume_spec_t* io_k8s_api_core_v1_persistent_volume_spec_1 = instantiate_io_k8s_api_core_v1_persistent_volume_spec(include_optional);

	cJSON* jsonio_k8s_api_core_v1_persistent_volume_spec_1 = io_k8s_api_core_v1_persistent_volume_spec_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec_1);
	printf("io_k8s_api_core_v1_persistent_volume_spec :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_persistent_volume_spec_1));
	io_k8s_api_core_v1_persistent_volume_spec_t* io_k8s_api_core_v1_persistent_volume_spec_2 = io_k8s_api_core_v1_persistent_volume_spec_parseFromJSON(jsonio_k8s_api_core_v1_persistent_volume_spec_1);
	cJSON* jsonio_k8s_api_core_v1_persistent_volume_spec_2 = io_k8s_api_core_v1_persistent_volume_spec_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec_2);
	printf("repeating io_k8s_api_core_v1_persistent_volume_spec:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_persistent_volume_spec_2));
}

int main() {
  test_io_k8s_api_core_v1_persistent_volume_spec(1);
  test_io_k8s_api_core_v1_persistent_volume_spec(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_persistent_volume_spec_MAIN
#endif // io_k8s_api_core_v1_persistent_volume_spec_TEST
