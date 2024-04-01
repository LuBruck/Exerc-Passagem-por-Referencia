#include <stdio.h>

void pedir_salario(float *nun){
    printf("Coloque o salario:");
    scanf("%f", nun);
}

void cal_desvalorizacao(float salario_atual, float *salario_ajustado ){
    *salario_ajustado = 110.67 * salario_atual / 100;
}

void perca_aquisitiva(float salario_atual, float salario_ajustado, float *perca){
    *perca=salario_ajustado - salario_atual;
}

void apresentar(float salario_ajustado, float perca){
    printf("O seu salario novo ajustado teria o valor de: %.2f. E vc teve uma perca aquisitiva de %.2f reais\n", salario_ajustado, perca);
}

int main(){
    float salario_atual, salario_ajustado , diferenca;
    pedir_salario(&salario_atual);
    cal_desvalorizacao(salario_atual, &salario_ajustado);
    perca_aquisitiva(salario_atual, salario_ajustado, &diferenca);
    apresentar(salario_ajustado, diferenca);
    return 0;
}