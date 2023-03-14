#include<stdio.h>
int A = 18;

extern int B;

extern int C;


int main()
{
    printf("Value of A is %d\n",A);

    printf("Value of B is %d\n",B);

    printf("Value of C is %d\n",C);

    return 0;

}

// gcc .\extern_demo.c .\extern.c -o Myexe 
// command for run the using extern keyword program 
// you can run the two program files of using extern keyword