#include<bits/stdc++.h>
using namespace std;
int main()
{
    // char a[100]= "hello";

    // cout<< a << endl;
    // cout << strlen(a)<< endl; before 

    // string s="jello";
    
    // cout<<s<<endl;
    // cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl;
    // string a="hkasasdlasjjaldjlakjdlkajjhahkjhaskdhash";
    // cout<<a.capacity()<<endl;
    // a="hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
    // cout<<a.capacity()<<endl;
    // cout<<a.size()<<endl;

    // string s="kirito";
    // cout<<s<<endl;
    // s.clear();
    // cout << s<< endl;
    // cout<<s.size()<<endl;

    // string s="kjsjdhf";
    // s.clear();
    // if(s.empty () == true) cout<<"empty"<<endl;
    // else cout<<"not empty"<<endl;
    // if(s.size()== 0) cout<<"empty"<<endl;
    // else cout<<"not empty"<<endl;

    string s ;
    cin>>s;
    s.resize(11);
    s.resize(15,'e');
    
    cout<<s.size()<<endl;
    cout<<s<<endl;
    


    return 0;
}