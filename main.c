#include <stdio.h>
#include <stdlib.h>

void DrawXO (int**table){
    int row;
    int column;
    int i;
    int j;

    printf("Enter a row: ");
    scanf("%d", &row);
    printf("\nEnter a column: ");
    scanf("%d", &column);
    printf("Row: %d, Column: %d \n", row, column);
    for (i=0; i<row;i++){
        for(j=0; j<column;j++){
            table[i][j] = 0;
            printf("%d", table[i][j]);
        }
        printf("\n");
    }
}


void WinCheck(int table[]){

    for i=0,table]!=0){
        if ((table[0]==table[1] && table[1]==table[2] && table[2]==1) || (table[3]==table[4] && table[4]==table[5] && table[5]==1) ||
            (table[6]==table[7] && table[7]==table[8] && table[8]==1) || (table[0]==table[3] && table[3]==table[6] && table[6]==1) ||
            (table[1]==table[4] && table[4]==table[7] && table[7]==1) || (table[2]==table[5] && table[5]==table[8] && table[8]==1) ||
            (table[0]==table[4] && table[4]==table[8] && table[8]==1) || (table[2]==table[4] && table[4]==table[6] && table[6]==1)){
                printf("X wins");
            }
        else if ((table[0]==table[1] && table[1]==table[2] && table[2]==2) || (table[3]==table[4] && table[4]==table[5] && table[5]==2) ||
            (table[6]==table[7] && table[7]==table[8] && table[8]==2) || (table[0]==table[3] && table[3]==table[6] && table[6]==2) ||
            (table[1]==table[4] && table[4]==table[7] && table[7]==2) || (table[2]==table[5] && table[5]==table[8] && table[8]==2) ||
            (table[0]==table[4] && table[4]==table[8] && table[8]==2) || (table[2]==table[4] && table[4]==table[6] && table[6]==2)){
                printf("O wins");
            }   
        else
        printf("Draw");
    }   
}


int main () {
    int PrevState;
    int State;

    if (PrevState==1){
        State = 2;
        PrevState = State;
        printf("It's O's turn");
    }
    else if (PrevState==2){
        State = 1;
        PrevState = State;
        printf("It's X's turn");
    }

    DrawXO(State);
}