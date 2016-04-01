// yuesefu.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
//这种多次初始化的方法，只在vs2013上运行有效

int _tmain(int argc, _TCHAR* argv[])
{
	int len = 10,a[10],del=0,b[10];
	for (int i = 0; i < 10; i++){
		a[i] = 1;
	}
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 3;){
			del = del % 10;
			if (a[del] == 1){
				j++;
			}
			del++;
		}
		del--;
		a[del] = 0;
		b[i] = del + 1;
	}
	for (int i = 0; i < 10; i++){
		cout << b[i] << ' ';
	}
	return 0;
}

