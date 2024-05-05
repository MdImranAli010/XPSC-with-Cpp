// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<long long> arr_a(n), arr_b(n+2, 0);
        
        for(int i=0; i<n; i++){
            cin>>arr_a[i];
        }

        for(int i=0; i<n; i++){
            if(arr_a[i] > n){
                continue;
            }
            arr_b[arr_a[i]]++;
        }

        long long result=0;
        for(int i=1; i<=n; i++){
            long long rcnt=0;
            for(int j=1; pow(j,2)<= i; j++){
                if(i%j==0){
                    rcnt += arr_b[j];
                    if(pow(j,2) != i){
                        rcnt=rcnt+arr_b[i/j];
                    }
                }
            }
            result=max(result, rcnt);
        }

        cout<<result<<endl;
    }
    return 0;
}
