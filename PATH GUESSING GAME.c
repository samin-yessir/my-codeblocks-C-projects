#include <stdio.h>
int main(){
    int board[3][3] = {
         {1,   0,  0},
         {0,   5,  0},
         {0,   0, 10}
         };

    int i, j;
    int P_row = 0, P_column = 0;
    char direction;
    int moved = 0, move_counter = 0;

    printf("================================\n");
    printf("        THE UNKNOWN GRID        \n");
    printf("================================\n\n");
    printf("Find the hidden goal.\nAvoid the hidden danger.\n\n");

    while(1){
        printf("\nMove Counter = %d\n", move_counter);
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

        printf("Enter Direction (U, D, L, R): ");
        scanf(" %c", &direction);
        printf("\n");


        if (direction == 'U' || direction == 'u'){
            if (P_row == 0){
                printf("\n~~Can't move outside of Board~~\n\n");
                moved = 0;
            }
            else {
                P_row--;
                moved = 1;
                move_counter++;
            }
        }
        else if (direction == 'D' || direction == 'd'){
            if (P_row == 2){
                printf("\n~~Can't move outside of Board~~\n\n");
                moved = 0;
            }
            else {
                P_row++;
                moved = 1;
                move_counter++;
            }
        }
        else if (direction == 'L' || direction == 'l'){
            if (P_column == 0){
                printf("\n~~Can't move outside of Board~~\n\n");
                moved = 0;
            }
            else {
                P_column--;
                moved = 1;
                move_counter++;
            }
        }
        else if (direction == 'R' || direction == 'r'){
            if (P_column == 2){
                printf("\n~~Can't move outside of Board~~\n\n");
                moved = 0;
            }
            else {
                P_column++;
                moved = 1;
                move_counter++;
            }
        }
        else {
            printf("Invalid movement key\n");
            moved = 0;
        }

        if (moved == 1){
            if (board[P_row][P_column] == 5){
                printf("\n====================\n");
                printf("*** GAME OVER ;( ***\n");
                printf(" /\\_/\\\n");
                printf("( ;_; )\n");
                printf(" /| |\\ \n");
                printf("  / \\");
                printf("\n");
                break;
            }
            else if (board[P_row][P_column] == 10){
                printf("\n====================\n");
                printf("*** |YOU WIN| ***\n");
                printf(" /\\_/\\\n");
                printf("( ^_^ )\n");
                printf(" /| |\\ \n");
                printf("  / \\");
                printf("\n");
                break;
            }
        }


    }
return 0;
}
