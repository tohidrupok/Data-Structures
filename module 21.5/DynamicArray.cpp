#include <bits/stdc++.h>
using namespace std;

//Stack using dynamic array
template<class T>
class Stack{
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
        for(int i=0;i<array_cap;i++)
            tmp[i] = a[i];
        swap(a,tmp);
        delete []tmp;
        array_cap = array_cap*2;
    }
    //Div the array cap / 2 .
    void decrease_size()
    {
        array_cap=array_cap/2;
        T *tmp;
        tmp = new T[array_cap];
        for(int i=0;i<stack_size;i++)
            tmp[i] = a[i];
        swap(a,tmp);
        delete []tmp;


    }
    // Add an element in the stack. O(1)
    void push(T val)
    {
        if(stack_size+1 > array_cap)
        {
            increase_size();
        }
        if(stack_size>array_cap/2)
        {
            decrease_size();
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
        a[stack_size -1] = 0;
        stack_size = stack_size - 1;
    }

    //Returns the top element from the stack. O(1)
    T top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack<int> st;
    st.push(3);
    cout<<st.top()<<"\n";
    st.push(4);
    cout<<st.top()<<"\n";
    st.push(5);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";


    Stack<char>c;
    c.push('S');
    cout<<c.top()<<" ";
    c.push('A');
    cout<<c.top()<<" ";
    c.push('L');
    cout<<c.top()<<" ";
    c.push('M');
    cout<<c.top()<<" ";
    c.push('A');
    cout<<c.top()<<" ";
    return 0;
}

