#include <stdio.h>

void menu(int *opc){
    printf("\n1-Converter um valor de Celsius para Farenheit\n2-Converter um valor de Farenheit para Celsius\n0-Sair\n");
    scanf("%d", opc);
    
}
void pedir_nun(float *nun){
    printf("Coloque um numero:");
    scanf("%f", nun);
}

void fah_em_cel(float nun2, float *temp){
    *temp =5* (nun2 -32)/9;
}

void apresentar_tempCel(float temp2 , float temp){
    printf("A temperatura dada, %.2f Farenheit, convertida em Celsius, e: %.2f°\n", temp2 , temp);
}

void cels_em_fah(float nun2, float *temp){
    *temp = (9* nun2 /5) + 32;
}

void apresentar_tempFar(float temp2 , float temp){
    printf("A temperatura dada, %.2f Celsius, convertida em Farenheit, e: %.2f°\n", temp2 , temp);
}

int main(){
    float temperatura, temperatura2;
    int opc;

    do{
        menu(&opc);

        if (opc==1){
            pedir_nun(&temperatura);
            cels_em_fah(temperatura, &temperatura2);
            apresentar_tempFar(temperatura, temperatura2);
        }
        else if (opc==2){
            pedir_nun(&temperatura);
            fah_em_cel(temperatura, &temperatura2);
            apresentar_tempCel(temperatura, temperatura2);
        }
    }while(opc!=0);

    return 0;
}