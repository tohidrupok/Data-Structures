#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int sz;
        cin>>sz;
        string s;
        cin>>s;
        stack<char>q_st;
        for(int i=0;i<sz;i++)
        {
            char c = s[i];
            if(c=='Q')
                q_st.push(c);
            else{
                if(q_st.empty()==false)
                q_st.pop();

            }

        }
        if(q_st.empty()==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
