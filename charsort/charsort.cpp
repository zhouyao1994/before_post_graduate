// charsort.cpp : 定义控制台应用程序的入口点。
//
//输入字符串，去掉重复的元素后排序
//思路，先用冒泡排序，排序好，再去掉重复的元素
#include "stdafx.h"
#include"iostream"
using namespace std;

int main(){
	char stringinput[100];
	char temp;
	int a_len=1;
	cin.get(stringinput,100);//输入字符串
	int len = strlen(stringinput);
	for (int i = 0; i < len; i++){//冒泡排序
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
	for (int i = 1; i < len; i++){//去重
		if (stringinput[i - 1] == stringinput[i]){
			for (int m = i; m < len; m++){
				stringinput[m - 1] = stringinput[m];
			}
			len--;
			i = 0;//关键一步
		}
	}
	for (int k = 0; k < len; k++){
		cout << stringinput[k];
	}
	cout << endl;
	return 0;
}