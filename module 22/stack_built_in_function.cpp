#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(30);
    st.push(20);
    st.push(10);
    st.push(5);
    cout<<st.top()<<"\n";
    cout<<"The size is:"<<st.size()<<"\n";

    st.pop();
    cout<<st.top()<<"\n";
    cout<<"The size is:"<<st.size()<<"\n";

    st.pop();
    cout<<st.top()<<"\n";
    cout<<"The size is:"<<st.size()<<"\n";

    st.pop();
    cout<<st.top()<<"\n";
    cout<<"The size is:"<<st.size()<<"\n";

    st.pop();
    //cout<<st.top()<<"\n";

    cout<<"The size is:"<<st.size()<<"\n";

    return 0;
}
