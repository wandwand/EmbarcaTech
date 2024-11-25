#include <stdio.h>
#include <math.h>

void raiz(double a, double b, double c); // Declaração da função

int main() {
    double a, b, c;

    // Coeficientes da equação
    a = 1;
    b = 0;
    c = 1;

    raiz(a, b, c); // Chamada da função
    return 0;
}

void raiz(double a, double b, double c) { // Definição da função
    double delta, raiz_01, raiz_02;

    delta = pow(b, 2) - 4 * a * c;

    if (delta >= 0) { // Tratamento para raízes reais
        raiz_01 = (-b + sqrt(delta)) / (2 * a);
        raiz_02 = (-b - sqrt(delta)) / (2 * a);
        printf("O valor de delta é: %.2lf\n", delta);
        printf("As raízes reais são: %.2lf e %.2lf\n", raiz_01, raiz_02);
    } else { // Tratamento para raízes complexas
        double parte_real = -b / (2 * a);
        double parte_imaginaria = sqrt(-delta) / (2 * a);
        printf("O valor de delta é: %.2lf\n", delta);
        printf("As raízes complexas são: %.2lf + %.2lfi e %.2lf - %.2lfi\n", 
               parte_real, parte_imaginaria, parte_real, parte_imaginaria);
    }
}
