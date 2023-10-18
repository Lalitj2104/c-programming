#include <stdio.h>
#include <string.h>

#define MAX 100
int top = -1;
char stack[MAX];
void push(char n)
{
    top++;
    stack[top] = n;
}
char pop()
{
    char var = stack[top];
    top--;
    return var;
}
int main()
{
    char str[MAX];
    scanf("%[^\n]s", str);
    int x = strlen(str);
    for (int i = 0; i < x; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            push(str[i]);
        }
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if (top == -1)
            {
                printf("un");
                return 0;
            }
            char brac = pop();
            if (str[i] == ')' && brac != '(' ||
                str[i] == '}' && brac != '{' ||
                str[i] == ']' && brac != '[')
            {
                printf("unbalanced");
                return 0;
            }
        }
    }
    if (top == -1)
    {
        printf("balanced");
    }
    else
    {
        printf("unblanced");
    }
}
