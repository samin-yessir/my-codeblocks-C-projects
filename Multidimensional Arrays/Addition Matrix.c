#include <stdio.h>
int main(){
    int i, j;
    int A[2][2];
    int B[2][2] = {{1, 2},{3, 4}};
    int result[2][2];

    for (i = 0 ; i < 2 ; i++){
        for (j = 0 ; j < 2 ; j++){
            printf("A ~ R%d C%d= ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0 ; i < 2 ; i++){
        for (j = 0 ; j < 2 ; j++){
            result[i][j] = A[i][j] + B[i][j];
        }
    }
     printf("\nSum Of Matrix:\n");

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
    {
      printf("%d\t", result[i][j]);

      if (j == 1)
        printf("\n");
    }

  return 0;
}


