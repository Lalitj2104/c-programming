#include<stdio.h>
int sumno(int);
int main(){
    int n;
    scanf("%d",&n);
    sumno(n);
}
int sumno(n){
    
    int sum;
    if(n==1){
        return (1);}
    else
        sum=n+sumno(n-1);

    
        

}