#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    long long sum=0;
    int smallest_odd=INT_MAX;

    for(int i=0; i<n; i++){
        sum += a[i];
        if(a[i] % 2 != 0 && a[i]<smallest_odd){
            smallest_odd=a[i];
        }
    }

    if(sum % 2 != 0){
        sum -= smallest_odd;
    }

    cout<<sum<<endl;

    return 0;
}
