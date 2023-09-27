#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout << s[1]<< endl;  //front eita korbo besi...
    cout << s.at(0) << endl;  // kom korbo
    cout<< s[s.size()-1]<<endl; // kom korbo
    cout<< s.back()<<endl; //back eita korbo basi..
    cout<<s.front()<<endl; // kom korbo
    return 0;
}