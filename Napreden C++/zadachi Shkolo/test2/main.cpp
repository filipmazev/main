#include <iostream>

using namespace std;

class osnovna
{
public:
    int i;
    osnovna(int x)
    {
        i=x;
    }
    virtual void func()
    {
        cout<<"Verzijata na func() vo osnovna: ";
        cout<<i<<endl;
    }
};

class izvedena1:public osnovna
{
public:
    izvedena1(int x):osnovna(x){}
    void func()
    {
        cout<<"Vo izvedena1: "<<i*i<<endl;
    }
};

class izvedena2:public osnovna
{
public:
    izvedena2(int x):osnovna(x){}
    void func()
    {
        cout<<"Vo izvedena2: "<<i+i<<endl;
    }
};

int main()
{
    osnovna ob(10);
    izvedena1 izOb1(10);
    izvedena2 izOb2(10);
    ob.func();
    izOb1.func();
    izOb2.func();
    return 0;
}
