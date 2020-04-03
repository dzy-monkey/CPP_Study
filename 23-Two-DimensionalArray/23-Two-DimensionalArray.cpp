/*
二维数组
*/
#include <iostream>
using namespace std;
int main()
{
	// 四行五列的二维数组
	int a[4][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20} };
	//访问第二行的第二个元素
	cout << a[1][1] << endl;
	
	for (int i = 0; i < 4; i++) //执行5次
	{
		for (int j = 0; j < 5; j++) //执行30次
		{
			cout << a[i][j] << " ";
		}
	}

}

