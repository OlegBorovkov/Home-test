#include <stdio.h>

 void rev(int n)
{
	if(n > 0)
	{ 
		rev(n/2); 
		printf("%d",n%2);
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
