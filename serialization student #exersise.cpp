#include<iostream>
#include<fstream>
using namespace std;
class item
{
public:
    string name;
    int price;
    float quat;
    item(){};
    item(string n,int k,float q);
    friend ifstream & operator>>(ifstream &ifs,item &i);
    friend ofstream & operator<<(ofstream &ofs,item &i );
    friend ofstream & operator<<(ofstream &ofs,item &i );


};

 ifstream & operator>>(ifstream &ifs,item &i)
 {
     ifs>>i.name>>i.price>>i.quat;
     return ifs;
 }

 ofstream & operator<<(ofstream &ofs,item &i)
 {
     ofs<<i.name<<endl;
     ofs<<i.price<<endl;
     ofs<<i.quat<<endl;
     return ofs;

 }

 int main()
 {
int n,price;
string name;
float quat;
cout<<"Enter number of items"<<endl;
cin>>n;
item *list[n];
cout<<"Enter all item"<<endl;
for(int i=0;i<n;i++)
{
    cout<<"Enter  "<<i+1<<" item Name  , price and quantity"<<endl;
    cin>>name;
    cin>>price;
    cin>>quat;
    list[i]=new item(name,price,quat);
}


    ifstream ifs("item.txt");





   ifs.close();

}
