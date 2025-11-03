#include<stdio.h>
int main()
{
    char o;
    int n1,n2;
    int c;
    printf("Enter two numbers \n");
     scanf("%d%d",&n1,&n2);
    printf("Enter a operator\n");
    scanf(" %c",&o);

    switch(o)
    {
        case '+':
        c=n1+n2;
        printf("Addition of two numbers=%d",c);
        break;

        case '-':
        c=n1-n2;
        printf("Subtraction of two numbers=%d",c);
        break;

        case '*':
        c=n1*n2;
        printf("Multiplication of two numbers=%d",c);
        break;

        case '/':
        if(n2!=0)
        {c=n1/n2;
        printf("Division of two numbers=%d",c);
        }
        else{
        printf("Error: Division by zero.");
        }
        break;

        default:
        printf("Invalid input");
    }
    return 0;
}