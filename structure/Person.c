#include <stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[40];
        int age;
        int salary;
    };
    struct person a,b;
    strcpy(a.name,"Lalit Jindal");
    a.age=18;
    a.salary=2000000;
    strcpy(b.name,"Akash Suri");
    b.age=20;
    b.salary=1000000;

    printf("%s\n",a.name);
    printf("%d",b.age);
}