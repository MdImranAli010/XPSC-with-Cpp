// Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a, b, n;
        cin>>a>>b>>n;

        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        long long tot=b;

        for(int i=0; i<n; i++){
            tot += min((long long)(1+arr[i]), (long long)a)-1;
        }
        cout<<tot<<endl;
    }
    return 0;
}
