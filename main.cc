#include <iostream>
#include <anotherpp.hh>

#ifdef _WIN32
#if !defined(__PRETTY_FUNCTION__)
#define __PRETTY_FUNCTION__ __FUNCSIG__
#endif
#endif

using namespace dym;


class StaticInner{
	public:
		StaticInner(){
			std::cout << __PRETTY_FUNCTION__ << std::endl;
		}
};

StaticInner inner;

int main(int argc, char* argv[])
{
	// dlib.Display();
	// dym::DynamicLib dli;
	// dli.Display();

	dym::UweMe ume;
	ume.Display();

	std::cout << __PRETTY_FUNCTION__ << std::endl;
	return 0;
}
