#include<iostream>
using namespace std;

bool checkEven(int No)
{
    if((No % 2) ==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int value = 0;
    bool bRet;

    cout<<"Enter a Number : \n";
    cin>>value;

    bRet = checkEven(value);

    if(bRet==true)
    {
        cout<<"Number is Even\n";
    }
    else
    {
        cout<<"Number is Odd\n";
    }

    return 0;
}