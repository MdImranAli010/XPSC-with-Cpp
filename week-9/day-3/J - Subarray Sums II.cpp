// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long X;
    cin>>N>>X;

    unordered_map<long long, int> frq;
    frq[0]=1;

    long long pre_sum=0, cnt=0;

    for(int i=0; i<N; i++){
        long long a;
        cin>>a;
        pre_sum += a;
        cnt += frq[pre_sum-X];
        frq[pre_sum]++;
    }

    cout<<cnt<<endl;
    
    return 0;
}
