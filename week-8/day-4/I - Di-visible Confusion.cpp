// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+3];
        bool res=false;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        for(int i=1; i<=n; i++){
            int idx=0;
            for(int j=2; j<=i+1; j++){
                if(arr[i]%j != 0){
                    idx=1;
                    break;
                }
            }
            if(idx==0){
                res=true;
                break;
            }
        }
        if(res !=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
