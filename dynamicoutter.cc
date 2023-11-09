#include <iostream>

#include "dynamicoutter.hh"

namespace dymi{

    void DynamicOutter::Display(){
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    DynamicOutter outter;
}