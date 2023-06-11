//
#include <iostream>
#include <boost/version.hpp>

void Get_BoostVerDisp(void)
{
	std::cout << "Boost version : " << BOOST_VERSION << std::endl;
	std::cout << "Boost lib version : " << BOOST_LIB_VERSION << std::endl;

	std::cout
		<< BOOST_VERSION / 100000 << "."		 // major version
		<< BOOST_VERSION / 100 % 1000 << "."	 // minor version
		<< BOOST_VERSION % 100					 // patch level
		<< std::endl;

	//std::cout << "Boost MSSTL version : " << BOOST_MSSTL_VERSION << std::endl;
	//std::cout << "Boost CXX version : " << BOOST_CXX_VERSION << std::endl;

}
// End
