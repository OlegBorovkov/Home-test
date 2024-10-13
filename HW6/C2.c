#include <stdio.h>

int Stepen(int a, int b)
{
	int i, c = 1;
	if(b != 0)
	{
		for(i = 0; i < b; i++)
		{
			c = c*a;
		}
	}
	else
	{
		a = 1;
	}	 
		
	return c;
}
void Print (int a)
{
	printf("%d", a);
}
int main()
{
	int a,b,c;
     scanf("%d %d", &a, &b);
	 c = Stepen(a, b);
	 Print(c);
	 
	return 0;
}


