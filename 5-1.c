#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n=0;//�Էµ� ������ ����
	int ar[100];
	int min1 = 0, min2 = 0,num=0;
	
	scanf("%d ", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &ar[i]);
	}
	min1 = ar[0];
	
	for (int i = 1; i < n; i++)
	{
		if (ar[i] < min1) {
			min1 = ar[i];
			num = i;
		}

	}
	if (num == 0) min2 = ar[1]; //ù ��° ���� ���� ���� ���ΰ�� 
	else min2 = ar[0];

	for (int i = 1; i < n; i++) {
		if (i!=num && (ar[i] < min2) ) {
			min2 = ar[i];
			
		}

	}
	printf("%d %d", min1, min2);

	return 0;

}