/*
break和continue 语句
*/
#include <iostream>
using namespace std;

int main()
{
	int vip = 3;
	//每一个case 语句结束后 一定要加一个break;不然会接着往下执行
	switch (vip)
	{
	case 0:
		cout << "vip等级1" << endl;
		break;
	case 1:
		cout << "vip等级2" << endl;
		break;
	case 2:
		cout << "vip等级3" << endl;
		break;
	case 3:
		cout << "vip等级4" << endl;
		break;
	case 4:
		cout << "vip等级5" << endl;
		break;
	default:
		cout << "啥也不是" << endl;
		break;
	}

	for (int i = 1; i < 10; i++)
	{
		if (i % 3 == 0)
		{
			continue;//中断当前循环，继续下一次循环
		}
		cout << i << endl;
	}

}

