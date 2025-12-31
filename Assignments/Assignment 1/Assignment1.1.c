#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14f;
    char c = 'A';
    double d = 25.98765;

    printf("Value of a (int)    = %d,   Size = %lu bytes\n", a, sizeof(a));
    printf("Value of b (float)  = %.2f, Size = %lu bytes\n", b, sizeof(b));
    printf("Value of c (char)   = %c,   Size = %lu bytes\n", c, sizeof(c));
    printf("Value of d (double) = %.5lf, Size = %lu bytes\n", d, sizeof(d));

    return 0;
}
