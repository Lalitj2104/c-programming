#include<stdio.h>
int main(){
    int n,i,j,x,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the number:");
    scanf("%d",&x);
    for(i=0;i<n;i++){
         for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]>x){
                count+=1;
            }
            else{
                continue;
            }
         }
    }
    printf("%d",count);
    return 0;
}