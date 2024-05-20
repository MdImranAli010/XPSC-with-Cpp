// Author: Md. Imran Ali




#include <bits/stdc++.h>
using namespace std;

const int mx = 2e5;

int main() {
    int N, a;
    cin>>N;
    unordered_map<int, int> freq;
    freq[0]=1;
    long long cnt=0;
    int prv=0;
    for(int i=0; i<N; i++){
        cin>>a;
        prv=(prv+a) % N;
        if(prv<0){
            prv += N;
        }
        cnt += freq[prv];
        freq[prv]++;
    }
    
    cout<<cnt<<endl;
    
    return 0;
}
