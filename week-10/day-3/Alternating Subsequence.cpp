// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> ar;
        for(int i=0; i<n; i++){
            int k;
            cin>>k;
            ar.push_back(k);
        }
        long long mx=-1e11, sum=0;
        int flg=1;
        for(int i=0; i<n; i++){
            if(flg==true){
                if(ar[i]<0){
                    if(mx>-1e10){
                        sum += mx;
                    }
                    mx = -1e11;
                    flg = 0;
                }
            }

            else {
                if(ar[i]>0){
                    if(mx>-1e10){
                        sum += mx;
                    }
                    mx = -1e11;
                    flg =1;
                }
            }
            mx=max(ar[i], mx);
        }
        if(mx> -1e10){
            sum += mx;
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}
