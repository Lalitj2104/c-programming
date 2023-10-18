#include <stdio.h>
int main()
{
    struct book
    {
        char name[100];
        float price;
        int noOfPages;

    }LawsO0fPower;
    struct book humanNature;
    strcpy(humanNature.name,"The 48 Laws of human nature");
    humanNature.price = 229.45;
    humanNature.noOfPages = 524;
}
