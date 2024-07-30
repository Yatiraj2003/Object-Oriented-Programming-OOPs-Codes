#include<iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    int marks;
    int m1,m2,m3;
public:

    Student(int r,string n,int m1,int m2,int m3)
    {
        roll=r;
        name=n;
        this->m1=m1;
        this->m2=m2;
        this->m3=m3;
    }

int total_marks()
{
    return m1+m2+m3;
}

char grade()
{
    int sum,avg;
    sum=m1+m2+m3;
    avg=sum/3;
    if(avg>=90)
    {
      return 'A';
    }
    else if(avg>=80 && avg<90)
    {
        return 'B';
    }
    else
  return 'C';

}
};

int main()
{
    int roll;
    string name;
    int m1,m2,m3;
    cout<<"Enter your roll number\n"<<endl;
    cin>>roll;
    cout<<"Enter your name\n"<<endl;
    cin>>name;
    cout<<"Enter marks in each subject out of 100\n"<<endl;
    cin>>m1>>m2>>m3;
    Student s(roll,name,m1,m2,m3);

    cout<<"Total marks is\n"<<s.total_marks()<<endl;
    cout<<"Grade of student is\n"<<s.grade()<<endl;


}
