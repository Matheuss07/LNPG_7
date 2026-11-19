#include <stdio.h>

typedef struct {
    char nome[30];
    float n1, n2, n3;
} Aluno;

int main(void) {
    Aluno v[3] = {
        {"Ana", 9.0, 9.0, 9.0},
        {"Bia", 7.0, 8.0, 6.0},
        {"Caio", 5.0, 6.0, 7.0}
    };
    int i, melhor = 0;
    float media, maior;

    maior = (v[0].n1 + v[0].n2 + v[0].n3) / 3;

    for (i = 1; i < 3; i++) {
        media = (v[i].n1 + v[i].n2 + v[i].n3) / 3;
        if (media > maior) {
            maior = media;
            melhor = i;
        }
    }

    printf("Maior media: %s (%.2f)\n", v[melhor].nome, maior);

    return 0;
}
