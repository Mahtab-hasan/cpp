 #include <iostream>
#include <string>

using namespace std;

string replace_it(string s, string x) {
    int pos = s.find(x);
    while (pos != -1) {
        s.replace(pos, x.length(), "$");
        pos = s.find(x, pos + 1);
    }
    return s;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();  // Ignore the newline character after T

    while (T--) {
        string s, x;
        cin >> s >> x;
        s = replace_it(s, x);  // Assign the modified string back to s
        cout << s << endl;
    }

    return 0;
}
