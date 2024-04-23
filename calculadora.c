// Calculadora Básica: crie operações de soma, subtração, multiplicação, divisão, potência e raiz.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  float valor1, valor2;
  int operador;
  float res;

  printf("Digite o primeiro valor: ");
  scanf("%f", &valor1);
  printf("Digite o segundo valor: ");
  scanf("%f", &valor2);

  if (valor2 == 0){
    printf("Os operadores possíveis para realizar os cálculos são: \n1 - Soma\n2 - Subtração\n3 - Multiplicação");
    }
  else
    printf("Os operadores possíveis para realizar os cálculos são: \n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Logaritmo\n6 - Radiciação");
  
  printf("Digite o operador: ");
  scanf("%d", &operador);
  
  while (operador == 0){
    printf( "Operador inválido, digite novamente: ");
    scanf("%d", &operador);
  }

  while (valor2 == 0 && operador >= 4 ){
    printf( "Operação não disponível para esses valores, digite novamente: ");
    scanf("%d", &operador);
  }

  if (operador == 1){
    res = valor1 + valor2;
  }

  if (operador == 2){
    res = valor1 - valor2;
  }

  if (operador == 3){
    res = valor1 * valor2;
  }

  if (operador == 4){
    res = valor1 / valor2;
  }

  printf("O resultado é: %.2f", res);
  
 int n = 0;

  if (operador == 6) {
    int expoente = 0; // Variável para armazenar o expoente

    printf("Digite o número que deseja calcular a raiz: ");
    scanf("%d", &n);
    printf("Digite o expoente da raiz: ");
    scanf("%d", &expoente); // Leia o valor do expoente

    double resultado = pow(n, 1.0 / expoente); // Use a função pow() para calcular a raiz com o expoente

    printf("O resultado é: %.2f\n", resultado); // Exiba o resultado
  }

  //log

  double base, n1;

    if (operador == 5) { printf("Insira a base do logaritmo: ");
    scanf("%lf", &base);

    printf("Insira o número: ");
    scanf("%lf", &n1);
                        
    double total = log(n1) / log(base);

    printf("Resultado: %.2lf\n", total);
       }


  return 0;
}
