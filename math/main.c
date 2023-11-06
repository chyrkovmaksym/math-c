#include <stdio.h>
#include <math.h>

int main() {
    double alpha, z1, z2;

    printf("Enter the value of alpha in radians: ");
    scanf("%lf", &alpha);

    z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);
    z2 = 2 * sqrt(2) * cos(alpha) * sin((M_PI / 4) * 2 * alpha);

    printf("z1 = %lf\n", z1);
    printf("z2 = %lf\n", z2);

    return 0;
}
