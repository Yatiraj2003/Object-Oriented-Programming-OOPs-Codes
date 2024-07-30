
#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int bredth;
public:
    Rectangle(int l=0,int b=0)
    {
        setLength(l);
        setBredth(b);
    }
    Rectangle(Rectangle &r)
    {
        length=r.length;
        bredth=r.bredth;
    }

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
    Rectangle r1(10,5);
    Rectangle r2(r1);
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;


}
