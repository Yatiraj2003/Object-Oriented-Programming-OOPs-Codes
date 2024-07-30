#include<iostream>
using namespace std;

template<class T>
class Stack
{
private:
    T *stk;
    int top;
    int Size;
public:
    Stack(int sz)
    {
        Size=sz;
        top=-1;
        stk=new T[Size];
    }
    void push(T x);
    T pop();

};
template<class T>
void Stack<T>::push(T x)
{
    if(top==Size-1)
        cout<<"Stack is full"<<endl;
    else
        top++;
    stk[top]=x;
}
template<class T>
T Stack<T>::pop()
{
    T x=0;
    if(top==-1)
        cout<<"Stack if empty"<<endl;
    else
    {
        x=stk[top];
        top--;
    }
    return x;
}
int main()
{
   Stack<float> s(10);
   s.push(10);
   s.push(23);
   s.push(33);
}
