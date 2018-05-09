#include <stdio.h>
#include <stdlib.h>
#include "chess.h"

int main()
{
    system("clear");
    int i = 0,ext;
    char places[6];
    
    while ( i == 0) {
        char q;
        printf("\t(s) Start or (q) Quit\n");
        printf("\t\t Command : ");
        scanf("%c", &q);
        
        if (q == 's') {
            system("clear");
		    print_new_board();
            while (ext == 0) {
                printf("Write coordinates or (q) to Quit:\n\t\tCommand:\n\t\t" );
                scanf("%s", places);
                if (places[0] == 'q') {
					system("clear");
					printf("\t\tGoodbye\n");
                    return 0;
                } else {
                    ext = board_func(places, 0);
                    if (ext == -1) {
                        print_new_board();
                        printf("\t   Wrong coordinates!\n");
                        ext = 0;
                    }
                }
            }
        } else if (q == 'q') {
            system("clear");
            printf("\t\tGoodbye\n");
            return 0;
        }
    }
    return 0;
}

