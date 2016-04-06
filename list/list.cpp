// list.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
#include <list>


int _tmain(int argc, _TCHAR* argv[])
{
	typedef list<int> list_int;
	list_int list_my;
	list_int::iterator it;
	int a[10] = { 0, 1, 5, 3, 4, 5, 6, 5, 2, 9 };
	for (int i = 0; i < 10; i++){
		list_my.insert(list_my.begin(), a[i]);
	}
	for (it = list_my.begin(); it != list_my.end(); it++){
		cout << *it<<' ';
	}
	int con = count(list_my.begin(), list_my.end(), 5);
	cout << endl << con;
	return 0;
}

