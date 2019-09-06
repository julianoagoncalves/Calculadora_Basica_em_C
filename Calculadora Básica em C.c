#include <stdio.h>

void main(){

float n1, n2, resultado;
char operacao;

printf("|CALCULADORA BASICA|\n--------------------");
printf("\n\nDigite o primeiro numemo: ");
scanf("%f",&n1);
printf("\nDigite o segundo numero: ");
scanf("%f",&n2);
printf("\nSelecione a operacao desejada + , - , * , / : ");
scanf("%s",&operacao);

switch(operacao){
case '+': resultado = n1 + n2;
break;

case '-': resultado = n1 - n2;
break;

case '*': resultado = n1 * n2;
break;

case '/': if (n2==0){
            printf("\nNao existe divisao por 0");
        }
        else{ resultado = n1 / n2;
        }
break;

default: printf("\nOpcao invalida");
break;
}

printf("\nResultado: %.2f",resultado);

}
