
#include <stdio.h>
#define SIZE 10
void input (int size, int a[])
{
for(int i = 0; i < size; i++)
{
	scanf("%d", &a[i]);
}
}

 void change_max_min(int size, int a[])
{
	int max = -65355, min = 65365, mini = 0, maxi = 0;
	for(int i = 0; i < size; i++)
	{
		if(min > a[i])
		{
			min = a[i];
			mini = i;
		}
		
	}	
		for(int j = 0; j < size ; j++)
		{
			if(max < a[j])
			{
				max = a[j];
				maxi = j;
				
			}
		}
		a[maxi] = min;
		a[mini] = max;
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
	change_max_min(SIZE,arr);
	return 0;
}
