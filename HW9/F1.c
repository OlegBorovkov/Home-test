
#include <stdio.h>
#define SIZE 20
void input (int n, int a[])
{
for(int i = 0; i < n; i++)
{
	scanf("%d", &a[i]);
}
}

void sort_array(int n, int a[])
{


for(int i = n ; i >0; i--)
{
	for(int j = 0; j < n-1 ; j++)
	{
		if(a[j] >= a[j+1])
		{
			int min = a[j+1];
			a[j+1] = a[j];
			a[j] = min;
		}
	}
}
	for(int i = 0; i < n; i++)
{
	printf("%d ", a[i]);
}

}

int main(int argc, char **argv)
{
	
	int arr[SIZE] = {0}; 
	input(SIZE,arr);
	sort_array(SIZE,arr);
	return 0;
}

