#include<stdio.h>
struct emp{
    char name[10];
    int id;

};
void displayEmpDetails(struct emp e){
    printf("employee name: %s\n",e.name);
    printf("employee id: %d\n",e.id);
}
int main(){
    struct emp e1;
    strcpy(e1.name,"Lalit");
    e1.id=102;

    displayEmpDetails(e1);
}