#include <stdio.h>

int main(void) {
    int a;
    printf("inserisci un numero: ");
    scanf("%d", &a);
    if (a > 0)
        printf(" il numero %d e' positivo", a);
    else
        printf(" il numero %d e' negativo", a);
    return 0;
}
