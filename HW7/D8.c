#include <stdio.h>

 void rev1(int n, int m)
{
	if(n >= m)
	{ 
		printf(" %d",n);	
		rev1(n - 1, m); 
	}
}	
void rev2 (int n, int m)
{	
	if(n <= m) 
	{ 
		printf(" %d",n);
		rev2(n + 1, m); 
		
	}
	
}
	 
int main(int argc, char *argv[] )
{
  int n, m;
	scanf("%d %d",&n ,&m);
		if(n == 0)
		{
			printf("%d", 0000);
		}
		else if(n > m)   
		{
			rev1(n, m);
		}
		else 
		{
			rev2(n,m);
		}
    return 0;
}
