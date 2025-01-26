#include<stdio.h>
#include<string.h>
int main ()
{
    int a;
    printf("enter no=");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("wedday");
    break;
    case 4:
    printf("Thuesday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("saturday");
    break;
    case 7:
    printf("sunday");
    break;
    default:
    printf("Invalid input");
    }
    return 0;
}    