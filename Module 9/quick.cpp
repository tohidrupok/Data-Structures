#include<bits/stdc++.h>
using namespace std;
vector<int> quick_short(vector<int>a)
{

    if(a.size()<=1)
        return a;
    int pivot= rand()%a.size();

    vector<int> b,c;
    for(int i=0; i<a.size(); i++)
    {
        if(i==pivot)
            continue;
        if(a[i]>=a[pivot])
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
    vector<int> myVector;
    int input,n;
    cin>>n;
    while(n--)
    {
        cin>>input;
        myVector.push_back(input);
    }
    vector<int>sorted_a=quick_short(myVector);
    for(int i=0; i<sorted_a.size(); i++)
    {
        cout<<sorted_a[i]<<" " ;
    }

    return 0;
}
