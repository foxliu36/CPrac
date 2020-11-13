#include <stdio.h>
#include <stdlib.h>
void swap(int *, int *);
void Selection_Sort(int [], int);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 0;
	
	int a[] = {1,2,3,4,5,6,2,1,0};
	
	Selection_Sort(a, 9);
	
	for(i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0; 
}

void Selection_Sort(int arr[], int size)
{
	int i, j;
	
	for(i = 0; i < size; i++)
	{
		int tmp = i;
		for(j = i+1; j < size; j++)
		{
			
			if(arr[tmp] > arr[j])
				tmp = j;
				
		}
		
		if(tmp != i)
		 	swap(&arr[tmp], &arr[i]);
	}
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
