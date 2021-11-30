#include <stdio.h>
void tweedecode(void);
int main()
{
    float keuze;
    printf("Geef nummer 1, 2 of 3 in. ");
    scanf("%f",&keuze);
    if(keuze == 1)
    {
        printf("Dit is keuze 1.");
    }
    else if(keuze == 2)
    {
        printf("Dit is keuze 2.");
        tweedecode();
    }
    else if(keuze == 3)
    {
        printf("Dit is keuze 3.");
    }
    else if(keuze < 0){
        printf("Geef aub een positief nummer.");
    }
    else
    {
        printf("Nummer out of bounce, vul nummer 1, 2 of 3 in.");
    }
    return(0);
}