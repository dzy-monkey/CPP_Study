/*
算数运算符
运算符的计算顺序，要通过()来区分计算的优先级
*/
#include <iostream>
using namespace std;

int main()
{
#pragma region 整型的加减乘除运算
	//+ - * /
	/*
	int a;
	cout << "请输入第一个数字" << endl;
	cin >> a;
	cout << "你输入的第一个数字是：" << a << endl;
	int b;
	cout << "请输入第二个数字" << endl;
	cin >> b;
	cout << "你输入的第二个数字是：" << b << endl;
	int res1;
	int res2;
	int res3;
	int res4;

	res1 = a + b;
	res2 = a - b;
	res3 = a * b;
	res4 = a / b;

	cout << "两个数字的和是：" << res1 << endl;
	cout << "两个数字的差是：" << res2 << endl;
	cout << "两个数字的积是：" << res3 << endl;
	cout << "两个数字的商是：" << res4 << endl;
	*/
#pragma endregion

#pragma region 浮点型的加减乘除运算
	//具体得到结果和接收的变量类型有关，如果是用整型去接收，那么输出的值就会是一个整型的
	/*float a;
	cout << "请输入第一个数字" << endl;
	cin >> a;
	cout << "你输入的第一个数字是：" << a << endl;
	float b;
	cout << "请输入第二个数字" << endl;
	cin >> b;
	cout << "你输入的第二个数字是：" << b << endl;
	float res1;
	float res2;
	float res3;
	float res4;

	res1 = a + b;
	res2 = a - b;
	res3 = a * b;
	res4 = a / b;

	cout << "两个数字的和是：" << res1 << endl;
	cout << "两个数字的差是：" << res2 << endl;
	cout << "两个数字的积是：" << res3 << endl;
	cout << "两个数字的商是：" << res4 << endl;*/
#pragma endregion

#pragma region 求余运算
	float res1 = 13 % 5;

	cout << "求模运算的结果是：" << res1 << endl;
#pragma endregion

}

