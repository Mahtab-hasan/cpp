#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll ;
    int cls;
    char section;
    
    student(int r,int s,int c,char* n)
    {
        roll=r;
        section=s;
        cls=c;
        strcpy(name,n);

    }

};
student fun()
{
    char name[100]="mahtab hasan arpon";
    student arpon(35,'A',11,name);
    return arpon;
}   
int main()
{
    student arpon=fun();

    cout<<"full Name: " <<arpon.name<<endl;
    cout<<"Roll: "      <<arpon.roll<<endl;
    cout<<"Section: "   <<arpon.section<<endl;
    cout<<"Class: "     <<arpon.cls<<endl;
    
    // cout<<endl;

    // cout<<"full Name: "<<mahtab.name<<endl;
    // cout<<"Roll: "     <<mahtab.roll<<endl;
    // cout<<"Section: "  <<mahtab.section<<endl;
    // cout<<"Class: "    <<mahtab.cls<<endl;
    



    return 0;
}