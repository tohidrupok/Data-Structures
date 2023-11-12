#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=100;
    int* y=&x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<*y<<endl;

    x=999;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<*y<<endl;
    return 0 ;

}
