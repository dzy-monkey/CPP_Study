/*
整型(基本类型)
*/
#include <iostream>
#include <climits>
using namespace std;
int main()
{
	//取值范围 -32768到32767之间  2字节
	short a = 3;
	//不包含负数的，无符号的，取值范围变大了一倍但是只能是正的
	unsigned short e = 3;
	//取值范围-2147483648到2147483647之间  4字节
	int b = 100; 
	//取值范围-2147483648到2147483647之间 4字节
	long c = 900;
	//这个基本用不上 -9223372036854775808到9223372036854775807之间 8字节
	long long d = 100;
	

	cout << SHRT_MAX << endl;
	cout << SHRT_MIN << endl;
	cout << INT_MAX << endl;
	cout << INT_MIN << endl;
	cout << LONG_MAX << endl;
	cout << LONG_MIN << endl;
	cout << LLONG_MAX << endl;
	cout << LLONG_MIN << endl;
}
