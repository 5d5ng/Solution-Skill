#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n=6,minVal,min;
	int k=7;
	scanf("%d", &n);
	int ar[100] ;
	for (int i = 0; i < n; i++) {
		scanf("%d", &ar[i]);

	}
	
	scanf("%d", &k);
	minVal = (k - ar[0])*(k - ar[0]);
	min = ar[0];
	for (int i = 1; i < n-1; i++) {
		if (minVal > (k - ar[i])*(k - ar[i])) {
			minVal = (k - ar[i])*(k - ar[i]);
			min = ar[i];
		}

	}

	printf("\n%d", min);
	return 0;
}