#include <stdio.h>

 int input(int A[12])
{
	for(int i = 0; i < 12; i++)
	{
		scanf("%d", &A[i]);
	}
		return A[12];
}	

void sum (int A[12])
{
	int sum = 0; 
	float mdl = 0;
		for (int i = 0; i < 12; i++)
			{
				sum = sum + A[i];
			}
			mdl = sum/12.;
		printf("%.2f", mdl);
}	
 
int main(int argc, char *argv[] )
{
int A[12];
	A[12] = input(A);
		sum(A);

    return 0;
}
