#include <stdio.h>

void pedir_nun(float *nun){
    printf("Coloque um numero:");
    scanf("%d", nun);
}

void cels_em_fah(float *temp){
    *temp = (9* *temp /5) + 32;
}

void apresentar_temp(float temp){
    printf("A temperatura dada, convertida em Farenheit, e: %.2f°\n", temp);
}
int main(){
    float temperatura;

    pedir_nun(&temperatura);
    cels_em_fah(&temperatura);
    apresentar_temp(temperatura);

    return 0;
}