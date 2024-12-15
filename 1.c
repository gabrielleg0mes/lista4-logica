#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, resultado;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    resultado = n % 2;

    printf("O resultado do somatório é: %d\n", resultado);

    system("pause");
    return 0;
}
