#include <stdio.h>
#include <stdlib.h>
void BS(int *, int);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[] = {23,41,33,96,5,3};
	
	BS(a,6);
	return 0;
}

//氣泡排序法
void BS(int *a, int size)
{
	int i, j, k, tmp;
	for(k = 0; k<size; k++)
	{
		printf("%d ", a[k]);
	}
	printf("\n");
	
	for(i = 0; i < size; i++)
		for(j = size-2; j>=i; j--)
		{
			if(a[j]> a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
				printf("a[%d]>a[%d], swap\n", j, j+1);
				printf("\t\t\t");
				for(k=0; k< size;k++)
				{
					printf("%d ", a[k]);
				}
				printf("\n");
			}else{
				printf("a[%d]<=a[%d], skip\n", j, j+1);
			}
		}
		
		printf("finished\n");
}
