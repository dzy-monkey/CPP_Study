/*
组合运算符
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//+ - * / 
	//+= -= *= /= %=
	int a = 23, b = 29;
	a += b; //a=a+b
	a -= b;	//a=a-b
	a *= b; //a=a*b
	a /= b; //a=a/b
	a %= b; //a=a%b

	// > >= < <= == != 
	bool res = 34 > 89;
	cout << res << endl;
	//int a = 100, b = 90;
	cout << (a > b) << endl;
	cout << (a >= b) << endl;
	cout << (a < b) << endl;
	cout << (a <= b) << endl;
	cout << (a == b) << endl;//是否相等
	cout << (a != b) << endl;//是否不相等

	char str1[] = "dzy";
	char str2[] = "dzy";
	char str3[] = "dzy2";
	char str4[] = "dzy3";
	//输出的值是不相等的，因为数组本质上是一个指针，如果用这样的判断方式的话，比对的就是两个内存地址，这样肯定是不相等的
	cout << (str1 == str2) << endl;
	//返回0表示相等，非零表示不相等，这个方法比对的是字符串的内容，而不是内存地址
	cout << strcmp(str1, str2) << endl;
	cout << strcmp(str3, str4) << endl;
	string dong = "dong";
	string dong2 = "dong2";
	//string类型返回1表示是相等的，返回0表示不相等
	cout << "string："<<(dong == dong2) << endl;
}


