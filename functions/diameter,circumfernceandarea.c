#include<stdio.h>
#include<math.h>
void diameter(float r,float pi){
    printf("%f",2*r);
}
void area(float r,float pi){
    printf("%f",pi*r*r);
}
void circumf(float r,float pi){
    printf("%f",2*pi*r);
}
int main(){
    int a,b,c;
    float r = 5;
    float pi = 3.14;
    diameter(pi,r);
    area(pi,r);
    circumf(pi,r);
 }