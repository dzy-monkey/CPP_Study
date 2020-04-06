/*
综合编程练习
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

	/*char ch;
	cin >> ch;
	int a = 0, b = 0, c = 0, d = 0;
	switch (ch)
	{
	case 'A':
		a++;
		break;
	case 'B':
		b++;
		break;
	case 'C':
		c++;
		break;
	case 'D':
		d++;
		break;
	default:
		break;
	}
	cout << a << " "<< b << " " << c << " " << d << " " << endl;*/

	//阶乘
	//4! = 1*2*3*4
	//long long result = 1;
	//for (int i = 1; i <= 5; i++)
	//{
	//	result = result * i;
	//}
	//cout << result << endl;

	//求得1 到 20 的阶乘和
	/*long long result = 0;
	for (int i = 1; i <= 20; i++)
	{
		long long resultTemp = 1;
		for (int j = 1; j <= i; j++)
		{
			resultTemp = resultTemp * j;
		}
		result += resultTemp;
	}
	cout << result << endl;*/

	//判断字符串回文 werdrew
	//string str;
	//cin >> str;
	//bool isHui = true;
	//for (int i = 0; i < str.size() / 2; i++)
	//{
	//	//i str.size()-1-i
	//	if (str[i] != str[str.size()-1-i])
	//	{
	//		isHui = false;
	//	}
	//}
	//if (isHui)
	//{
	//	cout << "是回文";
	//}
	//else
	//{
	//	cout << "不是回文";
	//}
	//输入三个整数，分别放在变量a,b,c中，然后把他们输入的数据重新按有小到大的顺序放到变量a,b,c中，最后输出a,b,c的值
	int a;
	int b;
	int c;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a>b)
	{
		int temp=a;
		a = b;
		b = temp;
	}
	if (b>c)
	{
		int temp=b;
		b = c;
		c = temp;
	}
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	cout << a << " " << b << " " << c << endl;
}
