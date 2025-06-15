#include <stdio.h>

int main() {
    int idade = 0;
    printf("\n Digite sua idade: ");
    scanf("%d", &idade);
    if(idade < 18) {
        printf("\n Entrada proibida. \n");
    }
    else {
        printf("\n Entrada permitida. \n");
    }
    return 0;
}