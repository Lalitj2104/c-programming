#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if (arr[i]< 35){
            printf("%d\n",i);
        }
        else{
            continue;
        }
    }
}