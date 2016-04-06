// Uing_debug.cpp : 定义控制台应用程序的入口点。
//
//已知问题，可硬用调试功能输入参数，并且在程序结尾加上cin
//来达到快速输入参数，和快速执行的目的
//

//待解决问题
//命令行，只能输入字符串，无法输入数值
//

//已完美解决输入数值问题，用atoi来解决

#include "stdafx.h"
#include"iostream"
using namespace std;

int main(int argc, char* argv[])
{
	float i, a1 = atoi(argv[1]), a2 = atoi(argv[2]), b1=atoi(argv[3]), b2 = atoi(argv[4]);
	cout << a2+b1;
	
	cin >> i;
	return 0;
}

