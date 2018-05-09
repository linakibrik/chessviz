#include <stdio.h>
#include <stdlib.h>
#include "chess.h"

int main()
{
    system("clear");
    int i = 0,ext;
    char places[6]
    while ( i == 0) {
        char q;
        printf("\t(s) Start or (q) Quit\n");
        printf("\t\t Command : ");
        scanf("%c", &q);
        
        if (q == 's') {
            system("clear");
		    print_new_board();
            while (exit == 0) {
                char one_place[4], two_place[4];
                printf("Write coordinates or (r) to Restart:\n" );
                scanf("%s %s", one_place, two_place);
                if (one_place[0] == 'r') {
                    system("clear");
                    exit = 1;
                    main();
                } else {
                    exit = board_func(one_place, two_place);
                    if (exit == -1) {
                        print_new_board();
                        printf("\t   Wrong coordinates!\n");
                        exit = 0;
                    }
                }
            }
        } else if (q == 'q') {
            system("clear");
            return 0;
        }
    }
    return 0;
}

