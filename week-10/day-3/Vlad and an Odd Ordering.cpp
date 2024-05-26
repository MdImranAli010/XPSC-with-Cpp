// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

void Vlad_Odd() {
    long long n, k, x, y;
    long long ans;
    cin>>n>>k;
    int a=(log2(n)+1);
    for(int i=1; i<=a; i++){
        x=pow(2,i);
        y=(n+(x/2))/x;
        if(y>=k){
            if(k==1){
                cout<<(x/2)<<endl;
                return;
            }
            else{
                ans=(x/2)+((k-1)*x);
                cout<<ans<<endl;
                return;
            }
        }
        else{
            k-=y;
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        Vlad_Odd();
    }
    return 0;
}
