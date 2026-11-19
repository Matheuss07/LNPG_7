#include <stdio.h>
#include <math.h>

struct ponto { double x, y; };

int main(void) {
    struct ponto a, b;
    double dx, dy, d;

    scanf("%lf %lf", &a.x, &a.y);
    scanf("%lf %lf", &b.x, &b.y);

    dx = b.x - a.x;
    dy = b.y - a.y;
    d = sqrt(dx * dx + dy * dy);

    printf("Distancia = %.2f\n", d);

    return 0;
}
