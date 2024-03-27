#include <stdio.h>

void pedir_nun(int *nun){
    printf("Coloque um numero:");
    scanf("%d", nun);
}

void qual_numero_maior(int a, int b){
    if(a>b){
        printf("\nO numero %d e maior que o numero %d", a, b);
    }
    else if(a<b){
        printf("\nO numero %d e maior que o numero %d", b, a);
    }
    else{
        printf("Os numeros são iguais");
    }
}

int main(){
    int numero1, numero2;

    pedir_nun(&numero1);
    pedir_nun(&numero2);
    qual_numero_maior(numero1, numero2);
    return 0;
}