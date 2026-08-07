#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    printf("Aula 01 - Estrutura de Dados: #1 Variáveis e a Memória RAM.\n\n");

    int a = 10;
    int b, c;

    b = 20;
    c = a + b;

    printf("Valor da variável 'a' = %d.\n", a);
    printf("Valor da variável 'b' = %d.\n", b);
    printf("Valor da variável 'c' = %d.\n", c);
    printf("Endereco de memoria da vareável 'a' = %p. \n\n", &a);

    printf("&a = %p, a = %d.\n", &a, a);
    printf("&b = %p, b = %d.\n", &b, b);
    printf("&c = %p, c = %d.\n\n", &c, c);

    return 0;
}