#include <stdio.h>
int Func(int n)
{
	return n;
}

int main(int argc, char **argv)
{
	int b, a;
		scanf("%d", &a);
			for (int i = 1; i <= a; i++)
			{
				b += Func(a - (a - i));
			}
		printf("%d ", b);
	
	return 0;
}

