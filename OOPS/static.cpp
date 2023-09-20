#include<iostream>
using namespace std;

class A
{
    public:
    static int val;
    int b;
    
    static void func()
    {
        cout<<val<<endl;
    }
};
int A::val = 2;
int main()
{   
    // A::func();
    A a,b;
    
    // You can see that both the members of the class share the same memory address for static variables
    cout<<a.val<<" "<<&a.val<<" "<<&b.val<<endl;
}