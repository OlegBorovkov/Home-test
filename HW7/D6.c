#include <stdio.h>
#define MAX 100
FILE * string_reverse_output( const char *s, FILE *fp )
{
    if ( *s )
    {
        string_reverse_output( s + 1, fp );
        fputc( *s, fp );
    }
    
    return fp;
}

int main(int argc, char **argv)
{
char name[MAX];
	fgets(name, MAX, stdin);
    fputc( '\n', string_reverse_output( name, stdout ) );
    return 0;
}
