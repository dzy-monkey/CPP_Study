/*
宏
类型别名
*/
#include <iostream>
#include <string>
using namespace std;
//定义宏 ☆宏后面不要加分号;
#define END return 0;
#define START int main()
#define FString string

//typedef 后面必须加分号表示结束
typedef string UString;
typedef int FInt;


START
{
	FString name = "dzy";
	cout << name;

	UString nickName="dik";
	cout << nickName << endl;
	FInt a = 10;
	END
}

