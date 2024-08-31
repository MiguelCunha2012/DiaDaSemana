#include <stdio.h>

int main() {
    int n;
    while (1) {
        printf("Digite um numero e ele mostrara o dia da semana: ");
        scanf("%d",&n);
        switch (n) {
            case 1:
                printf("Domingo\n");
            break;
            case 2:
                printf("Segunda\n");
            break;
            case 3:
                printf("Terça\n");
            break;
            case 4:
                printf("Quarta\n");
            break;
            case 5:
                printf("Quinta\n");
            break;
            case 6:
                printf("Sexta\n");
            break;
            case 7:
                printf("Sabado\n");
            break;
            default:
                printf("Numero invalido, insira um numero entre 1 e 7.\n");
            continue;
        }
        break;
    }
    return 0;
}