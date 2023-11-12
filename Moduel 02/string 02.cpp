#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    //for(int i=0;i<s.size();i++)
        //s[i]=s[i]+1;

    //s.pop_back();
    getline(cin,s);
    s.pop_back();
    s.erase(s.begin());
    cout<<s;
    return 0;
}
