#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	double SD=0, avg = 0;
	int n, ar[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &ar[i]);
		avg += ar[i];
	}
	avg /= n;

	for (int i = 0; i < n; i++) {
		SD += ((double)ar[i] - avg)*((double)ar[i] - avg);
	}
	SD /= n;
	SD = sqrt(SD);

	printf("%lf,%lf\n", avg, SD);
	



}