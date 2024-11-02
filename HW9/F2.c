
#include <stdio.h>
#define SIZE 5
void input (int n, int a[])
{
for(int i = 0; i < n; i++)
{
	scanf("%d", &a[i]);
}
}

void sort_even_odd(int n, int a[])
{


for(int i = n ; i >0; i--)
{
	for(int j = 0; j < n-1 ; j++)
	{
		if(((a[j])%2 != 0) && ((a[j+1])%2 == 0))
		{
			int min = a[j];
			a[j] = a[j+1];
			a[j+1] = min;
			printf("j %d\n", j);
			printf("i0 %d\n", a[j]);
			printf("i1 %d\n", a[j+1]);
			//break; 
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
	sort_even_odd(SIZE,arr);
	return 0;
}

