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
                printf("Write coordinates or (q) to Quit:\n\t\tCommand:\n\t\t" );
                scanf("%s", places);
                if (one_place[0] == 'q') {
					system("clear");
<<<<<<< HEAD
					printf("\t\tGoodbye\n");
=======
>>>>>>> d52cc3ea3eda6e1bca82460a9532a66a6a433fef
                    return 0;
                } else {
                    ext = board_func(places, 0);
                    if (exit == -1) {
                        print_board();
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

