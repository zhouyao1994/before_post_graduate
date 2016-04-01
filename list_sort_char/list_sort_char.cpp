// list_sort_char.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"list"
#include"iostream"
using namespace std;
void pr(list<char> li){
	list<char>::iterator i;
	for (i = li.begin(); i != li.end(); i++){
		cout << *i;
	}
	cout << endl;
}

int main()
{
	char a[100];
	cin.get(a, 100);
	int len = strlen(a);
	list<char> list_char(a, a + len);
	pr(list_char);
	list_char.sort();
	pr(list_char);
	list_char.unique();
	list_char.sort();
	pr(list_char);
	return 0;
}



