#include <stdio.h>
#include <math.h>

int main(){  
int num1, num2, operacao;
    printf("\t\tCalculadora\n");
    printf("Escolha dois numeros inteiros a serem processados:\n ");
    scanf("%i %i", &num1, &num2);
    printf("Qual operacao voce deseja efetuar?\n Digite o numero correspondente:\n");
      printf("1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Potenciacao\n");
  scanf("%d", &operacao);

  switch(operacao) {
    case 1: printf("%d", num1+num2); break;
    case 2: printf("%d", num1-num2); break;
    case 3: printf("%d", num1*num2); break;
    case 4: printf("%d", num1/num2); break;
    case 5: printf("%f", pow(num1,num2)); break;
    default: printf("\nEssa operação não existe.\n"); break;
  }

    return 0;
}
