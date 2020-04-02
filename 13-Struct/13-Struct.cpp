/*
结构体
*/

#include <iostream>
#include <string>
using namespace std;

//定义结构体
struct Position
{
	//可以放任意类型
	float x;
	float y;
	float z;
	string name;
	int hp;
	double attack;
};

int main()
{
	//初始化结构体
	Position playerPos{3,4,6.7};
	//结构体数组  
	Position enemyPos[]{ {1,2,3},{4,5,6},{7,8,9} }; 

	cout << playerPos.x <<' '<< playerPos.y << ' ' << playerPos.z << ' ' << endl;
	cout << enemyPos[0].x << ' ' << enemyPos[0].y << ' ' << enemyPos[0].z << ' ' << endl;

}

