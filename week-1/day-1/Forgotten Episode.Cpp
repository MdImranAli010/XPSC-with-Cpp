#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> watch(n - 1);
    
    for (int i = 0; i < n - 1; ++i)
        cin >> watch[i];

    long long total_sum = (1LL + n) * n / 2;
    long long watched_sum = 0;
    
    for (int i = 0; i < n - 1; ++i)
        watched_sum += watch[i];

    cout << total_sum - watched_sum << endl;

    return 0;
}
