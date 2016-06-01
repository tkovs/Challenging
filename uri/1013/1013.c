#include <stdio.h>
#include <stdlib.h> // abs
 
int maior(int, int);
 
int main() {
    int a, b, c;
    
    scanf ("%d %d %d", &a, &b, &c);
    printf ("%d eh o maior\n", maior(a, maior(b,c)));
 
    return 0;
}


int maior(int a, int b) {
    return (a + b + abs(a-b)) / 2;
}
