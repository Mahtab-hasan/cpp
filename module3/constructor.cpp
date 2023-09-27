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
int main()
{
    student apron(30,'A',8,"Mahtab Hasan Arpon");

    student eren(5,'B',9,"Eren Yeager");

    cout<<"full Name: " <<apron.name<<endl;
    cout<<"Roll: "      <<apron.roll<<endl;
    cout<<"Section: "   <<apron.section<<endl;
    cout<<"Class: "     <<apron.cls<<endl;
    
    cout<<endl;

    cout<<"full Name: "<<eren.name<<endl;
    cout<<"Roll: "     <<eren.roll<<endl;
    cout<<"Section: "  <<eren.section<<endl;
    cout<<"Class: "    <<eren.cls<<endl;
    



    return 0;
}
