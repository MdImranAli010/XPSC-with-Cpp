// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;
    int n = str.size();

    vector<int> freq(26, 0);
    for (char c : str) {
        freq[c - 'A']++;
    }

    int odd_count = 0;
    char odd_char;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            odd_count++;
            odd_char = 'A' + i;
        }
    }

    if (odd_count > 1 || (odd_count == 1 && n % 2 == 0)) {
        cout << "NO SOLUTION"<<endl;
        return 0;
    }

    string first_half = "";
    string second_half = "";

    for (int i = 0; i < 26; i++) {
        string temp(freq[i] / 2, 'A' + i);
        first_half += temp;
        second_half = temp + second_half;
    }

    string result = first_half;
    if (odd_count == 1) {
        result += odd_char;
    }
    result += second_half;

    cout << result <<endl;
    
    return 0;
}
