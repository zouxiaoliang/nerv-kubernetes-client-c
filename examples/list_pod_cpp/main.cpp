#include <iostream>

#include "pod.h"
#include "k8s.h"

int main()
{
    std::cout << "Hello World!" << std::endl;

    char config_path[] = "/home/zouxiaoliang/.kube/config";

    auto client = nerv::k8s::Client::create(config_path);
    if (nullptr == client)
    {
        std::cout << "can't create a kubernetes client." << std::endl;
        return -1;
    }
    char ns[] = "kubernetes-dashboard";
    auto pods = nerv::k8s::pod::list(client, ns);
    std::cout << ns << " pods: " << std::endl;
    for (const auto& pod: pods)
    {
        std::cout << "    " << pod << std::endl;
    }

    apiClient_unsetupGlobalEnv();

    return 0;
}
