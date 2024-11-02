
#include <stdio.h>
#define SIZE 5
void input (int size, int a[])
{
for(int i = 0; i < size; i++)
{
	scanf("%d", &a[i]);
}
}

int is_two_same(int size, int a[])
{
	int eq =0;
	for(int i = 0; i < size; i++)
	{
		int n = a[i];
		for(int j = i+1; j < size ; j++)
		{
			
			if(n == a[j])
			{
				eq =1;;
			}
			//printf("i %d\n", i);
			//printf("j %d\n", j);
			//printf("n %d\n", n);
			//printf("a1 %d\n", a[j+1]);
		}
	}				
	//printf("eq %d", eq);
return eq;
}

int main(int argc, char **argv)
{
	
	int arr[SIZE] = {0}; 
	input(SIZE,arr);
	is_two_same(SIZE,arr);
	return 0;
}
