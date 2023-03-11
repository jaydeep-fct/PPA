#include<iostream>
using namespace std;

class Demo
{
    public:
        int Addition(int No1, int No2)
        {
            cout<<"Addition of Two Integers is : "<<"\n";
            return No1 + No2;
        }
        int Addition(int No1, int No2, int No3)
        {
            cout<<"Addition of Three Integers is : "<<"\n";
            return No1 + No2;
        }

        float Addition(float No1, float No2)
        {
            cout<<"Addition of Two Float is : "<<"\n";
            return No1 + No2;
        }

        double Addition(double No1, double No2)
        {
            cout<<"Addition of Two Double is : "<<"\n";
            return No1 + No2;
        }
};

int main()
{
    Demo obj;
    int iRet = obj.Addition(9, 18);
    cout<<"Addition of Integer is :"<<iRet<<"\n";

    iRet = obj.Addition(8, 9, 18);
    cout<<"Addition of Integer is :"<<iRet<<"\n";

    float iRet = obj.Addition(9.0f, 18.0f);
    cout<<"Addition of Integer is :"<<iRet<<"\n";

    double iRet = obj.Addition(9.0, 18.0);
    cout<<"Addition of Integer is :"<<iRet<<"\n";

    return 0;
}