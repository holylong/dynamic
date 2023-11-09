#ifndef _ANOTHER_PP_H_
#define _ANOTHER_PP_H_

#include <iostream>

#ifdef _WIN32
#ifdef BUILD_DLL
#define KUIPER_DLL __declspec(dllexport)
#else
#define KUIPER_DLL __declspec(dllimport)
#endif
#else
#define KUIPER_DLL
#endif

namespace dym {

    class KUIPER_DLL UweMe{
        public:
            UweMe(){
                std::cout << __FUNCTION__ << std::endl;
            }

            void Display();

            friend class AnotherPP;
    };

    class KUIPER_DLL AnotherPP{
        public:
            AnotherPP(){
                std::cout << __FUNCTION__ << std::endl;
            }
    };
}

#endif //_ANOTHER_PP_H_