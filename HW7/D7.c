#include <stdio.h>

 void rev(int n)
{
	int i = 0;
	if (i <= n) 
	{ 
		printf(" %d",n);	
		i = i+1;
		rev(n - 1); 	
	}
}	

	 
int main(int argc, char *argv[] )
{
	int n;
	scanf("%d",&n);
		if(n == 0)
		{
			printf("%d", 0000);
		}
		else    
		{
			rev(n);
		}

    return 0;
}
