#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name ;
    getline(cin,name);
    int m=name.size();
    for(int i=0;i<m;i++)
    {

        if(i%2==0)
        {
          if(name[i]==122)
          {
              name[i]=name[i]-26;
          }
          name[i]= name[i]+1;
        }
    }
    cout<<name;

}
