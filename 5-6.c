#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

int main() {
		
	FILE *fp = fopen("input6.txt", "r");
	int ar[100];
	int i = 0;
	while (feof(fp) != 1) {

		fscanf(fp, "%d", &ar[i]);
		i++;
		
			
	}
	int limit = i - 1;
	for (int j = 0; j <= limit / 2; j++) {
		int tmp = ar[limit - j];
		ar[limit - j] = ar[j];
		ar[j] = tmp;
		
			
	}
	for (int j = 0; j <= limit; j++)
		printf("%d ",ar[j]);
	
	fclose(fp);
	return 0;
		
}