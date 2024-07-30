#include<iostream>
using namespace std;
class rational
{
private:
    int p;
    int q;
public:
    rational()
    {
        p=1;
        q=1;
    }
    rational(int p,int q)
    {
        this->p=p;
        this->q=q;
    }
    rational (rational &r)
    {
        this->p=r.p;
        this->q=r.q;
    }
    int getP()
    {
        return p;
    }
    int getQ()
    {
        return q;
    }
    void setP(int p)
    {
        this->p=p;
    }
    void setQ(int q)
    {
        this->q=q;
    }
    rational operator+(rational r)
    {
       rational t;
       t.p=this->p*r.q+q*r.p;
       t.q=this->q*r.q;
       return t;
    }
    friend ostream & operator<<(ostream &out,rational &r);

};
ostream & operator<<(ostream &out,rational &r)
{
    cout<<r.p<<"/"<<r.q;
    return out;
}
int main()
{
    rational r1(3,4),r2(2,5),r3;
    r3=r1+r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
}
