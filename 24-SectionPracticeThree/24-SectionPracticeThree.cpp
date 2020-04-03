/*
综合练习三
*/
#include <iostream>
using namespace std;
int main()
{
	//int i;
	//for (i = 0; i < 5; i++)
	//{
	//	cout << i;
	//}
	//cout << endl;

	//int j;
	//for ( j = 0; j < 11; j+=3)
	//{
	//	cout << j;
	//}


	/*int j = 5;
	while (++j<9)
	{
		cout << j++ << endl;
	}*/

	//特别注意 以下输出的是10而不是11
	//int i = 9;
	//int result = i++ + 1;
	//cout << result << endl;
	////特别注意 以下输出的才是11 这两个例子表示的是自增运算符的优先级
	//int j = 9;
	//int result2 = ++j + 1;
	//cout << result2 << endl;

	//int k = 8;
	//do
	//{
	//	cout << "k:" << k << endl;
	//} while (k++<5);
	//cout << k << endl;
	int i = 1;
	for (;  i<=64; i*=2)
	{
		cout << i << endl;
	}
	//输出两个整数之间所有整数的和
	cout << "请输入第一个数字：";
	int num1;
	cin >> num1;
	cout << "请输入第二个数字：";
	int num2;
	cin >> num2;

	int total = 0;
	for (int  i = num1; i < num2; i++)
	{
		total += i;
	}
	cout << total << endl;
}


