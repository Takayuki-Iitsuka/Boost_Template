// Boost_Template.cpp

#include <iostream>
#include "BoostVerDisp.h"
#include <cmath>
#include <boost/format.hpp>

using namespace std;

//#define MY_PI = 3.141592653589793238462643;
constexpr auto MY_PI = 3.141592653589793238462643;

int main(int argc, char* argv[])
{
	cout << "Hello World!\n";
	cout << "Boost Template..........!\n" << endl;
	Get_BoostVerDisp();

	float val_rad, val_sin, val_cos;
	cout << "\ndeg,rad,sin,cos\n";
	for (int i = 0; i <= 360; i += 30)
	{
		val_rad = (float)i * MY_PI / 180.0f;
		val_sin = sin(val_rad);
		val_cos = cos(val_rad);
		cout << i << "," << val_rad << ","
			<< val_sin << "," << val_cos << endl;
	}

#ifdef _DEBUG
	//system("pause");
	system("PAUSE");
	//char hoge = getchar();
#endif

	return EXIT_SUCCESS; //EXIT_SUCCESS 0 : EXIT_FAILURE 1
}

// End
