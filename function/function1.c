# include<stdio.h>
void indian();
void french();
int main(){
    char x;
    scanf("%c",&x);
    if (x=='i'){
        indian();
    }
    else {
        french();
    }
}
void indian(){
    printf("namaste");
}
void french(){
    printf("bonjour");
}