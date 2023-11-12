#include<bits/stdc++.h>
using namespace std;
vector<int>even_generator(vector<int>a)
{
    vector<int> result {};
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]%2==0)
            result.push_back(a[i]);
    }
    return result;
}
int main()
{
    vector<int> v1 {12, 44, 73, 131, 2 };
    vector<int>print_a=even_generator(v1);
    cout<<"In this vector even numbers is :";
    for(int i=0; i<print_a.size(); i++)
    {
        cout<<print_a[i]<<" " ;
    }
    return 0;
}
