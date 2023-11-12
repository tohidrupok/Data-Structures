#include<bits/stdc++.h>
using namespace std;
template<class T>
class Stack
{
public:
    T* a;
    int stack_size;
    int array_cap;
    Stack()
    {
        a=new T[1];
        array_cap=1;
        stack_size=0;
    }
    void increase_size()
    {
        T* temp=new T[array_cap*2];
        for(int i=0;i<array_cap;i++)
        {
            temp[i]=a[i];
        }
        swap(a,temp);
        delete []temp;
        array_cap=array_cap*2;
    }
    void push(T val)
    {
        if(stack_size+1>array_cap)
        {
            increase_size();
        }
        stack_size=stack_size+1;
        a[stack_size-1]=val;
    }
    void pop()
    {
        if(stack_size==0)
        {
            cout<<"Stack is empty\n";
            return;
        }
        stack_size=stack_size-1;
    }
    T top()
    {
        if(stack_size==0)
        {
            cout<<"Stack is empty\n";
            T a;
            return a;
        }
        return a[stack_size-1];
    }
};
int main()
{
    Stack<int>st;
    st.push(30);
    cout<<st.top()<<"\n";
    st.push(40);
    cout<<st.top()<<"\n\n";

    Stack<char>st2;
    st2.push('b');
    cout<<st2.top()<<"\n";
    st2.push('a');
    cout<<st2.top()<<"\n\n";

    Stack<double>st3;
    st3.push(22.22);
    cout<<st3.top()<<"\n";
    st3.push(123.789);
    cout<<st3.top()<<"\n\n";
    return 0;
}
