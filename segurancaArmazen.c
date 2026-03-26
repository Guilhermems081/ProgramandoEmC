#include<stdio.h>

int main() {

    unsigned int estoque, estoqueMinimo = 1000;
    float umidade, temperatura;

    printf("Digite a quantidade de produtos no estoque: ");
    scanf("%u", &estoque);
    printf("Digite a umidade: ");
    scanf("%f", &umidade);
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if(temperatura > 30) {
        printf("A temperatura esta  elevada!\n");
    } else {
        printf("A temperatura esta dentro dos parâmetros.\n");
    }

    if(umidade > 50) {
        printf("A umidade esta elevada!\n");
    } else {
        printf("A umidade esta dentro dos parâmetros.\n");
    }

    if(estoque < estoqueMinimo) {
        printf("O estoque esta baixo!\n");
    } else {
        printf("Estoque esta normal.\n");
    }
    
}