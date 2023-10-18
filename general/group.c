#include<stdio.h>
int main(){
    int n;
    int  c1=0,c2=0,c3=0,c4=0,c5=0;
    scanf("%d",&n);
    while(n--){
        int marks;

        scanf("%d",&marks);
        if(marks>=0 && marks<=39){
            c1++;
        }
        else if(marks>=40 && marks<=49){
            c2++;
        }
        else if(marks>=50 && marks<=59){
            c3++;
        }
        else if(marks>=60 && marks<=79){
            c4++;
        }
        else if(marks>=80 && marks<=100){
            c5++;
        }
    }
    printf("1 %d\n",c1);
    printf("2 %d\n",c2);
    printf("3 %d\n",c3);
    printf("4 %d\n",c4);
    printf("5 %d\n",c5);

}