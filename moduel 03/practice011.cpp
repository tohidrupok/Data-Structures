#include<bits/stdc++.h>
using namespace std;


class student{
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
class ractangle{
public:
    int width,heigst;
    student s;
    int calculate_area()
    {
        return width*heigst;
    }
    int calculate_perimeter()
    {
        return 2*(width+heigst);
    }


};

class person{
  public:
  string name;
  person *father,*mother;

  void print_koro()
  {
      cout<<"My Name     :"<<name<<"\n";
      cout<<"Father name :"<<father->name<<"\n";
      cout<<"Mother name :"<<mother->name<<"\n";
  }

};



int main()
{

    person s;
    s.father = new person;
    s.mother = new person;
    s.name ="Tohid";
    s.father->name ="Anwar";
    s.mother->name ="Aklima";
    s.print_koro();







    //ractangle r1,r2;
    //r1.heigst = 4;
    //r1.width = 8;
    //cout<<r1.calculate_area()<<"\n";
    //cout<<r1.calculate_perimeter()<<"\n";

    //r1.s.name ="Rupok";
    //r1.s.print_info();


    //r2.heigst = 9;
    //r2.width  = 6;
    //cout<<r2.calculate_area()<<"\n";
    //cout<<r2.calculate_perimeter()<<"\n";
}
