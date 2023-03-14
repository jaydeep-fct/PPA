#include<stdio.h>
int main()
{
    int No = 0;

    printf("Enter the Number :\n");
    scanf("%d",&No);

    if(No % 2==0)
    {
        printf("Entered Number is Even.\n");
    }
    else{
        printf("Entered Number is Odd.\n");
    }
    return 0;
}