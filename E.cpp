#include<iostream>
#include<string>
using namespace std;

  int main() {
    string s = "codeforces";
    int t;
    cin >> t;

    while (t--) {
        char c;
        cin >> c;

        bool found = false;
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == c) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }



    return 0;
}