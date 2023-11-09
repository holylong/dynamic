#ifndef _DYNAMIC_OUTTER_H_
#define _DYNAMIC_OUTTER_H_

#include <iostream>


#ifdef _WIN32
#if !defined(__PRETTY_FUNCTION__)
#define __PRETTY_FUNCTION__ __FUNCSIG__
#endif
#endif

namespace dymi{
    class DynamicOutter{
        public:
            DynamicOutter(){
                std::cout << __PRETTY_FUNCTION__ << std::endl;
            }

            void Display();
    }; 
}

#endif //_DYNAMIC_OUTTER_H_