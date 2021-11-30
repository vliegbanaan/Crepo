#include <stdio.h>
int main()
{
    int keuze;
    printf("Geef nummer 1, 2 of 3 in. ");
    scanf("%f",&keuze);
    if(keuze == 1)                                          // als Keuze gelijk is aan 1
    {
        printf("Dit is keuze 1.");
    }
    else if(keuze = 2)
    {
        printf("Dit is keuze 2.");                          // als Keuze gelijk is aan 2
    }
    else if(keuze == 3)
    {
        printf("Dit is keuze 3.");                          // als Keuze gelijk is aan 3
    }
    else if(keuze < 0){                                     // Check op kleiner dan 0
        printf("Geef aub een positief nummer.");
    }
    else
    {
        printf("Nummer out of bounce, vul nummer 1, 2 of 3 in.");           //als er een totaal verkeerd nummer is gegeven.
    }       
    return(0);
}