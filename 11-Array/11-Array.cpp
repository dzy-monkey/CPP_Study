/*
数组(复合类型)
*/
#include <iostream>
#include <array>

template<class T>
int length(T& arr) {
	return sizeof(arr) / sizeof(arr[0]);
}

int main()
{
	using namespace std;
	/*char cArray[10];
	bool bArray[90];
	float fArray[32];
	double dArray[90];*/
# pragma region 数组的初始化方式一
	//初始化的方式一：当初始化给的元素少于数组的大小时，后面的内存空间将由0补全
	//当给的值超出了数组大小的时候是不允许的，会报错
	//int scoreArray1[5] = { 34,3,234,45,55 };
	//int scoreArray2[5] = { 34,3 };
	////动态的创建数组空间
	//int scoreArray3[] = { 132,456,465,8,564,89,5644 };
	/*int scoreArray4[4];
	scoreArray4[4] = { 1,2,3,4 };
	scoreArray2=scoreArray1;初始化后不可以改变名字
	*/ //error
#pragma endregion

#pragma region 数组的初始化方式二
	//初始化方式二：可以省略=号
	//int scoreArray5[]{ 1,2,3,4 };

	////索引的开始值是0
	////☆千万不要访问一个不存在的索引，在C++中不会报错，并且会给你一个混乱的数据
	//cout << scoreArray5[2] << endl;
	//scoreArray5[2] = 100;
	//cout << scoreArray5[2] << endl;
	//cout << length(scoreArray5) << endl;
#pragma endregion

#pragma region 数组的初始化方式三☆
	//旧方法初始化 数组无法赋值，这种新的方法可以
	array<int, 7> a1 = { 2,21,3,12,12,3,1 };
	array<int, 7> a2;

	a2 = a1;
	cout << a1[4] << " " << a2[4] << endl;
	cout << a1[6] << " " << a2[6] << endl;
#pragma endregion

}

