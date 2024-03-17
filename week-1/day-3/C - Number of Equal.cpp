#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    long long pairs = 0;
    int i = 0, j = 0;
    
    while(i < n && j < m) {
        if(a[i] == b[j]) {
            long long count_a = 0, count_b = 0;
            while(i < n && a[i] == b[j]) {
                count_a++;
                i++;
            }
            while(j < m && b[j] == a[i - 1]) {
                count_b++;
                j++;
            }
            pairs += count_a * count_b;
        } 
        else if(a[i] < b[j]) {
            i++;
        } 
        else {
            j++;
        }
    }
    
    cout << pairs << endl;
    
    return 0;
}
