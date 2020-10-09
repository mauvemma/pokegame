#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

int main(){

    srand(time(NULL));
    int you, pc;
    float yourScore = 0,
        pcScore= 0;

    whatAboutGame();
    pc = pcMov();

    do{
        displayTypes();
        you = selectYourMov();
        effects(stats[you][pc]);
        printf("\n");
        yourScore = yourScore+fight(you,pc);
        pcScore = pcScore+fight(pc,you);
    }while( yourScore<5 && pcScore<5 );

    printf("\nEnemy was a %s pokemon.\n", types_string[pc]);

    if( yourScore >= pcScore ){
        printf("You won this battle\n");
    }else{
        printf("Sorry, you lost.\n");
    }

    printf("\n");
    return 0;
}
