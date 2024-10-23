
#include <stdio.h>


int main(int argc, char **argv)
{
	int i;
	int min = 65555;
	int n[5];
		for(i=0; i<5; i++)
		{
			scanf("%i", &n[i]);
		}
		for (i = 0; i<5; i++)
		{
			if(min > n[i])
			{
				min = n[i];
			} 
			
		}		
	printf("%d ", min);
	return 0;
}

