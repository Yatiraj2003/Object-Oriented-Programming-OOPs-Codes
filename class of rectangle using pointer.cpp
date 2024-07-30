#include<iostream>
using namespace std;

class Rectangle
{   public:
    int length;
    int bredth;
    int area()
    {
        return length*bredth;
    }
    int perimeter()
    {
        return 2*(length+bredth);
    }

};

int main()
{
    Rectangle r;
    Rectangle *p= new Rectangle();
    p->length=10;
    p->bredth=5;
    cout<<p->area();
}

