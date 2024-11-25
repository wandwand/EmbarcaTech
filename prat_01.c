#include <stdio.h>
#include <math.h>

int main()
{
   double a, b, c, delta;
   double raiz_01, raiz_02;

   printf("Digite os coeficientes da eq de 2 grau (a, b, c): ");
   scanf("%lf %lf %lf", &a, &b, &c); // Corrigido: adicionados os '&' nos argumentos

   delta = pow(b, 2) - 4 * a * c;
   raiz_01 = -b + pow(delta,0.5);
   raiz_02 = -b - pow(delta,0.5);
   printf("O valor de delta eh: %.2lf\n", delta);
   printf("O valor das raizes eh: %.2lf\n e %.2lf\n", raiz_01,raiz_02);
   return 0;
}
