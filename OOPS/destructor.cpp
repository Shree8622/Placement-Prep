#include<iostream>
#include<string.h>
using namespace std;

class Destructor
{
    public:
    int val;
    ~Destructor()
    {
        cout<<this->val<<" ";
        cout<<"Destructor is called"<<endl;
    }
};


int main()
{
     Destructor d;
     d.val=1;

     Destructor *dynamic = new Destructor();
    dynamic->val = -1;

    delete dynamic; //if commented, the destructor is only called once
    // observe the order in which destructor is called
}