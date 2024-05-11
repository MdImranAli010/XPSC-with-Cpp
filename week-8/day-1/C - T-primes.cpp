// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

vector<bool> prime(1000001, true);

void T_primes() {
    prime[0]=prime[1]=false;
    for(int i=2; i<=1000; i++){
        if(prime[i]){
            for(int j=i*i; j<=1000000; j+=i){
                prime[j]=false;
            }
        }
    }
}

int main() {
    T_primes();
    
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        long long sq=sqrt(n);
        
        if(sq*sq==n && prime[sq]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
