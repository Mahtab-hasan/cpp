#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    person(string name, int age)
    {
        this->name=name;
        this->age=age;
           
    }

};

int main()
{
    person* rakib=new person ("rakinb hashnm",17);
    person* shakib =new person ("shakib al hasan ",36);
     
    // rakib =shakib;
     
     * rakib=*shakib;


     cout << rakib ->name << " " << rakib ->age << endl;


    return 0;
}