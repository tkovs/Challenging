#include <stdio.h>
 
int main() {
    char nome[50];
    float a, b;
    
    scanf ("%s", nome);
    scanf ("%f %f", &a, &b);
    
    printf ("TOTAL = R$ %.2f\n", a + ((b / 100) * 15));
 
    return 0;
}
