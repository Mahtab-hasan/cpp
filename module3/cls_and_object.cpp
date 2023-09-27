#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll ;
    int cls;
    char section;

};
int main()
{
    student rahim ;
    rahim.cls=9;
    rahim.roll=30;
    rahim.section='A';
    char nm[100]="rahim uddin vaya";
    strcpy(rahim.name,nm);

    student korim;
    korim.cls=5;
    korim.roll=10;
    korim.section='B';
    char nm2[100]="korim korola";
    strcpy(korim.name,nm2);

    cout<<"Full name-"<<rahim.name<<endl;
    cout<<"Class-"<<rahim.cls<<endl;
    cout<<"Roll-"<<rahim.roll<<endl;
    cout<<"Section-"<<rahim.section<<endl;
   
    cout<<endl;

    cout<<"Full name-"<<korim.name<<endl;
     cout<<"Class-"<<korim.cls<<endl;
    cout<<"Roll-"<<korim.roll<<endl;
    cout<<"Section-"<<korim.section<<endl;


    return 0;
}
