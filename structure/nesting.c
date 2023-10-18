#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[25];
    }pokemon;
    typedef struct legendaryPokemon{
        pokemon normal;
        //we can  write anything at place of normal
        char SpecialAttack[24];
    }legendaryPokemon;
    legendaryPokemon mewtwo;
    strcpy(mewtwo.SpecialAttack,"pressure");
    typedef struct godPokemon{
        legendaryPokemon n;
        char hiddenAttack[26];
    };
}      