#include<bits/stdc++.h>
using namespace std;

struct Student 
{
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmps(const Student& a, const Student& b) 
{
    int marks1 = a.math_marks + a.eng_marks;
    int marks2 = b.math_marks + b.eng_marks;

    if (marks1 == marks2) 
    {
        return a.id < b.id;
    }
    return marks1 > marks2;
}

int main() 
{
    int n;
    cin >> n;

    vector<Student> ss(n);

    for (int i = 0; i < n; ++i) 
    {
        cin >> ss[i].name >> ss[i].cls >> ss[i].section >> ss[i].id >> ss[i].math_marks >> ss[i].eng_marks;
    }

    sort(ss.begin(), ss.end(), cmps);

    for (const auto& student : ss) 
    {
        cout << student.name << " " << student.cls << " " << student.section << " " << student.id << " " << student.math_marks << " " << student.eng_marks << endl;;
    }

    return 0;
}
