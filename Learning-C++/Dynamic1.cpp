#include<iostream>
using namespace std;

class Demo
{
    public:
    int A;
    int B;

    Demo()
    {
        cout<<"Inside Default Constructor"<<"\n";
    }

    Demo(int i, int j)
    {
        cout<<"Inside Parameterized Constructor"<<"\n";
    }

    ~Demo()
    {
        cout<<"Inside Destructor"<<"\n";
    }

};
int main()
{
    Demo obj1;
    Demo obj2(9,18);

    

    return 0;

}