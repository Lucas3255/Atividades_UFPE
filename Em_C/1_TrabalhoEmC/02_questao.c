#include <stdio.h>

int main(){
    float nota1 = 0;
    float nota2 = 0;
    float media = 0;
    float notaFinal = 0;

    printf("Digite a 1 nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2 nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\nMédia: %2.2f\n", media);

    if (media >= 7.00){
        printf("Aprovado, Parabéns!");
    }else if (media < 3.00){
        printf("Reprovado!");
    }else if (media >= 3.00 && media < 7.00) {
        printf("Você está na final. Estude um pouco mais.");
        printf("\nInforme a sua nota na final: ");
        scanf("%f", &notaFinal);

        if (notaFinal >= 5.00) {
            printf("Parabéns, Aprovado!");
        }else{
            printf("Reprovado! Estuda mais na próxima.");
        }
    }

    return 0;
}
