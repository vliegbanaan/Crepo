#include <stdio.h>
void print_function( char letter );
int ctr;
int main( void )
{
char star = '*';
char dash = '-';
for (ctr = 0 ; ctr < 10; ctr++ )
{
print_function( star );
print_function( dash );
printf("\n");
}
return 0;
}

/* hier een loop voor maken, tijdens die tot 10 telt, in de print function moet na het printen 1 worden toegekend aan de eerste loop
bij 10 moet die stoppen. ik moet nog verzinnen hoe */
void print_function ( char letter );
{
for ( ctr = 0; ctr < 9; ctr++) 
{
printf("%c", letter);
}
}
