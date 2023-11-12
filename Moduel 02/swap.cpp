#include<bits/stdc++.h>
using namespace std;
void swep(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swep(a,b);
    cout<<a<<" "<<b;
}
