// settest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"set"
#include"iostream"
using namespace std;

void pr(set<char> set_char){
	set<char>::iterator i;
	for (i = set_char.begin(); i != set_char.end(); i++){
		cout << *i;
	}
	cout << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	char ch[100];
	cin.get(ch, 100);
	int len;
	len = strlen(ch);
	set<char> set_char(ch, ch + len);
	pr(set_char);
	return 0;
}

