// Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;

        long long n1=s1.length(), n2=s2.length(), ans=n1+n2;

        for(long long L1=1; L1<=n1; L1++){
            for(long long L2=1; L2<=n2; L2++){
                for(long long i=0; i<=n1-L1; i++){
                    for(long long j=0; j<=n2-L2; j++){
                        if(s1.substr(i, L1)==s2.substr(j, L2)){
                            ans=min(ans, n1+n2-L1-L2); 
                        }
                    }
                }
                
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
