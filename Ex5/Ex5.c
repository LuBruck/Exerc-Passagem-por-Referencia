#include <stdio.h>

void pedir_nun(float *nun){
    printf("Coloque um numero:");
    scanf("%f", nun);
}

void fah_em_cels(float *temp){
    *temp = 5* (*temp -32)/9;
}

void apresentar_temp(float temp){
    printf("A temperatura dada, convertida em Celsius, e: %.2f°\n", temp);
}
int main(){
    float temperatura;

    pedir_nun(&temperatura);
    fah_em_cels(&temperatura);
    apresentar_temp(temperatura);

    return 0;
}