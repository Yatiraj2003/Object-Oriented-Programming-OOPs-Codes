#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ifstream infile;
    infile.open("My.txt");
    if(!infile)//if(infile.is_open())
    {
        cout<<"file cannot be opened"<<endl;
    }

    string str;
    int x;
    infile>>str;
    infile>>x;
    cout<<str<<" "<<x<<endl;
    if(infile.eof())
        cout<<"end of file is reached"<<endl;
    infile.close();
}
