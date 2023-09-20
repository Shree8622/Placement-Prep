#include<iostream>
#include<string.h>
using namespace std;

class CpyConst
{
    public:
    int a;
    CpyConst()
    {
        this->a=1;
    }
    CpyConst(CpyConst& obj)
    {
        cout<<"Copy constructor is called"<<endl;
        this->a = obj.a;
    }
};

class Hero
{
    public:
    char *name;
};

class DeepHero
{
    public:
    char *name;
    DeepHero()
    {

    }
    DeepHero(DeepHero& a)
    {
        this->name = new char[strlen(a.name)+1];
        strcpy(name,a.name);
    }
};
int main()
{
     CpyConst obja;

    CpyConst objb(obja);
    cout<<objb.a<<endl;
    
    Hero h1;
    char name[7] = "babbar";
    h1.name = name;

    Hero h2(h1); //using default copy constructor
    
    // printing normal values
    cout<<h1.name<<endl;
    cout<<h2.name<<endl;

    h1.name[0]= 'G';

    // See the output.. both names are changed but we only hero1's name is Gabbar
    cout<<h1.name<<endl;
    cout<<h2.name<<endl;

    DeepHero d1;
    char dname[7] = "babbar";
    d1.name = dname;

    DeepHero d2(d1); //using default copy constructor
    
    // printing normal values
    cout<<d1.name<<endl;
    cout<<d2.name<<endl;

    d1.name[0]= 'G';

    // Now we have two different strings so its not affected
    cout<<d1.name<<endl;
    cout<<d2.name<<endl;
}