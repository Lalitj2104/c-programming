#include<stdio.h>
int num;
void main()
{
num =10;
printf("%d\n",num);
fun1();
}
fun1(){
num = 20;
printf("%d\n",num);
fun2();
}
fun2(){
num =30;
printf("%d",num);
}