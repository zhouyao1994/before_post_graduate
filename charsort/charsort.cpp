// charsort.cpp : �������̨Ӧ�ó������ڵ㡣
//
//�����ַ�����ȥ���ظ���Ԫ�غ�����
//˼·������ð����������ã���ȥ���ظ���Ԫ��
#include "stdafx.h"
#include"iostream"
using namespace std;

int main(){
	char stringinput[100];
	char temp;
	int a_len=1;
	cin.get(stringinput,100);//�����ַ���
	int len = strlen(stringinput);
	for (int i = 0; i < len; i++){//ð������
		for (int j = i; j < len; j++){
			if (stringinput[i]>stringinput[j]){
				temp = stringinput[i];
				stringinput[i] = stringinput[j];
				stringinput[j] = temp;
			}
		}
	}
	for (int k = 0; k < len; k++){
		cout << stringinput[k];
	}
	cout << endl<<len<<endl;
	for (int i = 1; i < len; i++){//ȥ��
		if (stringinput[i - 1] == stringinput[i]){
			for (int m = i; m < len; m++){
				stringinput[m - 1] = stringinput[m];
			}
			len--;
			i = 0;//�ؼ�һ��
		}
	}
	for (int k = 0; k < len; k++){
		cout << stringinput[k];
	}
	cout << endl;
	return 0;
}