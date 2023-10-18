#include <stdio.h>
int main()
{
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
    } pickachu;
   
    typedef struct pokemon p;
    pickachu.attack = 100;
    pickachu.hp = 60;
    pickachu.speed = 200;
    pickachu.tier = 'A';

// in this way we can use typedef.
    p charizad;
    charizad.attack = 200;
    charizad.hp = 150;
    charizad.speed = 150;
    charizad.tier = 'S';
    //if we have to make a special type with one more element of object in it we can do it as.
    struct ledendaryPokemon{
        int noOfSpecialAttack;
        struct pokemon x;
    };
    //this way is used to assign the value to pointer.
    p *poke=&pickachu;
    

}

