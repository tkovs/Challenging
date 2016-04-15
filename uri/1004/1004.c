#include <stdio.h>

int main(void) {
    int a = 1, b = 1, c = 1;
    int n, i;

    scanf ("%d", &n);

    for (i = 0; i < n; i++) {
        printf ("%d %d %d\n", a, b++, c++);
        printf ("%d %d %d\n", a++, b, c);

        b = a * a;
        c = a * b;
    }

    return 0;
}
