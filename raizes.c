/*
Universidade de Brasilia
Nome: Alexandry Moreira Alves Pinto
Disciplina: Programação para sistemas físicos.
Exercício: Desenvolver um software em C que descubra as raízes de uma função linear.
Editor de texto usado: Sublime Text 2 (Windows).
*/

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{

	float a,b,x;
	FILE *entrada,*saida;

   	entrada=fopen("coeficiente.dat","r");

   	fscanf(entrada,"%f",&a);
    fscanf(entrada,"%f",&b);

    fclose(entrada);

    x=(-b)/a;

    printf("As raizes da funcão linear dada é: %f\n",x);


    saida=fopen("raizes.dat","w");
    fprintf(saida,"As raizes da funcão linear dada é: %lf\n",x);
    fclose(saida);

return 0;
}