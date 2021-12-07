#include <stdio.h>
typedef struct
{
    char naam[30];      //30 karakters voor het geval iemand een tropische naam heeft, wel nadeel dat als iemand tim heet meer geheugen wordt gebruikt.
    int instroomjaar;
} opleiding;
    
typedef struct mainstruct
{
    char naam[30];    //30 karakters voor het geval iemand een tropische naam heeft, wel nadeel dat als iemand tim heet meer geheugen wordt gebruikt.
    int leeftijd;
    opleiding opleiding;
}mainstruct; 

int main()
{
    int i;
    struct mainstruct vragenlijst[4];
    printf("Antwoord de vragen en zie ze terug in een lijst.\n");
    for (i=0; i<1; i++)
    {
        printf("Wat is uw voornaam? \n"), scanf("%s", &vragenlijst[i].naam);        //Vraag en scan op voornaam.
        
        printf("Wat is uw leeftijd? \n"), scanf("%d", &vragenlijst[i].leeftijd);    //Vraag en scan op leefttijd

        printf("Welke studie volgt u?"), scanf("%s", &vragenlijst[i].opleiding.naam);   //Vraag en scan voor opleiding.

        printf("Wat is uw instroomjaar?"), scanf("%d", &vragenlijst[i].opleiding.instroomjaar);     //vraag en scan voor instroomjaar.
    }

    printf("\n");
    printf("Overzicht van wat u heeft ingevuld:\n");
    for(i=0; i<1; i++)
    {
        printf("Voornaam: %s\n",vragenlijst[i].naam);             //%s voor String.
        printf("Leeftijd: %d\n",vragenlijst[i].leeftijd);         //%d voor Int.
        printf("Studie: %s\n",vragenlijst[i].opleiding.naam);     //%s voor String.
        printf("Instroomjaar Studie: %d\n",vragenlijst[i].opleiding.instroomjaar);      //%d voor Int.
    }
    return 0;
}