/*
字符类型
*/
#include <iostream>
using namespace std;

int main()
{
	//以下这种特殊的例子记忆一下，别的都是正常输出，不做讲解
	//在阿斯克码表中是a,所以输出会是a而不是97 中间涉及到一个类型转换
	char c = 97;
	//在阿斯克码表中是97，所以输出会是97
	int a = 'a';
	

	cout << c << endl;
	cout << a << endl;
}

