#include <stdio.h>
#include <string.h>
#include <stdbool.h>
 typedef struct student{
    int rollNo;
    char name[30];
    char dept[30];
    char course[30];
    int yearofjoining;
    }student;



void check(student s1,student s2){

   bool a= strcmp(s1.dept,s2.dept);
   
    if(a==1){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
}


int main(){
   
    student s1;
    s1.rollNo=12;
    strcpy(s1.name,"Akash");
    strcpy(s1.course,"cse");
    strcpy(s1.dept,"ibeta");
    s1.yearofjoining=2022;

    student s2;
    s2.rollNo=15;
    strcpy(s2.name,"Dhruv");
    strcpy(s2.course,"cse-AI");
    strcpy(s2.dept,"ibeta");
    s2.yearofjoining=2022; 

    check(s1,s2);

}