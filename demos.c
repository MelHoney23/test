/*Comentário adequado */
#include <stdio.h>
int value;
main( )
{
 int somando = 20;
 value = 350;
 value = value + somando;
 {
 int vezes;
 value = value + vezes * somando;
 {
 double Imposto;
 Imposto = .12 * value;
 printf(“Valor do Imposto = %lf \n”,Imposto);
 }
 value = 0;
 }
 printf(“Fim do programa.\n”)