#include <stdio.h>
 
  float adicao (float num1, float num2){
      return num1 + num2;
  }
  float subtracao (float num1, float num2){
      return num1 - num2;
  }
  float divisao (float num1, float num2){
      return num1 / num2;
  }
  float multiplicacao (float num1, float num2){
      return num1 * num2;
  }
 
 
int main()
{
    int op;
    float num1 = 0.0, num2 = 0.0, resultado;
    printf("\n\t###$$$  Calculadora  $$$###");
    printf("\nQual calculo deseja fazer hoje?\n");
    printf("\n(1) Soma\n");
    printf("\n(2) Subtração\n");
    printf("\n(3) Divisão\n");
    printf("\n(4) Multiplicação\n");
    printf("\n(0) Sair\n");
    printf("\n Escolha uma opção: ");
    scanf("%i", &op);
   
    switch (op){
        case 1:
            printf("Você selecionou Somar");
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = adicao (num1, num2);
            printf("\nO resultado do seu calculo é: %2.f", resultado);
            break;
       
        case 2:      
            printf("Você selecionou Subtração");
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = subtracao (num1, num2);
            printf("\nO resultado do seu calculo é: %2.f", resultado);
            break;
            
        case 3:
            printf("Você selecionou Divisão");
            printf("\nDigite o numero a ser dividido: ");
            scanf("%f", &num1);
            printf("Digite o numero divisor: ");
            scanf("%f", &num2);
            resultado = divisao (num1, num2);
            printf("\nO resultado do seu calculo é: %2.f", resultado);
            break;
            
        case 4:
            printf("Você selecionou Multiplicação");
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = multiplicacao (num1, num2);
            printf("\nO resultado do seu calculo é: %2.f", resultado);
            break;
            
        case 0:
            printf("\n\nSaindo...");
            break;

        default:
            printf("\n \nNúmero Inválido!!!\n");
            printf("\nLista de operação:");
            printf("\nDigite (1) para soma");
            printf("\nDigite (2) para subtração");
            printf("\nDigite (3) para divisão");
            printf("\nDigite (4) para multiplicação\n");
            printf("\nOu digite (0) para sair");
            break;

    }

   
    return 0;
}