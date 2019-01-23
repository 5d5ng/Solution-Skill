#pragma warning (disable:4996)
#include<stdio.h>
#include<stdlib.h>

int main() {
	int B[3],Bd=0;//0년부터 생일까지 일 수
	int T[3],Td=0;//0년부터 지금까지 일 수
	for (int i = 0; i < 3; i++)
		scanf("%d", &B[i]);
	for (int i = 0; i < 3; i++)
		scanf("%d", &T[i]);
	int y = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
	Bd += B[2];
	for (int i = 1; i < B[1]; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			Bd += 31;
		else if (i == 2)
			Bd += 28;
		else
			Bd += 30;
	}
	Bd += (y * (B[0] - 1));

	Td += T[2];
	for (int i = 1; i < T[1]; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			Td += 31;
		else if (i == 2)
			Td += 28;
		else
			Td += 30;
	}
	Td += (y * (T[0] - 1));

	printf("%d", Td - Bd);

	return 0;
	
}