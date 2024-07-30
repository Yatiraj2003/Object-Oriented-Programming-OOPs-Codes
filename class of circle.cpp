#include<iostream>
using namespace std;
class circle
{
public:
    int radius;
    float area()
    {
        return 3.142*radius*radius;
    }
    float perimeter()
    {
        return 2*3.142*radius;
    }

};

int main()
{
    circle r;
    circle *p=new circle();
    cout<<"Enter radius\n"<<endl;
    cin>>p->radius;
    cout<<"area of circle is\n"<<p->area()<<endl;
    cout<<"perimeter of circle is\n"<<p->perimeter()<<endl;

}
