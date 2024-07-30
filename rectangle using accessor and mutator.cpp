#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int bredth;
public:
    void setLength(int l)
    {  if(l<0)
        length=1;
        else
            length=l;

    }
    void setBredth(int b)
    {  if(b<0)

    bredth=1;
    else
        bredth=b;

    }
    int getLength()
    {
        return length;
    }
    int getBredth()
    {
        return bredth;
    }
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
    r.setLength(-5);
    r.setBredth(-5);
    cout<<r.area()<<endl;
    cout<<r.getLength();

}
