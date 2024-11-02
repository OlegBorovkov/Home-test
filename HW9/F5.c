
#include <stdio.h>
#define SIZE 5
void input (int size, int a[])
{
for(int i = 0; i < size; i++)
{
	scanf("%d", &a[i]);
}
}

int find_max_array(int size, int a[])
{
int max = -65535;
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size ; j++)
		{
			if(a[j] > max)
			{
				max = a[j];
			}
			
		}
	}				
	printf("m %d", max);
return max;
}

int main(int argc, char **argv)
{
	
	int arr[SIZE] = {0}; 
	input(SIZE,arr);
	find_max_array(SIZE,arr);
	return 0;
}
