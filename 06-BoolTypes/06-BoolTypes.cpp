/*
布尔类型
*/
#include <iostream>
using namespace std;

int main()
{
	//常用于逻辑判断
	bool a = true; //真、存在的、非零、1
	bool b = false;//假的、不存在、零、0
	
	//正常输出a为1
	cout << a << endl;
	//赋值一个100,但是类型没有变化，所以输出的是1
	//只要是真、存在的、非零的输出的结果都是1
	//假的、不存在、零、0输出的结果都是0
	a = -100;
	b = 0;
	cout << a << endl;
	cout << b << endl;
}

