#include <stdio.h>
void omtrek(float *x, float *y) //berekent omtrek van cirkel met Pointer arg
{
    *y=(22 *( *x )) / (7); /* Het berekende aantal wordt opgeslagen in variable y */
}

int main()
{
    float z = 1,x;
    printf("Vul de diameter in: ");
    scanf("%f", &x);
        omtrek(&x, &z);
    printf("Omtrek = %f\n", z);
    return 0;
}