#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "chess.h"

char **arr;

char **board()
{
    arr =  (char**) malloc(9 * sizeof(char*));
    int i,j;

    for (i = 0; i < 9; i++) {
    arr[i] = (char*)malloc(9 * sizeof(char));
        for (j = 0; j < 9; j++) {
            arr[i][j] = ' ';
        }
    }

    char gl[]={'r','n','b','q','k','b','n','r'};
    char p ='p';

    for (i=0; i<8; i++) {
         arr[i][0] = 56-i;
    }
    
    for (i=0; i<9; i++){
         arr[8][i] = 96+i;
    }

    for ( i=1; i<9; i++){
       arr[0][i]=gl[i-1];
       arr[7][i]= gl[i-1] -32;
       arr[1][i]= p;
       arr[6][i]= p -32;
    }
    return arr;
}

void print_new_board()
{
    arr = board();
    print_board(arr);
}

void print_board(char **arr)
{

    printf("\n");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
                printf("%3c", arr[i][j]);
        }
        printf("\n");
    } 
}

char** movePawn(char **v, int* pozition)
{
    if  (pozition[0] == pozition[2]) {
        int poz = arr[pozition[1]][pozition[0]];
        arr[pozition[1]][pozition[0]] = arr[pozition[3]][pozition[2]];
        arr[pozition[3]][pozition[2]] = poz;
    } 

    else printf ("Try again");

    return v;
}

int board_func(char *one_place, char *two_place) {

    int pozition[4];
    pozition[0] = one_place[0] - 96; //a
    pozition[1] = 9 - (one_place[1] - 48) - 1; //2
    pozition[2] = two_place[0] - 96; //c
    pozition[3] = 9 - (two_place[1] - 48) - 1; //8
    printf("\n ");

    for(int g = 0; g < 4; g++) {
        if (pozition[g] < 0 || pozition[g] > 9) {
            return -1;
        }
    }

    arr = movePawn(arr, pozition);
    print_board(arr);
    return 0;
}

