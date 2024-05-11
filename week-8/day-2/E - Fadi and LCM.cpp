// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

long long x;

long long gcd(long long a, long long b){
    while(b != 0){
        long long temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

long long lcm(long long a, long long b){
    return (a/gcd(a, b))*b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>x;
    long long ans;
    for(long long i=1; i*i <= x; i++){
        if(x%i==0 && lcm(i, x/i)==x){
            ans=i;
        }
    }
    cout<<ans<<" "<<x/ans<<endl;
    
    return 0;
}
