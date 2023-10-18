#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        count+=arr[i];
    }
    printf("%d",count);
}