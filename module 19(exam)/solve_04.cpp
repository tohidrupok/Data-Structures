#include<bits/stdc++.h>
using namespace std;
bool Ispalindrem(string word,int i,int j)
{
  if(i>=j)
        return true ;
  if(word[i]==word[j])
    return Ispalindrem(word,i+1,j-1);
  else
    return false;
}
int main()
{
    string s;
    cin>>s;
    if(Ispalindrem(s,0,s.length()-1))
        cout<<"Yes"<<'\n';
    else
        cout<<"NO"<<'\n';
    return 0;
}
