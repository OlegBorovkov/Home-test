#include <stdio.h>

int main(void)
{
int a,b,c,d;
scanf("%d%d", &a, &b);
if(a > b) {
	c = b;
	d = a;
}
else{
	c = a;
	d = b;
}
printf("%d %d", c, d);

	return 0;
}

