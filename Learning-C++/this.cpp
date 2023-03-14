#include<iostream>
using namespace std;

class Demo
{
    public:
    int No1;
    int No2;

    Demo(int i, int j)
    {
        No1 = i;
        No2 = j;
    }

    void Fun(int A, int B) // void Fun(Demo *this, int A, int B)
    {
        cout<<"inside the Fun :"<<this->No1<<"\n";
        cout<<"inside the Fun :"<<this->No2<<"\n";
    }
    void Gun(int A)// void Gun(Demo *this, int A)
    {
        cout<<"inside the Gun :"<<this->No1<<"\n";
        cout<<"inside the Gun :"<<this->No2<<"\n";
    }
    
};

int main()
{
    Demo obj1(9,18);
    Demo obj2(18,9);

    obj1.Fun(1,8);  //Fun(&obj1,1,8) fun(100,1,8)
    obj2.Gun(44); //Gun(&obj2,44) gun(200,44)
    return 0;
}

// Every C++ program gets internally converted into C program