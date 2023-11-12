#include <bits/stdc++.h>
using namespace std;
template <class T>


class Stack
{
public:
    T *a;
    int stack_size;
    int array_cap;

    Stack()
    {
        a = new T[1];
        array_cap = 1;
        stack_size = 0;
    }

    //Makes the array cap multiplied by 2.
    void increase_size()
    {
        T *tmp;
        tmp = new T[array_cap*2];
        for(int i=0; i<array_cap; i++)
            tmp[i] = a[i];
        swap(a,tmp);
        delete []tmp;
        array_cap = array_cap*2;
    }
    // Add an element in the stack. O(1)
    void push(T val)
    {
        if(stack_size+1 > array_cap)
        {
            increase_size();
        }
        stack_size = stack_size + 1;
        a[stack_size-1] = val;
    }

    //Delete the topmost element from the stack. O(1)
    void pop()
    {
        if(stack_size==0)
        {
            cout<<"Stack is empty!\n";
            return;
        }

        stack_size = stack_size - 1;
    }

    //Returns the top element from the stack. O(1)
    T top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            //"If i want to crash the code"// assert(false);
            T a;
            return a;
        }
        return a[stack_size - 1];
    }
};

int main()
{

    Stack<double> st;
    st.push(3.5);
    cout<<st.top()<<"\n";
    st.push(4.9);
    cout<<st.top()<<"\n";
    st.push(5.2);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";


    Stack <char>ch;
    ch.push('T');
    ch.push('D');
    ch.push('h');
    cout<<ch.top()<<'\n';
    ch.pop();
    cout<<ch.top()<<'\n';
    ch.pop();
    cout<<ch.top()<<'\n';
    ch.pop();
    cout<<ch.top()<<'\n';



    return 0;
}
