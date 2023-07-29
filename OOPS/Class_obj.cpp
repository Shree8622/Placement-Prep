#include<iostream>
using namespace std;

class PaddingExample
{
    public:
    int marks;
    char a;
    PaddingExample(int a)
    {
        this->marks = 1;
    }
        
};
class PaddingEx2
{
    public:
    int marks;
    char a,b,c,d,e;
};

int main()
{
    PaddingExample s1(1);
    // If u think it should print 5; read about padding and greedy alignment
    cout<<sizeof(s1.a)<< " "<< sizeof(s1.marks)<<endl;  //prints 1 4 
    cout<<sizeof(s1)<<endl; // prints 8

    PaddingEx2 s2;
    cout<<sizeof(s2)<<endl;// prints 12 instead of 9

    // Calling a copy constructor example
   
}