#include "dynamiclib.hh"
#include "anotherpp.hh"

namespace dym{
    
    void DynamicLib::Display()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    AnotherPP dlib;
}