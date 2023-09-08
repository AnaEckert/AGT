#include <stdio.h>

int main()
{
char sigla, valida= 'N', vTGS = 'N', vAGT = 'N', mALI = 'N', fGAN = 'N', mCDI = 'N', fICD = 'N', vCDI = 'N', mECC = 'N';
    int fase, cred, disc;
    cred = 0;
    disc = 0;
   
    printf ("\nDigite seu curso\n") ;
    scanf ( " %c" , &sigla) ;
    if ( sigla == 'C' ){
    printf ("\nDigite sua fase\n") ;
    scanf ( "%i" , &fase) ;
    switch (fase){
        case 1:
            disc = 6;
            cred = 24;
            printf ("\nVai tentar validar? S/N") ;
            scanf (" %c" , &valida) ;
            if ( valida == 'S') {
            printf ("\nVai validar AGT? S/N") ;
            scanf (" %c" , &vAGT) ;
            printf ("\nVai validar TGS? S/N") ;
            scanf (" %c" , &vTGS) ;
            }
            printf ("\n1a fase Cred.Teo Cred.Prat  Pre  ") ;
            printf ("\nAGT0001  2        2           -  ") ;
            printf ("\nGAN0001  4        -           -  ") ;
            printf ("\nICD0001  4        -           -  ") ;
            printf ("\nLMA0001  2        2           -  ") ;
            printf ("\nPFN0001  2        2           -  ") ;
            printf ("\nTGS0001  2        2           -  ") ;
            printf("\nTotal de créditos: %i" , cred);
            printf("\nTotal de disciplinas: %i" , disc);
            printf("\nPedidos de validação:");
            if (vAGT == 'S'){
            printf("\nAGT");
            }
            if (vTGS == 'S'){
            printf("\nTGS");  
            }
            break;
        case 2:
        printf ("\nVai fazer ALI?");
        scanf (" %c" , &mALI);
        printf("\nJá fez GAN?");
        scanf(" %c" , &fGAN);
            if (mALI == 'S' && fGAN == 'S') {
                disc = disc + 1;
                cred = cred + 4;
            }
            else {
                disc = disc + 0;
                cred = disc + 0;
            }
        printf("\nVai fazer CDI?");
        scanf(" %c" , &mCDI);
           if (mCDI == 'N') {
            disc = disc + 0;
            cred = cred + 0;
            printf("\nVai validar CDI?");
            scanf(" %c" , &vCDI);
                }
        if (mCDI == 'S') {
            printf("\nJá fez ICD?");
            scanf(" %c" , &fICD);
            if (mCDI == 'S' && fICD == 'S'){
                disc = disc + 1;
                cred = cred + 6;
            }
            else {
                disc = disc + 0;
                cred = cred + 0;
            }
        }
        printf("\nVai fazer ECC?");
        scanf(" %c" , &mECC);
        if (mECC == 'S'){
            disc = disc + 1;
            cred = cred + 4;
        }
        else {
        disc = disc + 0;
        cred = cred + 0;
        }
       
        printf ("\n1a fase Cred.Teo Cred.Prat  Pre  ") ;
        printf ("\nALI0001  4        0         GAN  ") ;
        printf ("\nCDI1001  6        0         ICD  ") ;
        printf ("\nECC0001  2        2           -  ") ;
        printf("\nTotal de créditos: %i" , cred);
        printf("\nTotal de disciplinas: %i" , disc);
        if (vCDI == 'S'){
            printf("\nPedidos de validação: CDI");
        }
        if (mCDI == 'N' && mALI == 'N' && mECC == 'N') {
            printf("\nMatrícula trancada. Escolha ao menos uma disciplina!");
        }
        if (fGAN == 'N' && fICD == 'N' && mECC == 'N') {
            printf("\nMatrícula trancada. Escolha ao menos uma disciplina!");
        }
        break;
       
     return 0;
    }
   }
}
