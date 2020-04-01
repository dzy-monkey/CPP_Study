/*
浮点类型(基本类型)
*/
#include <iostream>
#include <limits>
using  namespace std;

int main()
{
	//e表示法 3.4e-9 表示3.4的负九次方  3.4e9 表示3.4的九次方
	float a = 12.5;
	double b = 24.3;
	long double c = 3.4e-9;

	cout << FLT_MAX << endl;
	cout << FLT_MIN << endl;
	

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
