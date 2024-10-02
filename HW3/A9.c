#include <stdio.h>

int main(void)
{
int a,b,c,d,e,f,g,h,i;
scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
if(a > b) {
	f = a;
}
else{
	f = b;
}
if(c > d) {
	g = c;
}
else
{
	g = d;
}
if(f > g){
	h = f;
}
else
{
	h = g;
}
if(h > e) {
	i = h;
}
else{
	i = e;
}

printf("%d", i);

	return 0;
}

