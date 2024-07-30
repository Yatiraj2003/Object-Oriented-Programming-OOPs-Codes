#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    ofstream ofs("My.txt",ios::trunc);
    //ios::trunc-->by default;
    ofs<<"Hello"<<endl;
    ofs<<25<<endl;
    ofs<<"cs"<<endl;

    ofs.close();
}
