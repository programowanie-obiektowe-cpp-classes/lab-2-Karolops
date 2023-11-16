#pragma once

#include "Resource.hpp"

class ResourceManager
{
        Resource* resource;

    public:
    // konstruktor
    ResourceManager(){   
        resource = new Resource{};
    }
    // destruktor
    ~ResourceManager(){    
        delete resource;
    }

    ResourceManager(const ResourceManager& resource1){
        resource = new Resource{};
        *resource = *resource1.resource;
    }

    ResourceManager& operator=(const ResourceManager& resource2){
        delete this->resource;
        resource = new Resource{};
        *resource = *resource2.resource;
        return *this;
    }
    double get() 
    { 
        return resource->get(); 
    }
};
