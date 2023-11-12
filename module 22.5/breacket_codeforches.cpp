#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0; i<n; i++)
    {
        if(i==0)
            st.push(s[i]);
        else
        {
            if(st.size()>=1 && st.top()=='(' && s[i]==')')
                st.pop();
            else
                st.push(s[i]);

        }

    }
    int open =0, close =0;
    while(!st.empty())
    {
        if(st.top()=='(')
            open++;
        else if(st.top()==')')
            close++;

        st.pop();
    }
    if((open ==0 && close == 0) || (open ==1 && close == 1) )
        cout<< "Yes" << '\n';
    else
        cout<< "No" << '\n';

}
