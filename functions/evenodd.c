#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    oddeven(a);
}
void oddeven(int x){
    if(x%2 == 0){
        printf("Even\n");
    }
    else if(x%2 != 0){
        printf("Odd\n");
    }
    else{
        printf("wrong\n");
    }
}