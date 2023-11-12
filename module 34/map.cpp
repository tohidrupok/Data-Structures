#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["remon"] = 2007;
    mp["refar"]= 2005;
    mp["Rupok"] = 2002;
    mp["Salma"] = 2003;
    mp["sumaiya"] =2006;
    mp["jobayed"] =2012;


    for(auto it:mp)
    {
        cout<<"Key :"<<it.first<<",   BirthDay: "<<it.second<<"\n";
    }

    mp["jobayed"] = 2013;
    mp["jobayed"] = 2011;
    cout<<mp["jobayed"]<<"\n";
    cout<<mp.size()<<"\n";


    map<int,int>mp2;
    mp2[69]=1;
    mp2[57]=4;
    mp2[89]=4;

    mp2[1000]=10;
    for(auto it:mp2)
    {
        cout<<"Key :"<<it.first<<", Value: "<<it.second<<"\n";
    }
    return 0;
}
