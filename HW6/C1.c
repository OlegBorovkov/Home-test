#include <stdio.h>
#include <stdlib.h>

int Modul (int a)
{
	int c = abs(a);
	return c;
}
void Print (int a)
{
	printf("%d", a);
}
int main()
{
	int a,b;
     scanf("%d", &a);
	 b = Modul(a);
	 Print(b);
	 
	return 0;
}


