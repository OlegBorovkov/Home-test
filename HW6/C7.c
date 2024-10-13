#include <stdio.h>
 
void Func( int number, int p)
{
	if (number != 0)
	{
		Func(number /p, p);
		printf("%i", number % p);
    }
    else
    {
		printf("%i", 0);
	}
}
 
int main()
{
	int numb, pe;
	scanf("%d %d", &numb, &pe);
	Func(numb, pe);
	return 0;
}
