#include<iostream>
using namespace std;

class FakeInt
{
    public:
    int val;

    // Overloading + operator to subtract values
    int operator+(FakeInt& op2)
    {
        return op2.val-this->val;
    }   
};

class Animal
{
    public:
        void speak()
        {
            cout<<"Make some noise!"<<endl;
        }
};
class Dog : public Animal
{
    public:
    void speak()
    {
        cout<<"I bark!"<<endl;
    }
}; 
int main()
{
    // Operator overloading 101
    FakeInt a,b;
    a.val=2;b.val=3;

    cout<<b+a<<endl;
    cout<<a+b<<endl;

    // Function overriding
    Dog d1;
    Animal a1;
    a1.speak();
    d1.speak(); // local function overrides the inherited function
    d1.Animal::speak();
}