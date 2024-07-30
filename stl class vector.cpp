#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int>  v={10,20,50,90};
    v.push_back(25);
    v.push_back(70);
    v.pop_back(70);
    list<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*itr;
    }
    //for(int x:v)
   // {
    //    cout<<x;
   // }
}

