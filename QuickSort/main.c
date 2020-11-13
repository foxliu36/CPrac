#include <stdio.h>
#include <stdlib.h>
void swap(int *, int *);
void quick_sort_re(int [], int , int );
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[] = {7,8,2,3,4,5, 1, 333, 222, 1};
	
	int arrsize = sizeof(arr) / sizeof arr[0];
	
	quick_sort_re(arr, 0, arrsize - 1);
	int i = 0;
	for(i = 0; i < arrsize; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;  
}

void quick_sort_re(int arr[], int start, int end)
{
	if(start >= end)
		return;
	int mid = arr[end];
	int left = start, right = end - 1;
	while(left < right)
	{
		while(arr[left] < mid && left < right)
			left++;
		while(arr[right] >= mid && left < right)
			right--;
		swap(&arr[left], &arr[right]); 
	}
	if(arr[left] >= arr[end])
		swap(&arr[left], &arr[end]);
	else
		left++;
	
	quick_sort_re(arr, start, left - 1);
	quick_sort_re(arr, left + 1, end);
}

void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
