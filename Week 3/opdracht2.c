#include <stdio.h>
#include <string.h>

int main(){
    char input[15];
    printf("Geeft een input om te zien hoeveel karakters er in zitten!\n");
    gets(input);
    printf("Er zitten %d karakters in je opgegeven input!", strlen(input));
    return 0;
}