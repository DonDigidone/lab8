#include <iostream>
#include "math.h"
#include "Header.h"

using namespace std;

Complex y(Complex& z)
{
	Complex i(0, 1);
	Complex res = pow(z,3)+(i*2+1)*pow(z,2)+(-(i*2)+1)*pow(z,i*(-5));
	return res;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	Complex a, res;
	cout << "¬ведите действительную и мнимую часть комплексного числа" << endl;
	cin >> a;
	res = y(a);
	cout << res;
}