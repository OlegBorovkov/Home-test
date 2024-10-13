#include <stdio.h>

int Middle(int a, int b)
{
	int c;
	c = (a + b)/2;
		
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
	 c = Middle(a, b);
	 Print(c);
	 
	return 0;
}


