#include <stdio.h>
int main(int argc, char **argv)
{
	int i;
	int min = 65535, mini;
	int max = -65535, maxi;
	int n[10];
		for(i=0; i<10; i++)
		{
			scanf("%i", &n[i]);
		}
		for (i = 0; i<10; i++)
		{
			if(min > n[i])
			{
				min = n[i];	
			} 
			if(max < n[i])
			{
				max = n[i];
			}	
		}	
		for (i = 10; i >= 0; i--)
		{
			if(min == n[i])
			{
				mini = i + 1;
				
			} 
			if(max == n[i])
			{
				maxi = i +1;
			}	
		}	
	printf("%d %d ", maxi, max);	
	printf("%d %d ", mini, min);
	
	
	return 0;
}

