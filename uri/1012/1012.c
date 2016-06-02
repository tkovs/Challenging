#include <stdio.h>

float triangulo(float, float);
float circulo(float);
float trapezio(float, float, float);
float quadrado(float);
float retangulo(float, float);

const float pi = 3.14159;

int main(void) {
    float a, b, c;

    scanf ("%f %f %f", &a, &b, &c);
    printf ("TRIANGULO: %.3f\n", triangulo(a, c));
    printf ("CIRCULO: %.3f\n", circulo(c));
    printf ("TRAPEZIO: %.3f\n", trapezio(a, b, c));
    printf ("QUADRADO: %.3f\n", quadrado(b));
    printf ("RETANGULO: %.3f\n", retangulo(a, b));

    return 0;
}

float triangulo(float base, float height) {
    return (base * height) / 2;
}

float circulo(float area) {
    return area * area * pi;
}

float trapezio(float base1, float base2, float height) {
    return ((base1 + base2) / 2) * height;
}

float quadrado(float side) {
    return side * side;
}

float retangulo(float side1, float side2) {
    return side1 * side2;
}

