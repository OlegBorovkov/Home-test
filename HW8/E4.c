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
	int max1 = -65555, max2 = -65555, im = 0, sum = 0;
	for (int i = 0; i < 10; i++)
	{
		if(A[i] > max1) max1 = A[i];
	}
		for(int i = 0; i < 10; i++)
			if(A[i] == max1) im = i;
				for (int i = 0; i < 10; i++) 
				{
					if((A[i] > max2) && (i != im)) max2 = A[i];
				}
						for (int i = 0; i < 10; i++)
						{
							 sum = sum + A[i];
								if ((max1 == -65555) && (max2 == -65555))
								{
									max1 = 0;
									max2 = 0;
								}	
						}
		printf("%d", (max1 + max2));
}	
 
int main(int argc, char *argv[] )
{
int A[10];
	A[10] = input(A);
		sum(A);

    return 0;
}
