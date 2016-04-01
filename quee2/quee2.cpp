// quee2.cpp : �������̨Ӧ�ó������ڵ㡣
//

//#include "stdafx.h"
#include <stdio.h>
#include "stdlib.h"

const int N = 20;   //���Żʺ�ĸ���
int q[N];         //���ʺ����ڵ��к�
int cont = 0;     //ͳ�ƽ�ø���
//���һ����
void print(int n)
{
	int i, j;
	cont++;
	printf("��%d���⣺", cont);
	for (i = 1; i <= n; i++)
		printf("(%d,%d) ", i, q[i]);
	printf("\n");
	for (i = 1; i <= n; i++)        //��
	{
		for (j = 1; j <= n; j++)    //��
		{
			if (q[i] != j)
				printf("x ");
			else
				printf("Q ");
		}
		printf("\n");
	}
}
//�����i�е�k�����Ƿ���԰ڷŻʺ�
int find(int i, int k)
{
	int j = 1;
	while (j<i)  //j=1~i-1���Ѿ������˻ʺ����
	{
		//��j�еĻʺ��Ƿ���k�л�(j,q[j])��(i,k)�Ƿ���б����
		if (q[j] == k || abs(j - i) == abs(q[j] - k))
			return 0;
		j++;
	}
	return 1;
}
//���ûʺ�������
void place(int k, int n)
{
	int j;
	if (k>n)
		print(n);
	else
	{
		for (j = 1; j <= n; j++)   //��̽��k�е�ÿһ����
		{
			if (find(k, j))
			{
				q[k] = j;
				place(k + 1, n);  //�ݹ������ڳɹ�������ϴε������ʱ�������һ������
			}
		}
	}
}

int main(void)
{
	int n;
	printf("������ʺ�ĸ���(n<=20),n=:");
	scanf("%d", &n);
	if (n>20)
		printf("nֵ̫�󣬲������!\n");
	else
	{
		printf("%d�ʺ������������(ÿ�еĻʺ����ڵ�����):\n", n);
		place(1, n);        //��������״̬����
		printf("\n");
	}
	system("pause");
	return 0;
}