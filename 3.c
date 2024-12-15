#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    if (a % b == 0 || b % a == 0) {
        printf("São Múltiplos\n");
    } else {
        printf("Não são Múltiplos\n");
    }

    system("pause");
    return 0;
}

