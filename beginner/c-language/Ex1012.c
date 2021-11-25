#include <stdio.h>

#define PI 3.14159

double area_triangle(double base, double height);
double area_circle(double radius);
double area_trapezium(double base_1, double base_2, double height);
double area_square(double side);
double area_rectangle(double side_1, double side_2);

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("TRIANGULO: %.3lf\n", area_triangle(a, c));
    printf("CIRCULO: %.3lf\n", area_circle(c));
    printf("TRAPEZIO: %.3lf\n", area_trapezium(a, b, c));
    printf("QUADRADO: %.3lf\n", area_square(b));
    printf("RETANGULO: %.3lf\n", area_rectangle(a, b));
    return 0;
}

double area_triangle(double base, double height) {
    return base * height / 2;
}

double area_circle(double radius) {
    return PI * radius * radius;
}

double area_trapezium(double base_1, double base_2, double height) {
    return (base_1 + base_2) * height / 2;
}

double area_square(double side) {
    return side * side;
}

double area_rectangle(double side_1, double side_2) {
    return side_1 * side_2;
}
