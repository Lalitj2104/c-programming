# include<stdio.h>
int add();
int subtract();
int multiply();
void divide();

int main(){
    int x,a,b;
    printf("enter what operation u want to perform: ");
    scanf("%d",&x);
    printf("enter no: ");
    scanf("%d\n%d",&a,&b);
    if (x==1){
        add(a,b);
    }
    else if (x==2){
        subtract( a, b);
    }
    else if (x==3){
        multiply( a,b);
    }
    else if (x==4){
        divide( a, b);
    }
    else{
        printf("wrong choice");
    }
}

int add(int x,int y){
    printf("%d\n",x+y);
}
int subtract(int x, int y){
    printf("%d",x-y);
}
int multiply(int a,int b){
    printf("%d",a*b);
}
void divide(int x, int y){
    printf("%d",x/y);
}