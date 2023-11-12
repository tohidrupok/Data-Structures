#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int std_ID;
    int age;
    string fathers_name;
    string mothers_name;

    void print_info()
    {
        cout<<name<<" "<<std_ID<<" "<< age <<" "<< fathers_name<<" "<<  mothers_name <<"\n";
    }
};
int main()
{
    student s;
    s.name ="Tohid";
    s.std_ID =120176;
    s.age =21;
    s.fathers_name="Anwar Ullah";
    s.mothers_name ="Akmima Begum Rubi";
    s.print_info();

     student s2;
    s2.name ="Umme";
    s2.std_ID =120177;
    s2.age =91;
    s2.fathers_name="X";
    s2.mothers_name ="Y";
    s2.print_info();
    return 0;

}
