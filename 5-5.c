#pragma warning (disable:4996)
#include<stdio.h>
#include<stdlib.h>
int main() {

	FILE *fp = fopen("input5.txt", "r");
	int ar[100];
	int i = 0;
	while (feof(fp) != 1) {
	
		fscanf(fp, "%d", &ar[i]);
		i++;
	
		
	}
	int tmp=ar[i-1];
	for(int j=i-1;j>=0;j--)
		ar[j+1] = ar[j];

	ar[0] = tmp;
	for (int j = 0; j < i; j++)
		printf("%d ", ar[j]);

	fclose(fp);
	return 0;
}