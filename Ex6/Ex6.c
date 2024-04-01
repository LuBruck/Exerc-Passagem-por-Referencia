#include <stdio.h>

void pedir_nun(float *nun){
    printf("Coloque um numero:");
    scanf("%f", nun);
}

void cels_em_fah(float nun2, float *temp){
    *temp =5* (nun2 -32)/9;
}

void apresentar_temp(float temp2 , float temp){
    printf("A temperatura dada, %.2f Farenheit, convertida em Celsius, e: %.2f°\n", temp2 , temp);
}
int main(){
    float temperatura, temperatura2;

    pedir_nun(&temperatura2);
    cels_em_fah(temperatura2, &temperatura);
    apresentar_temp(temperatura2, temperatura);

    return 0;
}