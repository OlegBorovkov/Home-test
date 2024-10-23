
#include <stdio.h>


int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	float sum1;
	int n[5];
		for(i=0; i<5; i++)
		{
			scanf("%i", &n[i]);
		}
		for (i = 0; i<5; i++)
		{
			sum += n[i];
		}
	sum1 = sum/5.;
	printf("%.3f ", sum1);
	return 0;
}

