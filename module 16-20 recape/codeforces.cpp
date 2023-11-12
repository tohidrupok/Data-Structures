#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>cnt;
    while(n--)
    {
        string s;
        cin>>s;
        if(cnt[s]>=1)
            cout << s << cnt[s] << '\n';
        else
            cout << "OK" << '\n';
        cnt[s]++;
    }
    return 0;

}
