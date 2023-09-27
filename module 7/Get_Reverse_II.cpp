#include<bits/stdc++.h>
using namespace std;

struct Student 
{
    string name;
    int cls;
    char section;
    int id;
};

int main() {
    int n;
    cin >> n;

    vector<Student> ss(n);

    for (int i = 0; i < n; ++i) 
    {
        cin >> ss[i].name >> ss[i].cls >> ss[i].section >> ss[i].id;
    }

    for (int i = 0; i < n / 2; ++i) 
    {
        swap(ss[i].id, ss[n - i - 1].id);
    }

    for (const auto& student : ss) 
    {
        cout << student.name << " " << student.cls << " " << student.section << " " << student.id << endl;;
    }

    return 0;
}
