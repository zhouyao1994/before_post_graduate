// list_count_char.cpp : �������̨Ӧ�ó������ڵ㡣
//��list
//

#include "stdafx.h"
#include"list"
#include"algorithm":
#include"iostream"
using namespace std;
void pr(list<char> li){//���list�ĺ���
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
	list<char> list_char(a, a + len); //ͨ�����飬ֱ�ӹ���list
	pr(list_char);
	list_char.sort();
	pr(list_char);
	//list_char.unique();
	list_char.sort();//����
	pr(list_char);
	int t = count(list_char.begin(), list_char.end(), 's');//algorithm�е�count����
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

