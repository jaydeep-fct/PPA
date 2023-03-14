#include<iostream>
using namespace std;

class Demo
{
    public:
        int Addition(int No1, int No2)// Addition@2ii(Demo *this, int No1, int No2)
        {
            cout<<"Addition of Two Integers"<<"\n";
            return No1 + No2;
        }
        int Addition(int No1, int No2, int No3) // Addition@3iii(Demo *this, int No1, int No2, int No3)
        {
            cout<<"Addition of Three Integers"<<"\n";
            return No1 + No2 + No3;
        }

        float Addition(float No1, float No2)// Addition@2ff(Demo *this, float No1, float No2)
        {
            cout<<"Addition of Two Float"<<"\n";
            return No1 + No2;
        }

        double Addition(double No1, double No2)// Addition@2dd(Demo *this, double No1, double No2)
        {
            cout<<"Addition of Two Double"<<"\n";
            return No1 + No2;
        }
};

int main()
{
    Demo obj;
    int iRet = obj.Addition(9, 18);// Addition@2ii(&obj, 9, 18)
    cout<<"Addition of Integer is :"<<iRet<<"\n";

    iRet = obj.Addition(8, 9, 18);// Addition@3ii(&obj, 8,9, 18)
    cout<<"Addition of Integer is :"<<iRet<<"\n";

    float fRet = obj.Addition(9.0f, 18.0f);// Addition@2ff(&obj, 9.0f, 18.0f)
    cout<<"Addition of float is :"<<iRet<<"\n";

    double dRet = obj.Addition(9.0, 18.0);// Addition@2dd(&obj, 9.0, 18.0)
    cout<<"Addition of double is :"<<iRet<<"\n";

    return 0;
}

//Changing datatypes
void fun(int A, int B);
void fun(float A, float B);