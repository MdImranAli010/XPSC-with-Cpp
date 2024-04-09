// // Author: Md. Imran ALi


#include <bits/stdc++.h>
using namespace std;

void xorry() {
    int x;
    scanf("%d", &x);
    
    string bin = bitset<32>(x).to_string();
    size_t position = bin.find('1', bin.find('1') + 1);

    int count = 0;
    for (size_t i = position; i < bin.size(); i++) {
        if (bin[i] == '0')
            count++;
    }
    int pair = 1 << count;
    printf("%d\n", pair);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        xorry();
    }
    return 0;
}
