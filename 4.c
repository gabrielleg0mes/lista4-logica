#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, m, outraNota;

    printf("Digite a nota que João lembra: ");
    scanf("%d", &a);

    printf("Digite a média das notas: ");
    scanf("%d", &m);

    outraNota = (2 * m) - a;

    printf("A outra nota é: %d\n", outraNota);

    system("pause");
    return 0;
}

