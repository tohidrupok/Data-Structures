#include<bits/stdc++.h>
using namespace std;

class user{
 protected:
     string name;
     int roll;

};
class admin:user{
    private:
     string designation;
    public:
        void setkor(string n,int hajira,string dg)
        {
            name=n;
            roll=hajira;
            designation=dg;
        }
        void print()
        {
            cout<<name<<"\n";
            cout<<roll<<"\n";
            cout<<designation<<"\n";
        }

};
int main()
{
    admin ad;
    ad.setkor("Salma",01,"Welcome");
    ad.print();
}


