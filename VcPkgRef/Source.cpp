
#if 1
#include <boost/version.hpp>
#else
#define BOOST_VERSION 176
#endif

int Foo()
{
	return BOOST_VERSION;
}
