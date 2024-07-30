#include<iostream>
using namespace std;
int main()
{
    int a=10,b=10,c;

    try
    {
        if(b==0)
            throw 404;
        c=a/b;
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"runtime error  "<<e<<endl;
    }
    cout<<"Bye"<<endl;
}
