// error in the code
#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct crickter
    {
        char firstName[20];
        char lastName[20];
        int age;
        int noOfTestMatches;
        float avgRuns;
    } crickter;
    int s;
    printf("Enter number of crickter details to be added: ");
    scanf("%d", &s);
    crickter arr[20];
    for (int i = 0; i < s; i++)
    {
        printf("enter details of crickter:\n");
        char n[20];
        printf("enter firstName: ");
        scanf("%s", arr[i].firstName);
        printf("enter lastName: ");
        scanf("%s", arr[i].lastName);
        printf("enter age: ");
        scanf("%d", &arr[i].age);
        printf("enter no of Test Matches: ");
        scanf("%d", &arr[i].noOfTestMatches);
        printf("enter avg runs: ");
        scanf("%f", &arr[i].avgRuns);
        if (i < s - 1)
        {
            getchar();
        }
    }
    for (int j = 0; j < s; j++)
    {
        printf("%s %s\n", arr[j].firstName, arr[j].lastName);
        printf("%d\n", arr[j].age);
        printf("%d\n", arr[j].noOfTestMatches);
        printf("%.01f\n", arr[j].avgRuns);
    }
}