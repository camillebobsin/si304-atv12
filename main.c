#include <stdio.h>
#include <math.h>
int main(){  
    float num1, num2;
    int operacao;
    
        printf("\t\tCalculadora\n");
        printf("Escolha dois numeros reais a serem processados:\n ");
        scanf("%f %f", &num1, &num2);
        printf("Qual operacao voce deseja efetuar?\n Digite o numero correspondente:\n");
      printf("1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Potenciacao\n");
        scanf("%d", &operacao);

    switch(operacao) {
        case 1: printf("%f", num1+num2); break;
        case 2: printf("%f", num1-num2); break;
        case 3: printf("%f", num1*num2); break;
        case 4: printf("%.2f", num1/num2); break;
        case 5: printf("%f", pow(num1,num2)); break;
        default: printf("\nEssa operação não existe.\n"); break;
    }

    return 0;
}

