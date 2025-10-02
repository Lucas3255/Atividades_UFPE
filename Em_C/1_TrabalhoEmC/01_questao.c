#include <stdio.h>

int main(){
    int num[10];
    int i = 0, zeros = 0;
    int positivos = 0;
    int negativos = 0;

    for (i = 0; i <= 9; i++) {
        printf("Digite o %d número: ", i+1);
        scanf("%d", &num[i]);

        if (num[i] > 0) {
            positivos++;
        }else if (num[i] < 0){
            negativos++;
        }else{
            zeros++;
        }
    }

    printf("Você digitou...\n");
    printf("Positivos: %d", positivos);
    printf("Negativos: %d", negativos);
    printf("Zeros: %d", zeros);

    return 0;
}