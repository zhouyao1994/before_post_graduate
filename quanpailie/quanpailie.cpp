// quanpailie.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
void swap(char &s,char &t){
	char temp;
	temp = s;
	s = t;
	t = temp;
}

void pailie(char a[], int from, int to){//用来表示全排列的
	//if (to <= 1){
		//return;
	//}
	int len = strlen(a);
	if (from == to){
		for (int i = 0; i < len; i++){
			cout << a[i];
		}
		cout << endl;
	}
	else{
		for (int j = from; j <= to; j++){
			swap(a[j], a[from]);
			pailie(a, from+1, to);
			swap(a[j], a[from]);
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	char str[100];
	//= { 'a', 'b', 'c', 'd' };
	cin.get(str, 100);
	int len=0;
	//cin.get(str,100);
	len = strlen(str);
	pailie(str, 0, len - 1);
	return 0;
}

