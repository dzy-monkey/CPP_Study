/*
switch语句
*/
#include <iostream>
using namespace std;
enum Hero
{
	Tank=0,
	Magic=1,
	ADC=2,
	Assist
};

int main()
{
	Hero type = Tank;
	switch (type)
	{
	case Magic:
		cout << "我是法师" << endl;
		break;
	case ADC:
		cout << "我是射手" << endl;
		break;
	case Assist:
		cout << "我是辅助" << endl;
		break;
	case Tank:
		cout << "我是坦克" << endl;
		break;
	default:
		//如果没有相等的情况 执行默认
		cout << "没有找到对应类型的英雄" << endl;
		break;
	}
}

