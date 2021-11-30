#include <stdio.h>
void print_function( char letter );
int i;                                 // int i declared.
int ctr;
int main( void )
{
char star = '*';
char dash = '-';
for (i = 0; i <10; i++)                  // for loop die ervoor zorgt dat de print functie 10x wordt uitgevoerd.
for (ctr = 0 ; ctr < 10; ctr++ )
{
print_function( star );
print_function( dash );
printf("\n");
}
return 0;
}
void print_function ( char letter )
{
for ( ctr = 0; ctr < 9; ctr++) 
{
printf("%c", letter);
}
}
