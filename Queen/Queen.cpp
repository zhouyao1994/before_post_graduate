// Queen.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<cmath>
#include"iostream"
using namespace std;
int N = 8;
int Queen[9];
int Con = 1;

void print(){
	for (int i = 1; i <= N; i++){
		cout << '('<<i<<','<<Queen[i]<<')';
	}
	cout << Con++;
	cout <<endl;
}

int isright(int row, int clomn){
	for (int i = 1; i < row; i++){
		if (Queen[i] == clomn || abs(i - row) == abs(Queen[i] - clomn))
			return 0;
	}
	return 1;
}

void place(int row){
	if (row > N){
		print();
	}
	else
	{
		for (int i = 1; i <= N; i++){
			if (isright(row, i)){
				Queen[row] = i;
				place(row+1);
			}
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	place(1);
	return 0;
}

