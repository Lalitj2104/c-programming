#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else{
            arr[i]=arr[i]*2;
        }

    }
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}