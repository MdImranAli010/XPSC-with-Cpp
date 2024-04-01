                                        // Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;

int main() {
    ios::sync_with_stdio(false);
    
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++){
        int n;
        cin >> n;
        
        vector<pair<int, int>> a[4];
        for (int i = 1; i <= 3; i++) {
            a[i].clear();
        }
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            a[1].push_back({x, i});
        }
        
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            a[2].push_back({x, i});
        }
        
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            a[3].push_back({x, i});
        }
        for (int i = 1; i <= 3; i++) {
            sort(a[i].begin(), a[i].end(), greater<pair<int, int>>());
        }
        
        int result = 0;
        for (int i = 0; i <= 2; i++) {
            for (int j = 0; j <= 2; j++) {
                for (int k = 0; k <= 2; k++) {
                    if (a[1][i].second != a[2][j].second && a[1][i].second != a[3][k].second && a[2][j].second != a[3][k].second){
                        int x = a[1][i].first + a[2][j].first + a[3][k].first;
                        result=max(result, x);
                    }
                }
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}
