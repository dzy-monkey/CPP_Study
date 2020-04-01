/*
☆类型转换
*/
#include <iostream>
using namespace std;
int main()
{
#pragma region 类型转换的基本知识
	//语法糖，以下类型C++默认给做了类型上的转换
	//float a = 3;//int
	//int b = 4.3;//double
	////int c = 3e20; 不要把超过类型取值范围的数赋值给变量

	////强制类型转换 C语言的方式
	//int c = (int)24.5;
	//cout << c << endl;
	////强制类型转换，C++的方式
	//int d = int(322.5);

	////auto 根据赋值自动确定类型,不到万不得已不建议使用这种方式
	////因为自动确定类型会造成不必要的内存占用，所以最好是养成明确类型的习惯
	//auto e = 'e';
	//auto f = 0.0; //默认double
	//auto j = 0; //默认int 
#pragma endregion

#pragma region 让用户输入自己的身高，然后把它转换为厘米，并输出出来
	/*float stature;
	cout << "请输入你的身高:";
	cin >> stature;
	if (stature >= 2.5) {
		cout << "你输入的身高不正确,请重新输入:";
		cin >> stature;
		int statureCov = stature * 100;
		cout << "你的身高转化为厘米后是：" << statureCov << endl;
	}
	else
	{
		int statureCov = stature * 100;
		cout << "你的身高转化为厘米后是：" << statureCov << endl;
	}*/

#pragma endregion

#pragma region 获取一个四位数上面的每一个数
	/*int num;
	cout << "请输入一个四位数:";
	cin >> num;

	int ge = num % 10;
	int shi = (num % 100) / 10;
	int bai = (num % 1000) / 100;
	int qian = num / 1000;
	cout << qian <<" "<< bai << " " << shi << " " << ge << endl;*/
#pragma endregion

#pragma region 时间换算
	//让用户输入秒，然后转化为多少天、多少小时、多少分钟、多少秒显示出来
	/*int second;
	cout << "输入秒后将自动转化为分钟、小时、天：" << endl;
	cin >> second;
	int day = second / (24 * 60 * 60);
	int hour = (second - day * (24 * 60 * 60)) / (60 * 60);
	int minute = (second % (60 * 60)) / 60;
	int secondLeft = second % 60;

	cout << day << "天 " << hour << "小时 " << minute << "分钟 " << secondLeft << "秒钟 ";*/

#pragma endregion

#pragma region 让用户输入一个班级的男生和女生的数量，并输出女生的比例（百分比)
	/*int boy;
	int girl;
	cout << "请输入一个班级男生的数量：";
	cin >> boy;
	cout << "请输入一个班级女生的数量：";
	cin >> girl;
	float proportion;
	proportion = (float)girl / (boy + girl) * 100;
	cout << proportion << endl;
	cout << "女生在班上的比例是：" << proportion << "%" << endl;*/
#pragma endregion

}

