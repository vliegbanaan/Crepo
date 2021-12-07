#include<stdio.h>
#include <stdlib.h>

int max;
int maxArrays(float *Num_1, float *Num_2, float *Resultaat){
    for(max = 0; max < 4; max++){
        if (Num_1[max] > Num_2[max]){
            Resultaat[max] = Num_1[max];        //Als index van Array_NumberOne dan die van ArrayNumberTwo geeft die Array_NumberOne weer.
        }else if (Num_2[max] > Num_1[max]){
            Resultaat[max] = Num_2[max];        // //Als index van Array_NumberTwo dan die van ArrayNumberOne geeft die Array_NumberTwo weer.
        }else{
            Resultaat[max] = (Num_1[max] + Num_1[max]) /2;    //bij gelijk vult hij de waarde in van wat gelijk is.
        }
        
    }
}

int i;
int main(){
    float Array_Number_One[4] = {4.1, 3.3, 0.5, 10.3};           //eerste array met waarden.
    float Array_Number_Two[4] = {4.1, 1.5, 0.5, 2.3};             //tweede array met waarden.
    float Array_Resultaat[4];                                   //array voor resultaat na vergelijking.
    float *Numb1; 
    float *Numb2;
    float *Resultaat;

    printf("Twee arrays worden vergeleken op de current waarde van de index. De hoogste waarde van de index...\n");
    printf("wordt in Array_Resultaat gezet.\n");
    
    printf("Indexen van Array 1: ");
    for(i = 0; i < 4; i++)
    {
        printf("%.1f ", Array_Number_One[i]);      //.f voor minder decimalen.
    }

    printf("\n");

    printf("Indexen van Array 2: ");
    for(i = 0; i < 4; i++)
    {
        printf("%.1f ", Array_Number_Two[i]);             //.f voor minder decimalen.
    }
    maxArrays(Array_Number_One, Array_Number_Two, Array_Resultaat);

    printf("\n");

    printf("Array_Resultaat:     ");
    for(i = 0; i < 4; i++)
    {
        printf("%.1f ", Array_Resultaat[i]);               //.f voor minder decimalen.
    }
    
    return 0;
}