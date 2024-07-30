#include<iostream>
using namespace std;
class employee
{
private:
    int eid;
    string name;
public:
    employee(int e,string n)
    {
        eid=e;
        name=n;
    }
    int getEid()
    {
        return eid;
    }
    string getName()
    {
        return name;
    }
    void setEid(int e)
    {
        eid=e;
    }
    void setName(string n)
    {
        name=n;
    }

};

class partime:public employee
{  private:

    int wage;
public:
    partime(int e,string n,int w):employee(e,n)
    {
        wage=w;
    }
    int getWage()
    {
        return wage;
    }


};
class fulltime:public employee
{private:
    int salary;
    public:
    fulltime(int e,string n,int sal):employee(e,n)
    {
        salary=sal;
    }
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    partime p1(1,"yatiraj",300);
    fulltime p2(2,"omkar",25000);
    cout<<"wage of  "<<"employee id number   "<<p1.getEid()<<" "<<p1.getName()<<" is  "<<p1.getWage()<<endl;
    cout<<"salary of  "<<"employee id number  "<<p2.getEid()<<" "<<p2.getName()<<" is  "<<p2.getSalary()<<endl;
}
