#include <stdio.h>
#include <string.h>

void menuPc();
void menuAlim();
void menuCateg();
int ValorPc(int pc);

int main()
{
   char nome[250], end[250], estado[10];
   float vfinalpc, valorFinal, vpalim = 0;
   float icms;
   int cep, pc, categ, frete, alim, quant;
   int ainda_quero_comprar = 1, ainda_nao_comprei_um_computador = 0; // 1 = verdadeiro, 0 = falso
   int aux = 0, pos = 0;
   int vAlim[20];

   //Nome
   printf("\nDigite seu nome:\n");
   fgets(nome, 250, stdin);

   //Endereço
   printf("\nDigite seu endereço: rua e numero\n");
   fgets(end, 250, stdin);
   
   printf("\nDigite o seu estado:\n");
   fgets(estado, 10, stdin);


   printf("\nDigite seu CEP:\n");
   scanf(" %i", &cep);
   
   
   while(ainda_quero_comprar){
    	menuCateg();
    	scanf(" %i", &categ);

   	switch (categ){
      	 
       	case 0:
            	ainda_quero_comprar = 0;
           	 
            	break;
           	 
       	case 1:
            	if(ainda_nao_comprei_um_computador == 0){
          	 
            	ainda_nao_comprei_um_computador++;
      	 
           	menuPc();
           	scanf(" %i", &pc);
           	 
        	vfinalpc = ValorPc (pc) + aliquota + icms + frete;
       	} //chave do if, antes do break!
      	 
        	break;
   	 
    	case 2:
       	
       	menuAlim();
       	scanf(" %i", &alim);
       	
       	vAlim[aux] = alim;
    
       	switch (alim){
            	case 1:
               	printf("\nDiga quantas unidades deseja:\n");
               	scanf(" %i", &quant);
               	vpalim = vpalim + (57.04 * quant);
               	aux++;
               	break;
   	 
            	case 2:
               	printf("\nDiga quantas unidades deseja:\n");
               	scanf(" %i", &quant);
               	vpalim = vpalim + (193.90 * quant);
               	aux++;
               	break;
   	 
            	case 3:
                	printf("\nDiga quantas unidades deseja:\n");
                	scanf(" %i", &quant);
                	vpalim = vpalim + (1.88 * quant);
                	aux++;
                	break;
   	 
            	case 4:
                	printf("\nDiga quantas unidades deseja:\n");
                	scanf(" %i", &quant);
                	vpalim = vpalim + (6.57 * quant);
                	aux++;
                	break;
   	 
            	case 5:
                	printf("\nDiga quantos quilos deseja:\n");
                	scanf(" %i", &quant);
                	vpalim = vpalim + (8.15 * quant);
                	aux++;
                	break;
       	}
   	}
   }
   
   valorFinal = vpalim + vfinalpc;
   
    	if (strcmp(estado, "SP") == 0){
        	icms = 0;
           	 
        	} else {
           	 
        	icms = 0.05 * valorFinal;
        	}
   	 
        	if (valorFinal > 1500){
           	 
        	frete = 0;
           	 
        	} else {
           	 
        	frete = 80;
        	}
   
   // saída
   printf("\nSaida...........\n");
   printf("\nNome: %s", nome);
   printf("\nPedido:\n");
      	if (pc == 1){
        	printf("Apple.....R$9.599,00\n");
      	}
      	if (pc == 2){
        	printf("PC Intel Core.....R$1.589,00\n");
      	}
      	if (pc == 3){
        	printf("Computador Intel Core.....R$ 1494,00\n");
      	}
      	if (pc == 4){
        	printf("PC Gamer.....R$2.748,00\n");
      	}
      	if (pc == 5){
        	printf("PC Intel Core 480 gb.....R$1.693,00\n");
      	}
      	
    for(pos = 0; pos < 20; pos++){
        if (vAlim[pos] == 1){
        	printf("Cafe Santa Monica.....R$ 57,04\n");
      	}
      	if (vAlim[pos] == 2){
        	printf("Energetico Red Bull.....R$ 193,90\n");
      	}
      	if (vAlim[pos] == 3){
        	printf("Popcorn Micro Natural Yoki.....R$1.494,00\n");
      	}
      	if (vAlim[pos] == 4){
        	printf("Creme de Leite Nestle Tradicional.....R$ 6,57\n");
      	}
      	if (vAlim[pos] == 5){
        	printf("Laranja Bahia Importada.....R$ 8,15\n");
      	}
    }
   
	if (frete == 0){
   	printf("\nFrete: gratis\n");
	} else {
   	printf("\nFrete: %i", frete);
	}
    
    if (pc == 1){
        printf("\nAliquota: R$959,00\n");
    }
   	 
	printf("\nTotal da nota: %.2f\n", valorFinal);
    
   	 
	printf("\nEndereço de entrega:\n");
	printf("%s\n", end);
	printf("CEP: %i\n", cep);
	printf("%s\n", estado);

	return 0;
 }


void menuPc (){
    printf("\nOpcoes de computador:\n");
    printf("(1) Apple MacBook Pro 13: R$ 9599,00\n");
    printf("(2) PC CPU Intel Core I5: R$ 1589,00\n");
    printf("(3) Computador Intel Core I5 8gb 240gb SSD: R$ 1494,00\n");
    printf("(4) PC Gamer Completo: R$ R$ 2748,00\n");
    printf("(5) PC Intel Core I5, 8GB RAM DDR3, HD SSD 480 GB: R$ 1693,00\n");
}

void menuAlim (){
    printf("\nOpcoes de alimento:\n");
    printf("(1) Cafe Santa Monica, 1kg: R$ 57,04\n");
    printf("(2) Energetico Red Bull, pacote 24 latas: R$ 193,90\n");
    printf("(3) Popcorn Micro Natural Yoki 50g: R$ 1,88\n");
    printf("(4) Creme de Leite Nestle Tradicional, 300g: R$ 6,57\n");
    printf("(5) Laranja Bahia Importada: R$ 8,15/kg\n");
}

void menuCateg (){
    printf("\nCategoria:\n");
    printf("(0) Finalizar Compra\n");
    printf("(1) Computador\n");
    printf("(2) Alimentos\n");
}

int ValorPc (int pc){
    
    int vppc;
    switch (pc){
            	case 1:
               	vppc = 9599;
               	break;
           	 
            	case 2:
               	vppc = 1589.16;
               	break;
   	 
            	case 3:
               	vppc = 1494.80;
               	break;
   	 
            	case 4:
               	vppc = 2748;
               	break;
   	 
            	case 5:
               	vppc = 1693.80;
               	break;
   	 
          	}
    
    return vppc;
}





