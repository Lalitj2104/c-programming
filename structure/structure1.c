#include<stdio.h>
#include<string.h>
struct mystructure{
    int myNum;
    char myLetter;
    char mystring[30];
};
int main(){
    struct mystructure s1={13,'8',"some text"};
    struct mystructure s2;
    s2=s1;
    s2.myNum=30;
    s2.myLetter='c';
    strcpy(s2.mystring,"something else");
    
}