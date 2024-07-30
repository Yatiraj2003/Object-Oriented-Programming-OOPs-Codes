
#include<iostream>
using namespace std;
class basiccar
{
public:
   virtual void fun()
    {
        cout<<"Basic car started\n"<<endl;
    }
};

class advanced:public basiccar
{public:

    void fun()
    {
      cout<<"advanced car started\n";
    }
};

int main()
{
    advanced d;
    basiccar *ptr=&d;

  //base *p= new derived();
   ptr->fun();

    //derived d;
    //d.fun();
}
