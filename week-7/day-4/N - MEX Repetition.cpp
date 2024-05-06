// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n, x;
        cin>>n>>x;

        long long total, sum=0;
        vector<long long> nums;
        total=n*(n+1)/2;
        for(int i=0; i<n; i++){
            long long curr;
            cin>>curr;
            nums.push_back(curr);
            sum += curr;
        }

        nums.push_back(total-sum);
        x=x%(n+1);

        for(int i=0; i<n; i++){
            long long z=(i-x+n+1) % (n+1);
            cout<<nums[z]<<" ";
        }

        cout << endl;
    }

    return 0;
}
