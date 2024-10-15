#include <stdio.h>

 void rev(int n)
{
	int b = 1;
	b = n%10;
		if(b != 0)
		{ 
			printf("%d ",b);
			rev(n/10); 
		}  
}
	 
int main(int argc, char *argv[] )
{
  int n;
	scanf("%d",&n);
		if(n ==0)
		{
			printf("%d ", 0);
		}
		else
  		{
			rev(n);
		}
    return 0;
}
