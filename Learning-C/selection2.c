#include<stdio.h>
int main()
{
    int std = 0;

    printf("Enter Your Standard : \n");
    scanf("%d",&std);

    switch (std)
    {
    case 1: 
        printf("Your Exam is at 1 PM.\n");
        break;
    
    case 2: 
        printf("Your Exam is at 2 PM.\n");
        break;
    
    case 3: 
        printf("Your Exam is at 3 PM.\n");
        break;
    
    case 4: 
        printf("Your Exam is at 4 PM.\n");
        break;
    
    default:
    printf("Invalid Standard.\n");

    }
    return 0;

}