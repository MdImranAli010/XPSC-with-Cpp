// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >>t;
  while (t--){
    long long A, B, K, ans=0;
    cin >> A >> B >> K;
    while(true){
        if(B%K==0 && B/K>=A){
            ans++;
            B=B/K;
        }
        else if( B%K==0 ){
            ans= ans+B-A;
            break;
        }
        else{
            ans= ans+B % K;
            B=B-B % K;
        }
    }
    cout<<ans<<endl;
  }
  
  return 0;
}
