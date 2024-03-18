#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int act=0;
        int ext=0;
        for(int i=0; i<n; i++){
            int diff=max(0, a[i]-i-1-ext);
            act += diff;
            ext += diff;
        }
        cout<<act<<endl;
    }

    return 0;
}
