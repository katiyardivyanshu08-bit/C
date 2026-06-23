#include <stdio.h>
#include <string.h>

int main() {
    system("cls");

    typedef struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;


    typedef struct legendarypokemon {
        pokemon normal;
        char ability[10];
    } legendarypokemon;
    

    legendarypokemon mewtwo;

    // values assign
    strcpy(mewtwo.ability, "Pressure");
    
    mewtwo.normal.hp = 150;
    mewtwo.normal.speed = 130;
    mewtwo.normal.attack = 180;
    mewtwo.normal.tier = 'A';
    strcpy(mewtwo.normal.name, "Mewtwo");

    // Print
    printf("Legendary Pokemon Details:\n");
    printf("Name    : %s\n", mewtwo.normal.name);
    printf("HP      : %d\n", mewtwo.normal.hp);
    printf("Speed   : %d\n", mewtwo.normal.speed);
    printf("Attack  : %d\n", mewtwo.normal.attack);
    printf("Tier    : %c\n", mewtwo.normal.tier);
    printf("Ability : %s\n", mewtwo.ability);

    return 0;
}
