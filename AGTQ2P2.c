#include <stdio.h>
#include <stdlib.h>
#define tam 15 

int main(){
	
	double vp[tam], va[tam];
	int pos, pos1, pos2, g;
	int vposA[4], vposP[4];
	double auxAGT, auxPFN;
	double menorAGT, menorPFN;
	int posMenorAGT, posMenorPFN;
	int w[tam], x[tam];
	
	printf("\nDigite as medias de PFN:\n");
	for(pos = 0; pos < tam; pos++){
		scanf(" %lf", &vp[pos]);
		}
    
    printf("\nDigite as medias de AGT:\n");
	for(pos = 0; pos < tam; pos++){
		scanf(" %lf", &va[pos]);
	}
	
	for(g = 0; g < tam; g++){
		menorPFN = vp[g];
		posMenorPFN = g;
		for (pos1 = g + 1; pos1 < tam; pos1++){
			if (menorPFN > vp[pos1]){
				menorPFN = vp[pos1];
				posMenorPFN = pos1;
			}
		}
	auxPFN = vp[g];
	vp[g] = vp[posMenorPFN];
	vp[posMenorPFN] = auxPFN;
	}
	
	for(g = 0; g < tam; g++){
		menorAGT = va[g];
		posMenorAGT = g;
		for (pos2 = g + 1; pos2 < tam; pos2++){
			if (menorAGT > va[pos2]){
				menorAGT = va[pos2];
				posMenorAGT = pos2;
			}
		}
	auxAGT = va[g];
	va[g] = va[posMenorAGT];
	va[posMenorAGT] = auxAGT;
	}
	
	printf("\nMaiores notas de PFN:\n");
	for (pos = 10; pos < tam; pos++){
		printf("%.1lf,", vp[pos]);
	}
	
	printf("\nMaiores notas de AGT:\n");
	for (pos = 10; pos < tam; pos++){
		printf("%.1lf,", va[pos]);
	}
	
	// não consegui fazer a letra c 
	
	return 0;
}

