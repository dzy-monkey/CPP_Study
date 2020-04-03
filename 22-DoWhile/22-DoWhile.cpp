/*
do while 循环
*/
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	//do{循环体} while (判断);  dowhile循环至少执行一次
	int i = 100;
	do
	{
		cout << "输出Dzy" << endl;
	} while (i>100);

	//遍历数组
	int scores[] = { 1,2,3,4 };
	for (int i = 0; i <= 3; i++)
	{
		cout << scores[i] << endl;
	}

	//C++11的新特性，这个只能循环遍历里面的值，但是无法修改里面的值
	for (int temp:scores)
	{
		cout << temp << endl;
	}
	//foreach循环遍历
	for_each(scores, scores + 4, [](int& v) {cout << v << endl; });
	 
}

