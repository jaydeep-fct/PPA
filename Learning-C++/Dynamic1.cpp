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
    cout<<"Inside main"<<"\n";

    Demo obj1; // Static memory allocation of object
    Demo obj2(9,18); // Static memory allocation of object

    Demo *p = new Demo(); // Dynamic memory allocation of object
    Demo *q = new Demo(9, 18); // Dynamic memory allocation of object

    delete p;    
    delete q;    

    cout<<"End of main"<<"\n";

    return 0;

}