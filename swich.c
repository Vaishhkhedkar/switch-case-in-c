#include<stdio.h>
#include<string.h>
int main ()
{
    int a,b,c;
    char n;
       printf("enter operation=");
    scanf("%c",&n);
    printf("enter 2 values=");
    scanf("%d%d",&a,&b);

    switch (n)
    {
    case '+':
    c=a+b;
    printf("Add=%d",c);
    break;
    case '-':
    c=a-b;
    printf("sub=%d",c);
    break;
     case '*':
    c=a*b;
    printf("multiply=%d",c);
    break;
    case '/':
    c=a/b;
    printf("div=%d",c);
    break;
    default:
    printf("Invalid");
    }
    return 0;
    
}    