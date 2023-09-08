#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define tam 15

int main (){
	double A, media, mediaFinal, percentFinal;
	int pos = 0, exame, percent;
	
	printf("\nDigite as medias de AGT:\n");
	
	while (pos < tam){
	scanf(" %lf", &A);
	
	media = media + A;
	
	   if (A < 7.0){
	   	percent = percent + 1;
	   }
	
	   if (A > 1.7 && A < 7.0){
		exame = exame + 1;
	   }
	   
	pos++;
	}
	
	mediaFinal = media/15;
	percentFinal = (percent * 100)/15;
	
	printf("\nAGT-----------\n");
	printf("\nPorcentagem de medias < 7: %.0lf%%\n", percentFinal);
	printf("\nMedia geral desse grupo: %.2lf\n", mediaFinal);
	printf("\nTotal estudantes em exame: %i\n", exame);
