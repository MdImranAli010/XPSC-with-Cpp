                                            // Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, s;
    cin>>n>>s;
    
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    long long ans=0;
    long long sum=0, l=0;
    
    for(int r=0; r<n; r++){
        sum += a[r];
        while(sum>s){
            sum -= a[l];
            l++;
        }
        ans += r-l+1;
    }

    cout<<ans<<endl;

    return 0;
}

