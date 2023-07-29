#include<iostream>
using namespace std;

int func(int *y)
{
    return *y;
}
int func1(const int *y)
{
    return *y;
}
class A
{
    public:
    void constfunc() const
    {
        cout<<"Im a constant function"<<endl;
    }
    void randfunc()
    {
        cout<<"Im a random function"<<endl;
    }
};
int main()
{
    const int i = 2;
    
    int x = 2;
    const int *ptr = &x;
    //cout<<func(ptr);<<endl;//doesnt work
    cout<< func1(ptr)<<endl; //works

    // A constant object can call only constant functions
    const A obj;
    obj.constfunc();
    // obj.randfunc(); //doesnt work

}