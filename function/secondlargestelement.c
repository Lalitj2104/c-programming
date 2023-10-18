#include<stdio.h>
int main(){
    int x,n,i;
    int max,smax;

    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
      max=arr[0];
    for (i=0;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]&& max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
}