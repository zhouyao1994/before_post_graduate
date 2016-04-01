// quicksort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

int pivot(int a[], int low, int hight){
	int temp = a[low];
	while (low<hight)
	{
		if (low<hight&&a[hight]>temp){
			hight--;
		}
		a[low] = a[hight];
		if (low < hight&&a[low] < temp){
			low++;
		}
		a[hight] = a[low];
	}
	a[low] = temp;
	return low;
}

void qsort(int a[], int low, int hight){
	int temp;
	if (low < hight){
		temp = pivot(a, low, hight);
		qsort(a, low, temp - 1);
		qsort(a, temp + 1, hight);
	}
}

int main()
{
	int a[100], in_number;
	cin >> in_number;
	for (int i = 0; i < in_number; i++){
		cin >> a[i];
	}
	qsort(a, 0, in_number-1);
	for (int i = 0; i < in_number; i++){
		cout << a[i]<<' ';
	}
	return 0;
}

