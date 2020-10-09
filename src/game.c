#include "game.h"

void whatAboutGame(){
    printf("Your enemy has just one pokemon left");
    getchar();
    printf("You have to defeat it without knowing his nature");
    getchar();
    printf("You only know how much damage you will inflict to it through your choices");
    getchar();
    printf("Start the game!");
    getchar();
}

void displayTypes(){
    for(int i = 0; i < NUM_TYPES ; i++){
        printf("%d %s\n", (i) , *(types_string+i) );
    }
}

int selectYourMov(){
    int mov;
    do{
        printf("What kind of move would you like to use?\n");
        scanf("%d", &mov);
    }while( mov <= 0 && mov >= 18);

    return mov;
    
}

int pcMov(){
    return rand()%NUM_TYPES;
}

float fight(int player, int pc){
    return stats[player][pc];
}

void effects(float damage){
    if(damage==0){
        printf("\nEnemy is immune.\n");
    }else if(damage==0.5){
        printf("\nNot effective...\n");
    }else if(damage==1){
        printf("\nEffective.\n");
    }else if(damage==2){
        printf("\nSupereffective!\n");
    }  
}
