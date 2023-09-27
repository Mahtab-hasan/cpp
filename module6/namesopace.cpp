#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age =23;
    void helo()
    {
        cout << "rakib naem "<<endl;
    }

}
namespace Shakib
{
    int age =34;
    void helo()
    {
        cout << "shakib name"<<endl;
    }
} 
using namespace Rakib; 
int main() 
{
    cout <<age<<endl;
    helo();
    Shakib::helo();

    return 0;
}