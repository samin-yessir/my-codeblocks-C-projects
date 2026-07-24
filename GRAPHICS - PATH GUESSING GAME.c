#include <stdio.h>
int main(){
    int board[3][3] = {
         {1,   0,  0},
         {0,   5,  0},
         {0,   0, 10}
         };

    int i, j;
    int P_row = 0, P_column = 0;

    for(i = 0 ; i < 3 ; i++){
        printf("+---+---+---+\n");

        for(j = 0 ; j < 3 ; j++){
            if(i == P_row && j == P_column){

                printf("| P ");
            }
            else
                printf("|   ");
            }
            printf("|\n");
        }
        printf("+---+---+---+\n");


return 0;
}
