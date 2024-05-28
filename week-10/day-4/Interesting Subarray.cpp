// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

void Interesting_Subarray() {
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for (int i=0; i<n-1; i++){
        if(abs(arr[i+1] - arr[i])>1){
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        Interesting_Subarray();
    }
    
    return 0;
}
