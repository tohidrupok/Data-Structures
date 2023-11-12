#include<bits/stdc++.h>
using namespace std;
vector<int> quick_short(vector<int>a)
{

    if(a.size()<=1)
        return a;
    int pivot= rand()%a.size();
    cout<<"Pivot of the index is "<<pivot<<"\n";
    vector<int> b,c;
    for(int i=0; i<a.size(); i++)
    {
        if(i==pivot)
            continue;
        if(a[i]<=a[pivot])
            b.push_back(a[i]);
        else
            c.push_back(a[i]);

    }
    vector<int>short_b=quick_short(b);
    vector<int>short_c=quick_short(c);

    vector<int>final_a;
    for(int i=0; i<short_b.size(); i++)
        final_a.push_back(short_b[i]);

    final_a.push_back(a[pivot]);

    for(int i=0; i<short_c.size(); i++)
        final_a.push_back(short_c[i]);

    return final_a;
}
int main()
{
    int n,v;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        a.push_back(v);
    }

    vector<int>sorted_a=quick_short(a);
    for(int i=0;i<sorted_a.size();i++)
    {
        cout<<sorted_a[i]<<" " ;
    }

    return 0;
}
