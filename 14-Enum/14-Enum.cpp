/*
枚举类型
*/
#include <iostream>
using namespace std;
//在枚举类型中赋值的时候可以给他创建一个初始值，后面的数字会根据前一个数值依次递增
enum HeroType {
	Tank=1,
	Magic,//这个就是2
	ADC=5,
	Assist//这个是6
};

int main()
{
	HeroType heroType = Tank;
	cout << heroType << endl;
	int i = ADC + 2;
	cout << i << endl;
	heroType = HeroType(3);
	cout << heroType << endl;
}

