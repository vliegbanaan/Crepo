#include <stdio.h>
// #include "opdracht1.exe"
int main()

{
    int keuze;
    printf("Geef nummer 1, 2 of 3 in. ");
    scanf("%d",&keuze);
    if(keuze == 1)                                          // als Keuze gelijk is aan 1
    {
        printf("Dit is keuze 1.");
    }
    else if(keuze == 2)                                      // als Keuze gelijk is aan 2
    {
        printf("Dit is keuze 2, ik heb geen idee hoe ik een andere main kan aanroepen.");
        // system("opdracht1.exe")                         
    }
    else if(keuze == 3)
    {
        printf("Dit is keuze 3.");                          // als Keuze gelijk is aan 3
    }
    else if(keuze < 0){                                     // Check op kleiner dan 0
        printf("Geef aub een positief nummer.");
        return 0;
    }
    else
    {
        printf("Nummer out of bounce, vul nummer 1, 2 of 3 in.");           //als er een totaal verkeerd nummer is gegeven.
    }       
    return(0);
}