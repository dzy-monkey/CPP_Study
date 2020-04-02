/*
指针
☆ 指针必须要初始化
*/
#include <iostream>
using namespace std;

int main()
{
#pragma region 指针的基础知识
	//int a = 10;
	//float b = 9.7f;

	//// & 取得变量内存地址
	//cout << &a << endl;
	//cout << &b << endl;
	//// * 取得内存地址中存储的数据
	//cout << *(&a) << endl;
	//cout << a << endl;
	////定义指针
	//int* pa=&a; 
	//float* pb = &b;
	//cout << pa << endl;
	//cout << pb << endl;
	//cout << *pa << endl;
	//cout << *pb << endl;
#pragma endregion

#pragma region 指针的常用操作
	int a = 10;
	float b = 9.7f;
	int c = 20;
	int* pa = &a;
	float* pb = &b;
	int* p;
	p = pa;

	cout << *p << endl;
	cout << *pa << endl;
	*p = 100;
	cout << a <<" "<< *p << endl;
	*pa = 200;
	cout << a << " "<<*p << " " << *pa << endl;
#pragma endregion




}

