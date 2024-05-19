// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, x;
    cin>>N>>x;

    vector<long long> nums(N);
    for(int i=0; i<N; i++){
        cin >> nums[i];
    }

    int cnt=0, sum=0, L=0;

    for(int R=0; R<N; R++){
        sum += nums[R];
        
        while(sum>x && L<=R){
            sum -= nums[L];
            L++;
        }
        
        if(sum==x){
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
