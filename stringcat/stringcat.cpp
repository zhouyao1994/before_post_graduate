// stringcat.cpp : �������̨Ӧ�ó������ڵ㡣
//�ַ������ӡ
//ȫ��������ṹ��ʵ��

#include "stdafx.h"
#include"string.h"
#include"ctype.h"
#include"iostream"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char a[100],temp;
	double number=0;
	char st[100];
	char num[100];
	char other[100];//����������ֱ���
	int stlen=0, otherlen=0,numlen=0;//����
	cin.get(a, 100);
	int len = strlen(a);
	for (int i = 0; i < len; i++){
		temp = a[i];
		if (isalpha(temp)){//���ú���
			st[stlen] = temp;
			stlen++;
		}
		else if(isdigit(temp)){
			num[numlen] = temp;
			numlen++;
		}
		else
		{
			other[otherlen] = temp;
			otherlen++;
		}
	}
	for (int i = 0; i < stlen; i++){
		cout << st[i];//�������
	}
	cout << endl;
	for (int i = 0; i < numlen; i++){
		cout << num[i];
	}
	cout << endl;
	for (int i = 0; i < otherlen; i++){
		cout << other[i];
	}
	return 0;
}

