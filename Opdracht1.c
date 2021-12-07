#include <stdio.h>

int main(void){
    int Char;
    int Char_Counter = 0;
    FILE* file;

    if (!(file = fopen("test.txt", "r")))
    {
        printf("Onbruikbaar bestand. gebruik A.U.B. .TXT als format.");
        return 0;
    }

    while ((Char = fgetc(file)) != EOF)
    {
        if(Char == '\n')
        {
            Char++;
        }
        else
        {
            Char_Counter++;
        }
    }

    printf("Aantal karakters: %d\n", Char_Counter);     //%d voor int.
    fclose(file);

    return 0; 
}