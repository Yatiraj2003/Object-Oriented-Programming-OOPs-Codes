#include<iostream>
using namespace std;

class Rectangle
{
private:
    int num;
public:
    void setNum(int n)
    {
        num=n;
    }
    int getNum()
    {
        return num;
    }
    Rectangle(int n)
    {
        setNum(n);
    }
    int isprime()
    {
        int i,Count=0;
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
                Count++;
        }
        if(Count==2)
           return 1;
        else
            return 0;
    }
    int oddeven()
    {
        if(num%2==0)
          return 1;
        else
            return 0;
    }
    int perfect()
    {
        int i,temp,sum=0;
        temp=num;
        for(i=1;i<num;i++)
        {
            if(num%i==0)
                sum=sum+i;
        }
        return sum;
    }
    int armstrong()
    {
        int i,temp,sum=0,r;
        temp=num;
        while(num>0)
        {
            r=num%10;
            sum=sum+(r*r*r);
            num=num/10;

        }
        return sum;
    }

};

int main()
{
   Rectangle r(28);
   Rectangle *p=&r;

if(p->oddeven()==1)
        cout<<"it is even number\n"<<endl;
        if(p->isprime()==1)
            cout<<"it is prime number\n"<<endl;

    if(p->getNum()==p->perfect())
        cout<<"it is perfect number\n"<<endl;
    if(p->getNum()==p->armstrong())
        cout<<"it is a armstrong number\n"<<endl;

}
