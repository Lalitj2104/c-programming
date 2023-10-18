#include<stdio.h>
#include<string.h>
int main(){
    typedef struct person{
        int age;
        int weight;
    }p;
    p s1,s2;
    p *x =&s1;
    s1.age=12;
    s1.weight=30;

    s2.age=40;
    s2.weight=79;

    printf("%u\n",*x);
    x++;
    printf("%u",*x);


}