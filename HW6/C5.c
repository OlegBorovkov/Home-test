#include <stdio.h>

int Summ(int x)
{
	int f = 0;
	for(int i = 0; i <= x; i++) 
	{
		f = f + i;
	}
	return f;
	
}

void Print (int a)
{
	printf("%d", a);
}
int main()
{
	int a, b;
	scanf("%d", &a);
	b = Summ(a);
	Print(b);
	return 0;
}


