#include <stdio.h>
int numprint(int);
int main(){
    int n=1;
    printf("The natual numbers are: ");
    numprint(n);
    printf("\n\n");
    return 0;

}
int numprint(n){
    if(n<=50){
        printf("%d\n",n);
        numprint(n+1);
    }
}