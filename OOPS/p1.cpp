#include<iostream>
using namespace std;

class Parent
{
    int p1,p2;
    
    protected:
        void func()
    {
        cout<<"Im a parent function"<<endl;
    }
};

class Child
{
    void func()
    {
        // super();
        cout<<"Im a child function"<<endl;
    }
    public:
        void caller()
        {
            func();
        }
};
int main()
{
    Child c;
    c.caller();
}