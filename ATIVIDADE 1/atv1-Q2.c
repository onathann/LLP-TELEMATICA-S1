#include <stdio.h>

int main() 
{ 
  int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  int matrizb[3][3] = {{1, 1, 1}, {1, 1, 1}, {1,1,1}};
  int m1, m2;
  int soma [3][3];
  

    for (m1=0; m1<3; m1++){
        for (m2=0; m2<3; m2++){

            
                soma[m1][m2] = matriz[m1][m2] + matrizb[m1][m2];
                printf("matriz [%d][%d]: %d\n", m1, m2, soma[m1][m2]);
        }
            
            
    }








}