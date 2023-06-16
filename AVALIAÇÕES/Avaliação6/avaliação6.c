#include <stdio.h>
#include <stdlib.h>

void Imprimir(int** matriz, int tamanho){
    
    for (int i=0;i<tamanho;i++){
        for(int j=0;j<tamanho;j++){
            printf("%d\t", matriz[i][j]);
            

        }
            printf("\n");
    }

}







void Valor_matriz (int**matriz, int tamanho){

    for (int i=0;i<tamanho;i++){
        for(int j=0;j<tamanho;j++){
            printf("digite o indice %d, %d", i,j); scanf("%d", &matriz[i][j]);
            

        }

    }


}

void Alocar_matriz (int**ptrmatriz, int tamanho){
    
    
    for (int i=0;i<tamanho;i++)
    { ptrmatriz [i] = malloc(sizeof(int)*tamanho);}


}

void Soma_matrizes(int**matriza, int**matrizb, int**matrizc, int tamanho){
    
    for (int i=0;i<tamanho;i++){
        for(int j=0;j<tamanho;j++){
            
            matrizc[i][j]=matriza[i][j]+matrizb[i][j];

            
            

        }

    }


}




main()
{
    int** ptrmatriz;
    int** ptrmatrizb;
    int** matrizsoma;
    int tamanho = 2;

    ptrmatriz = malloc(sizeof(int*)*tamanho);
    ptrmatrizb = malloc(sizeof(int*)*tamanho);
    matrizsoma = malloc(sizeof(int*)*tamanho);

    Alocar_matriz (ptrmatriz, tamanho);
    Alocar_matriz (ptrmatrizb, tamanho);
    Alocar_matriz (matrizsoma, tamanho);
    Valor_matriz (ptrmatriz, tamanho);
    Valor_matriz (ptrmatrizb, tamanho);
    Imprimir (ptrmatriz, tamanho);
    printf("\n");
    Imprimir (ptrmatrizb, tamanho);
    printf("\n");
    Soma_matrizes (ptrmatriz,ptrmatrizb, matrizsoma, tamanho);
    Imprimir(matrizsoma, tamanho);



    }