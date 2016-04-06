// LIst_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"list"
#include"iostream"
using namespace std;

void pr( list<int> list_p){
	list<int>::iterator i;
	for (i = list_p.begin(); i != list_p.end(); i++){
		cout << *i<<' ';
	}
	cout << endl;
}

int big(int a, int b){
	if (a > b)
		return 1;
	else
		return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a[10] = { 9, 56, 78, 11, 23, 56, 989, 56, 57, 964 };
	list<int> list_a(a,a+10);
	list<int>::iterator i;
	pr(list_a);
	list_a.sort();
	pr(list_a);
	list_a.sort(big);
	pr(list_a);
	list<int> list_b({ 5, 87, 9, 89, 98, 98, 98 });
	list_b.sort();
	pr(list_b);
	//list_a.merge(list_b);
	pr(list_a);
	return 0;
}

