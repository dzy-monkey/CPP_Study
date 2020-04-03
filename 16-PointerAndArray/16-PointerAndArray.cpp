/*
数组和指针
*/
#include <iostream>
using namespace std;
int main()
{
	//在C++中数组其实是一个指针
	//int a[]{ 3,2,3,4,1231,5213,5123 };

	//cout << a << endl;
	//cout << *a << endl;
	//cout << *(a + 1) << endl; //地址加一 可以取出数组中的第二个源素以此类推
	//*(a + 1) = 1000;
	//cout << a[1] << endl;

	int* p = new int[20]; //申请一块内存空间
	p[0] = 90;
	cout << p[0] << endl;

	delete[] p; //删除一个数组指针
}

