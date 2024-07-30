#include<iostream>
#include<fstream>
using namespace std;
class student
{
public:
    string name;
    int roll;
    string branch;
    friend ofstream& operator<<(ofstream &ofs,student &s1);
    friend  ifstream& operator>>(ifstream &ifs,student &s1);

};
ifstream& operator>>(ifstream &ifs,student &s1)
{
    ifs>>s1.name>>s1.roll>>s1.branch;

    return  ifs;
}


ofstream& operator<<(ofstream &ofs,student &s1)
{
    ofs<<s1.name<<endl;
    ofs<<s1.roll<<endl;
    ofs<<s1.branch<<endl;
    return  ofs;
}

int main()
{
    student s1;
   s1.name="John";s1.roll=10;s1.branch="CS";
    ifstream ifs("Student.txt");
    ofstream ofs("Student.txt");

   ifs>>s1;
   cout<<"Name "<<s1.name<<endl;
cout<<" roll no  "<<s1.roll<<endl;
cout<<"Branch is "<<s1.branch<<endl;

   ifs.close();

}
