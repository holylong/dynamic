#ifndef _DYNAMIC_LIB_H_
#define _DYNAMIC_LIB_H_

#include <iostream>
#include "anotherpp.hh"

#ifdef _WIN32
#if !defined(__PRETTY_FUNCTION__)
#define __PRETTY_FUNCTION__ __FUNCSIG__
#endif
#endif

namespace dym{
    class KUIPER_DLL DynamicLib{
        public:
            DynamicLib(){
                std::cout << __PRETTY_FUNCTION__ << std::endl;
            }

            void Display();
    };
}

#endif //_DYNAMIC_LIB_H_