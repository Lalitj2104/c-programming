#include<stdio.h>
int main(){
    int n,count=1,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        count*=arr[i];
    }
    printf("%d",count);
}