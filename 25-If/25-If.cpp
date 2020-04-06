/*
if逻辑语句
*/
#include <iostream>
using namespace std;

int main()
{
	int hp = 10;

	if (hp<=0)
	{
		cout << "游戏结束";
	}
	else
	{
		cout << "游戏继续" << endl;
	}
	int age = 17;

	if (age < 18)
	{
		cout << "你可以玩三个小时" << endl;
	}
	else
	{
		if (age<50)
		{
			cout << "你可以玩10个小时" << endl;
		}
		else
		{
			cout << "你可以玩2个小时" << endl;
		}
	}

	if (age<18)
	{
		cout << "你可以玩三个小时";
	}
	else if (age<50)
	{
		cout << "你可以玩10个小时" << endl;

	}
	else if(age<80)
	{
		cout << "你可以玩2个小时" << endl;

	}
	else
	{
		cout << "不能玩了" << endl;
	}

}

