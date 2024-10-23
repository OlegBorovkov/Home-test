#include <stdio.h>

 int input(int A[10])
{
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &A[i]);
	}
		return A[10];
}	
/*
void out(int A[10])
{
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", A[i]);
	}
}
*/
void sum (int A[10])
{
	int sum = 0;
		for (int i = 0; i < 10; i++)
			{
				if (A[i] > 0) sum = sum + A[i];
								
						}
		printf("%d", sum);
}	
 
int main(int argc, char *argv[] )
{
int A[10];
	A[10] = input(A);
		sum(A);

    return 0;
}
