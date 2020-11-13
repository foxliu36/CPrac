#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 4
//void posf(int[][], int *);
//void evenf(int[][], int *); 
void aa(int []);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int npos, neven;
	
	int intdata [M][N] = {
		{1,2,-3, 4},
		{5, -6, 7, 8},
		{-9, 10, -11, 12},
	};
	
	int data2[] = {1,2,3};
	
	posf(intdata[M][N], &npos);
	//evenf(intdata[M][N], &neven);
	//aa(data2);
	printf("正值之項數 = %d", npos);
	return 0;
}

void posf(int intdata[M][N], int *npos)
{
	int i, j, count = 0;
	
	for(i = 0; i < M; i++)
		for(j = 0; j < N; j++)
			if(intdata[M][N] > 0)
				count++;
	*npos = count;
	
}

void evenf(int intdata[M][N], int *neven)
{
}

void aa(int data[])
{
	int i = 0;
	for(i = 0; i < 2; i++)
		printf("%d", data[i]);
}
