                                        // Author: Md. Imran ALi


#include <bits/stdc++.h>
using namespace std;

int max_sum(const vector<vector<int>>& a, int n, int m){
    int mx=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int sum=a[i][j];
            for(auto [di, dj] : vector<pair<int, int>>({{-1, -1}, {-1, 1}, {1, -1}, {1, 1}})){
                for(int i2=i+di, j2=j+dj; 0<=i2 && i2<n && 0<=j2 && j2<m; i2 += di, j2 += dj){
                    sum += a[i2][j2];
                }
            }
            mx=max(mx, sum);
        }
    }
    return mx;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> a(n, vector<int>(m));
        for(auto& ai : a){
            for(auto& aij : ai){
                cin>>aij;
            }
        }
        cout<<max_sum(a, n, m)<<endl;
    }
    return 0;
}
