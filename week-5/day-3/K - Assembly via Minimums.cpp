// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;
 
void Assembly_via_Minimums(){
    int n;
    cin>>n;
    int total_pairs=n*(n-1)/2;
    vector<int> nums(total_pairs);
    for(int i=0; i<total_pairs; i++){
        cin>>nums[i];
    }
 
    sort(nums.begin(), nums.end());
    for(int i=0; i<total_pairs; i+=--n){
        cout<<nums[i]<<" ";
    }
    cout<<nums[total_pairs-1]<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        Assembly_via_Minimums();
    }
    
    return 0;
}
