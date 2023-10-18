#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int i,j;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    int brr[m];
    for(i=0; i<m; i++){
        scanf("%d", &brr[i]);
    }
    i =0; j= 0;
    while(i<n && j<m){
        if(arr[i] < brr[j]){
        printf("%d ", arr[i]);
        i++;
    }
    else{
    printf("%d ", brr[j]);
    j++;
    }
}
    while (i<n){
    printf("%d ", arr[i]);
    i++;
    }
    while (j<m){
    printf("%d ", brr[j]);
    j++;
    }
}