#include <stdio.h>


int main()
{
 int matrix [3][3] = {{1, 2, 3, }, {4,5,6}, {7,8,9}};
 int i;
 int j;

  for (i=0; i<3; i++) {
    for (j=0; j<3; j++){
    if (i==j)
  
      printf(" matrix [%d][%d]=%d",i, j, matrix[i][j]);}
  
  }
        printf("\n");
}
