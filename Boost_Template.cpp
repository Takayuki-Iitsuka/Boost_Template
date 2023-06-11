// Boost_Template.cpp

#include <iostream>
#include "BoostVerDisp.h"
#include <cmath>
#include <boost/format.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int_distribution.hpp>

using namespace std;

//#define MY_PI = 3.141592653589793238462643;
constexpr auto MY_PI = 3.141592653589793238462643; // C++11

int main(int argc, char* argv[])
{
	cout << "Hello World!\n";
	cout << "Boost Template..........!\n" << endl;
	Get_BoostVerDisp();

	boost::random::mt19937 gen;
	for (int i = 0; i < 30; i++)
	{
		boost::random::uniform_int_distribution<> dist(0, 2147483647);
		cout << i << " : " << dist(gen) << " , ";
	}
	cout << "\n" << endl;

	float val_rad, val_sin, val_cos;
	cout << "\n deg , rad , sin , cos , b_sin , b_cos\n";
	for (int i = 0; i <= 360; i += 30)
	{
		val_rad = (float)i * MY_PI / 180.0f;
		val_sin = std::sin(val_rad);
		val_cos = std::cos(val_rad);

		cout << boost::format("%|4| ") % i
			<< boost::format(", %.3f ") % val_rad
			<< boost::format(", %9.6f ") % val_sin
			<< boost::format(", %9.6f") % val_cos
			<< endl;
	}

#ifdef _DEBUG
	//system("pause");
	system("PAUSE");
	//char hoge = getchar();
#endif

	return EXIT_SUCCESS; //EXIT_SUCCESS 0 : EXIT_FAILURE 1
}

// End
