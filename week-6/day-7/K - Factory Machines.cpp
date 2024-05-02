// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	
    long long n, t;
    cin>>n>>t;
    vector<long long> vec(n);
    for(int i=0; i<n; i++){ 
        cin>>vec[i]; 
    }
    long long Low=0, High=1e18, ans=0;
    while(High>=Low){
        long long mid=(Low+High) / 2;
        long long sum=0;
        for(int i=0; i<n; i++){
            sum += (mid / vec[i]);
            if(sum >= t){
                break;
            }
        }
        if(sum >= t){
            ans=mid;
            High=mid-1;
        }
        else{
            Low=mid+1;
        }
    }
    cout<<ans<<"\n";
}
