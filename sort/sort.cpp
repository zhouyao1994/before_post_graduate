#include"stdafx.h"
#include<iostream>
using namespace std;
int sort(int a[], int i, int j){//枢纽
	int temp = a[i];
	while (i < j){//记得要条件
		if (i<j&&a[j]>temp){
			j--;
		}
		a[i] = a[j];
		if (i < j&&a[i] < temp){
			i++;
		}
		a[j] = a[i];
	}
	a[i] = temp;
	return i;
}

void quiksort(int a[], int i, int j){
	int temp;
	if (i < j){
		temp = sort(a, i, j);
		quiksort(a, i, temp-1);//加一
		quiksort(a, temp+1, j);//减一
	}
}

int main(){
	int number, a[100], i;
	cin>>number;
	for (i = 0; i < number; i++){
		cin>>a[i];
	}
	quiksort(a, 0, number-1);
	for (i = 0; i < number; i++){
		cout<<a[i]<<' ';
	}
	return 0;
}
