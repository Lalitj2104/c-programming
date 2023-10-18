    // i =0; j= 0;
    // while(i<n && j<m){
    //     if(arr[i] < brr[j]){
    //     printf("%d ", arr[i]);
    //     i++;
    // }
    // else{
    // printf("%d ", brr[j]);
    // j++;
    // }
#include <stdio.h>

int main() {
	
    int n,x;
    scanf("%d", &n);
    while(n != 0){
        int r =n%10;
        x +=r;
        n=n/10;
    }
    printf("%d",x);
    return 0;
}