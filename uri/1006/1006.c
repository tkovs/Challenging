#include <stdio.h>

int main(void) {
    float a, b, c;
    float answer;
    
    scanf ("%f %f %f", &a, &b, &c);
    answer = a * 2;
    answer += b * 3;
    answer += c * 5;
    
    printf ("MEDIA = %.1f\n", answer / 10);
    
    return 0;
}
