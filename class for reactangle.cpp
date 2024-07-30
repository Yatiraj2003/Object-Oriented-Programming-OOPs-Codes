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
    Rectangle r1,r2;
    r1.length=10;
    r1.bredth=5;
    cout<<r1.area()<<endl;
    r2.length=15;
    r2.bredth=10;
    cout<<r2.perimeter();
}
