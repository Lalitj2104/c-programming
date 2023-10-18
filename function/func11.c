#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char a;
    scanf("%c",&a);
    if (a=='i'){
        namaste();
    }
    else if (a=='f'){
        bonjour();
    }
    else{
        printf("wrong input\n");
    }
}

void namaste(){
    printf("namaste\n");
}
void bonjour(){
    printf("bonjour\n");
}