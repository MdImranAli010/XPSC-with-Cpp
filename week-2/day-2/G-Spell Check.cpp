// Author: Md. Imran ALi


#include <iostream>
#include <algorithm>

using namespace std;

bool Taimur(string s) {
    sort(s.begin(), s.end());
    string timur = "Timur";
    sort(timur.begin(), timur.end());

    if (s[0] != 'T')
        return false;

    return s == timur;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (Taimur(s)) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

