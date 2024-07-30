#include<iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;
public:
    rectangle(int l=0,int b=0)
    {
        length=l;
        breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

class Cuboid: public rectangle
{
private:
    int height;
public:

    Cuboid(int h)
    {
        height=h;
    }
    int getHeight()
    {
        return height;
    }
    void setHeight(int h)
    {
     height=h;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;
    }

};

int main()
{
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout<<c.area()<<endl;
    cout<<c.volume()<<endl;
    cout<<c.perimeter()<<endl;

}
