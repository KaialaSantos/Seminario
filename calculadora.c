// Calculadora Básica: crie operações de soma, subtração, multiplicação, divisão, potência e raiz.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int operação;
  double base, nlog, total;

  printf ("1: Adição \n2: Subtração \n3: Multiplicação \n4: Divisão \n5: Potenciação \n6:Logaritmo ");
  scanf("%d", (&operação));

  if (operação == 6) {
    printf("Insira a base do logaritmo: ");
    scanf("%lf", &base);

    printf("Insira o número: ");
    scanf("%lf", &nlog);

    double total = log(n1) / log(base);

    printf("Resultado do log: %.2lf \n", total);
  }
  
  return 0;
}
