// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

long long Non_coprime_Split(long long x,long long y){
    long long c=1;
    while(y>0){
        if(y&1){
            c=(c*x)%mod;
        }
        x=(x*x)%mod;
        y/=2;
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        int pr=1;
        for(int i=l;i<=r;i++){
            if(pr==0){
                break;
            }
            for(int j=2;j*j<=i;j++){
                if(pr==0){
                    break;
                }
                if(i%j==0){
                    cout<<j<<' '<<i-j<<endl;
                    pr=0;
                }
            }
        }
        if(pr){
            cout<<-1<<endl;
        }
    }
    
    return 0;
}
