// Class = characteristics + Behaviors
// Class = Data + Functions

#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

        void obj1Func()
        {
            cout<<"Inside obj1Func\n";
        }
        void obj2Func()
        {
            cout<<"Inside obj2Func\n";
        }
};

int main()
{
    Demo obj1;

    obj1.No1;
    obj1.No2;

    cout<<"Size of object 1 is : "<<sizeof(obj1)<<"\n";

    obj1.obj1Func();

    Demo obj2;

    cout<<"Size of object 2 is : "<<sizeof(obj2)<<"\n";

    obj2.No1;
    obj2.No2;

    obj2.obj2Func();

    return 0;
}