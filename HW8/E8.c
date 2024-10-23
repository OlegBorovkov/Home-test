#include <stdio.h>
#define SIZE 12

 int Input(int arr[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
		return i;
}	

void Print(int arr[], int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}

void inv (int arr[])
{
	int i;
	for (i = 4; i > 0; --i)
	printf("%d ", arr[i-1]);
	for (i = 8; i > 4; --i)
	printf("%d ", arr[i-1]);
	for (i = 12; i > 8; --i)
	printf("%d ", arr[i-1]);
	
}	
 
int main(int argc, char *argv[] )
{
int arr[SIZE]={0};
	Input(arr, SIZE);
	inv(arr);
//	Print(arrb,SIZE);
    return 0;
}
