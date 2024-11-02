
#include <stdio.h>
#define SIZE 5
void input (int size, int a[])
{
for(int i = 0; i < size; i++)
{
	scanf("%d", &a[i]);
}
}

 void swap_negmax_last(int size, int a[])
{
	int max = -65355, maxi = 0, ms = a[size - 1];
	for(int i = 0; i < size; i++)
	{
		if((max < a[i]) && (a[i] < 0))
		{
			max = a[i];
			maxi = i;
		}
	//	printf("m %d\n ",max); 
	}	
		if((max < 0) && (max != -65355))
		{
		a[size - 1] = max;
		a[maxi] = ms;
		}
		
/*	
		for(int i = 0; i<size; i++)
		{
			printf("%d ",a[i]); 
		}
*/					
}

int main(int argc, char **argv)
{
	
	int arr[SIZE] = {0}; 
	input(SIZE,arr);
	swap_negmax_last(SIZE,arr);
	return 0;
}
