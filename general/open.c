#include <stdio.h>
int main()
{
    File *fptr;
    fptr = fopen("filename.txt", "w");
    char readData[100];
    if(fptr!=Null){
        while(fgets(readData,100,fptr)){
            printf("%s",readData);
        }
        else{
            printf("unable to open file");
        }
    }
    fprintf(fptr, "hellow world");
    fclose(fptr);
    return 0;
}