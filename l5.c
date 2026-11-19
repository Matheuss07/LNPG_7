#include <stdio.h>
#include <stddef.h>

struct Ruim { char a; int b; char c; };
struct Bom  { int b; char a; char c; };

int main(void) {
    printf("Ruim sizeof=%zu\n", sizeof(struct Ruim));
    printf("a=%zu b=%zu c=%zu\n",
           offsetof(struct Ruim, a), offsetof(struct Ruim, b), offsetof(struct Ruim, c));

    printf("Bom sizeof=%zu\n", sizeof(struct Bom));
    printf("b=%zu a=%zu c=%zu\n",
           offsetof(struct Bom, b), offsetof(struct Bom, a), offsetof(struct Bom, c));

    return 0;
}
