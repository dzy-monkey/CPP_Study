/*
逻辑运算符
*/

#include <iostream>
#include <string>
using namespace std; 
int main()
{
	// || 逻辑或 
	int vip = 2;

	if (vip == 1 || vip == 2)
	{
		cout << "可以获得优惠" << endl;
	}
	
	bool res1 = true || false;
	bool res2 = false || true;
	bool res3 = true || true;
	bool res4 = false || false;
	// 1 1 1 0
	cout << res1 << res2 << res3 << res4 << endl;

	// && 逻辑与
	int age = 20;
	if (age >=18 && age <=30)
	{
		cout << "你是青年" << endl;
	}

	//0 0 1 0
	bool res5 = true && false;
	bool res6 = false && true;
	bool res7 = true && true;
	bool res8 = false && false;
	cout << res5 << res6 << res7 << res8 << endl;

	//! 逻辑非 （取反） 0  1 
	cout << !true << endl;
	cout << !false << endl;

	//?:三元运算符 相当于if
	//表达式1?表达式2:表达式3
	string a=3 > 2 ? "大于" : "不大于";
	cout << a << endl;
}
