/*
字符串
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//在c语言中 \0用于字符串结束标识
	/*char website1[]{'d','z','y'};
	char website2[]{ 'd','z','y','d','i','k','\0' };
	cout << website2 << endl;
	cout << website1 << endl;*/

	
	//char website[] = "dzy";
	//cout << website << endl;
	////获取字符串的长度
	//cout << strlen(website) << endl;  

	/*char website[20];
	cin >> website;
	cout << website << endl;*/

	//一句话太长的话可以通过多个""来分割
	//char str[] = "my name is dzy ." "i come from china " "i like food ";
	//☆ cin会以空格 tab 换行 来区分字符串,如果有多行要输入的，建议使用cin.getline进行输入识别
	//char str[30] = "";
	//cin.getline(str,30);
	string str1;
	string str2="www.dzy.com";
	//getline(cin, str1);
	//cout << str1 << endl;
	//cout << str2 << endl;
	cout << str2[5] << endl;
	//字符串的拼接
	str1 = "dzy";
	str2 = "dik_tesla";
	string s = str1 + str2;
	cout << s << endl;
	//获取字符串的长度
	cout << s.size() << endl;
}

