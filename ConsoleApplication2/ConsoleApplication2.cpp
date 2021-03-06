// ConsoleApplication2.cpp : Small macro for converting frequency in wavelength and vice versa.
//

#include "stdafx.h"

#include <iostream>
#include <cmath>


using namespace std;

double c = 299792458; // m/s
float f;
float l;


int main()
{
	cout << "Write the frequency [GHz], else type -1." << endl;
	cin >> f;

	if (f>0) {
		f = f * 1000000000; // f in Hz
		l = c / f;
		l = l * 1000000000; // l in nm

		cout << "The wavelength is " << l << " nm." << endl;
	}

	if (f<0) {
		cout << "Write the wavelength [nm]." << endl;
		cin >> l;
		l = l / 1000000000; // l in m
		f = c / l;
		f = f / 1000000000; // f in GHz

		cout << "The frequency is " << f << " GHz." << endl;
	}

	system("PAUSE");
	return 0;
}