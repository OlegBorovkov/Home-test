#include <stdio.h>

 void rev(int n)
{
	if(n > 0)
	{ 
		rev(n/10); 
		printf("%d ",n%10);
	}
}
	 
int main(int argc, char *argv[] )
{
  int n;
	scanf("%d",&n);
		if(n == 0)
		{
			printf("%d ", 0);
		}
		else
  		{
			rev(n);
		}
    return 0;
}
