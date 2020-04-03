/*
小节练习
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;

//创建一个结构体糖块，包含三个成员，品牌，重量，卡路里
struct CandyBar
{
	string brandName;
	float weight;
	int calorie;
};

int main()
{
	//创建一个char类型数组，名叫actor
	//array<char, 30> actor;
	//创建一个float类型数组，名叫chuck
	array<float, 13> chuck;
	chuck[0] = 2.3f;
	//声明结构体 初始化为 Mocha Munch 2.3 500
	CandyBar snack = { "Mocha Munch",chuck[0],500 };
	//输出snack变量
	cout << snack.brandName << ' ' << snack.weight << ' ' << snack.calorie << endl;

	array<float, 20> runGrade;
	cout << "请输入第一次跑步成绩:";
	cin >> runGrade[0];
	cout << "请输入第二次跑步成绩:";
	cin >> runGrade[1];
	cout << "请输入第三次跑步成绩:" << endl;
	cin >> runGrade[2];

	cout << "三次平均成绩是:" << (runGrade[0] + runGrade[1] + runGrade[2]) / 3 << endl;

}


