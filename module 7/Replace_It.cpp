#include<bits/stdc++.h>
using namespace std;

string Replace(string s, string x) 

{

    size_t posi = 0;
    
    while ((posi = s.find(x, posi)) != string::npos) 
    {

        s.replace(posi, x.length(), "$");
        posi += 1; 

    }

    return s;
}

int main() 
{
   
    int T;
    cin >> T;

    while (T--) 
    {
       
        string S, X;
        cin >> S >> X;

        string modify = Replace(S, X);

        
       cout << modify << std::endl;
    }

    return 0;
}
