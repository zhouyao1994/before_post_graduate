#include<stdio.h>
int sort(int a[], int i, int j){
	int temp = a[i];
	while (i < j){
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
	temp= sort(a, i, j);
	quiksort(a, i, temp);
	quiksort(a, temp, j);
}

int main(){
	int number, a[100],i;
	scanf("%d", &number);
	for (i = 0; i < number; i++){
		scanf("%d", &a[i]);
	}
	quiksort(a, 0, number);
	for (i = 0; i < number; i++){
		printf("%d", a[i]);
	}
	return 0;
}
