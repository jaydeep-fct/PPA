// Class = characteristics + Behaviors
// Class = Data + Functions

#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

        void func()
        {
            cout<<"Inside func\n";
        }
};

int main()
{
    Demo obj1;

    obj1.No1;
    obj1.No2;

    cout<<"Size of object is : "<<sizeof(obj1)<<"\n";

    obj1.func();

    Demo obj2;

    cout<<"Size of object is : "<<sizeof(obj2)<<"\n";

    obj2.No1;
    obj2.No2;

    obj2.func();

    return 0;
}