#include<iostream>
using namespace std;
class Complex
{
public:
    int real;
    int img;


    Complex operator+(Complex c)
    {
        Complex t;
        t.real=real+c.real;
        t.img=img+c.img;
        return t;
    }


};

int main()
{
    Complex c1,c2,c3;
    c1.real=7;c1.img=8;
    c2.real=10;c2.img=3;

    c3=c1+c2;
    cout<<c3.real<<"+"<<" i"<<c3.img<<endl;
}
