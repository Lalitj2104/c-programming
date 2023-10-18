#include<stdio.h>
int main ()
{
int a = 20;
int *p;
int **pp;
p = &a;
pp = &p;
printf("Address of a: %d\n",p);
printf("Address of p: %u\n",pp);
printf("value of p: %d\n",*p);
printf("value of pp: %d\n",**pp);
return 0;
}