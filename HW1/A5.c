#include <stdio.h>

int main(void)
{
int a,b,c;
float d;
scanf("%d%d%d", &a, &b, &c);
d = 1.0*(a + b + c) / 3;
printf("%.2f", d);

	return 0;
}

