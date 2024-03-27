#include <stdio.h>

void pedir_nun(int *nun){
    printf("Coloque um numero:");
    scanf("%d", nun);
}

void par_impar(int nun){
    if (nun%2==0){
        printf("O numero %d e par\n", nun);
    }
    else{
        printf("O numero %d e impar\n", nun);
    }
}

int main(){
    int numero;

    pedir_nun(&numero);
    par_impar(numero);
    return 0;
}