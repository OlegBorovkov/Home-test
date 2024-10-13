#include <stdio.h>
 
unsigned long long int  Func( int nmbr)
{
	if (nmbr == 1)
	{
	return 1;
    }
    else
    {
		return nmbr*Func(nmbr - 1);
	}
}
 
int main()
{
	int numb;
	scanf("%d", &numb);
	printf("%lld", Func(numb));
	return 0;
}
