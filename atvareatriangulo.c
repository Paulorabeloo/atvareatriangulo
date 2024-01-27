#include <stdio.h>

int main(){
    int base, altura, area;
    printf("Digite o valor da base e o valor da altura para calcular a area.\n");
    scanf("%i%i", &altura, &base);
    area = (base * altura) / 2;
    printf("O valor da area é: %i", area);
return 0;
}
