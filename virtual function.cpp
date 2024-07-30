#include<iostream>
using namespace std;
class base
{
public:
   virtual void fun()
    {
        cout<<"fun of base"<<endl;
    }
};

class derived:public base
{public:

    void fun()
    {
      cout<<"fun of derived";
    }
};

int main()
{
    derived d;
    base *p=&d;
  //base *p= new derived();
   p->fun();

    //derived d;
    //d.fun();
}
