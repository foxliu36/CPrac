#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void merge(int nums1[], int length1, int nums2[], int length2, int result[]);
int compare(int num1, int num2);

int main(int argc, char *argv[]) {
	int a[] = {2, 6, 7, 8};
	int b[] = {1, 3, 7, 9};
	int i = 0;
	int c[10];
	merge (a, 4, b, 4, c);
	for(i = 0; i < 10; i++)
		printf("%5d", c[i]);
	
	return 0;
}

void merge(int nums1[], int length1, int nums2[], int length2, int result[])
{
	int len1 = length1;
	int len2 = length2;
	int index1 , index2, r;
	index1 = index2 = r = 0;
	
	while(len1 && len2)
	{
		switch(compare(nums1[index1], nums2[index2]))
		{
			case 1:
				result[r] = nums2[index2]; r++; index2++; len2--;
				break;
			case -1:
				result[r] = nums1[index1]; r++; index1++; len1--;
				break;
			case 0:
				result[r] = nums1[index1]; r++; index1++; len1--;
				result[r] = nums2[index2]; r++; index2++; len2--;
				break;
		}
	}
	
	if(len1)
	{
		while(len1 > 0)
		{
			result[r] = nums1[index1]; 
			index1++; r++;
			len1--;
		}
	}
	if(len2)
	{
		while(len2 > 0)
		{
			result[r] = nums2[index2]; 
			index2++; r++;
			len2--;
		}
	}
		
}

int compare(int num1, int num2)
{
	if(num1 > num2)
		return 1;
	else if(num1 < num2)	
		return -1;
	else 
		return 0;
}
