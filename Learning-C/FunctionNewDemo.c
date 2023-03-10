#include<stdio.h>

int Addition(int A, int B)
{
    int Result = 0;

    Result = A + B;

    return Result;
}

int main()
{
    int No1 = 9;
    int No2 = 18;
    int Ans = 0;

    Ans = Addition(No1,No2);

    printf("Addition of Two Number is : %d",Ans);

    return 0;
}