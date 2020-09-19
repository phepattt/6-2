#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int r, c, i, j;
	int sum[100][100], x[100][100], y[100][100];
	printf(" Metrix a  - Metrix b \n");
	printf("Enter row and collum : ");
	scanf("%d %d", &r, &c);
	printf("ENTER FIRST MATRIX \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++) {
			printf("input first matrix : %d,%d = ", i + 1, j + 1);
			scanf("%d", &x[i][j]);
		}
	}
	printf("ENTER SECOND METRIX \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++) {
			printf("input second matrix : %d,%d = ", i + 1, j + 1);
			scanf("%d", &y[i][j]);
		}
	}
	printf(" FIRST METRIX - SECOND METRIX =  \n");
	for (i = 0; i < r; i++)
	{

		for (j = 0; j < c; j++) {
			sum[i][j] = x[i][j] - y[i][j];
			printf("%d  ", sum[i][j]);
			if (j == c - 1) {
				printf("\n");
			}
		}
	}
	return 0;
}