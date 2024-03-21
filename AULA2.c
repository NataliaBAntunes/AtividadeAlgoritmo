#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 int num1=4, num2=8, total;
 total = num1 + num2;
 printf("O valor total e: %d e o primeiro valor e: %d e o segundo valor e: %d \n",total,num1,num2);
 
 
 /*Exemplo 2*/
 

 int Total, Num1, Num2;
 printf ("Digite o valor 1:");
 scanf ("%d", &Num1);
 printf ("Digite o valor 2: ");
 scanf ("%d", &Num2);
 Total = Num1+Num2;
 printf ("A soma dos dois valores digitados e: %d" ,Total);
	return 0;
 
 
}
