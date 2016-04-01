// list_count_char.cpp : 定义控制台应用程序的入口点。
//用list
//

#include "stdafx.h"
#include"list"
#include"algorithm":
#include"iostream"
using namespace std;
void pr(list<char> li){//输出list的函数
	list<char>::iterator i;
	for (i = li.begin(); i != li.end(); i++){
		cout << *i;
	}
	cout << endl;
}

int main()
{
	char a[100] = { 's', 'a', 'b', 'a', 'b', 'a', 'b', 's', 's', 's', 's', 's', 's', 's' };
	//cin.get(a, 100);
	int len = strlen(a);
	list<char> list_char(a, a + len); //通过数组，直接构造list
	pr(list_char);
	list_char.sort();
	pr(list_char);
	//list_char.unique();
	list_char.sort();//排序
	pr(list_char);
	int t = count(list_char.begin(), list_char.end(), 's');//algorithm中的count函数
	cout << endl << t << endl;
	list<char> list_char_unique(list_char);
	list_char_unique.unique();
	list<char>::iterator i;
	for (i = list_char_unique.begin(); i != list_char_unique.end(); i++){
		const char m = *i;
		int time = count(list_char.begin(), list_char.end(), *i);
		cout << *i << ' ' << time << endl;
	}
	return 0;
}

