// Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        long long c;
        cin>>c;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]=a[i]+(i+1);
        }
 
        sort(a.begin(),a.end());
        int res=0;
        long long sum=0;

        for(int i=0; i<n && sum+a[i]<=c; i++){
            sum = sum+a[i];
            res++;
        }
        cout<<res<<endl;
    }
    return 0;
}
