#include<bits/stdc++.h>
using namespace std;
class student{
private:
    string name ;
    int roll;
public:
    void setinfo(string s,int rol)
    {
        name = s;
        roll = rol;
    }
    void print_koro()
    {
        cout<<name<<" "<< roll<<"\n";
    }

};

int main()
{
    student a;
    a.setinfo("Allah's name",99);
    a.print_koro();

}
