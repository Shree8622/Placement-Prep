#include<iostream>
using namespace std;

class Parent 
{
    private:
        int var;
    protected:
        int var1;
    public:
        int pub_var;
};

class Child1 : public Parent
{
    int child_var;
    public:
    int getvar1()
    {
        return this->var1;
    }
};

class Child2 : protected Parent
{
    int child_var;
    public:
    int getvar1()
    {
        return this->var1;
    }
};

class Multi_lvl_child : public Child1
{
    void func()
    {
        cout<<"Multi-level child"<<endl;
    }
}

class Multiple_inh_child: public Child1,public Child2:
{
    void func()
    {
        cout<<"Im a multiple inheritance"<<endl;
    }
}
int main()
{
    Child1 c;
    cout<<c.pub_var<<endl; //Works 
    //cout<<c.var1<<endl; //Doesnt work
    cout<<c.getvar1()<<endl; //Works 

    Child2 c1;
    cout<<c1.pub_var<<endl; //Doesnt work.. becomes protected
}