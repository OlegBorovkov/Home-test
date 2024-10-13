#include <stdio.h>
#include <stdint.h>

unsigned long long int Summ(int x)
{
	unsigned long long int f = 1;
	for(int i = 2; i <= x; i++) 
	{
		f = f*2;
	}
	return f;
	
}

void Print (unsigned long long int a)
{
	printf("%llu", a);
}
int main()
{
	int a;
	unsigned long long int b;
	scanf("%d", &a);
	b = Summ(a);
	
	Print(b);
	return 0;
}


