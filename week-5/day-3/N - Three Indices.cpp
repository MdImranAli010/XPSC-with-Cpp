// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i=0; i<n; i++){
            cin>>p[i];
        }
        bool found=false;
        for(int i=0; i<n-2; i++){
            if(p[i]<p[i+1] && p[i+1] > p[i+2]){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<" "<<i+3<<endl;
                found=true;
                break;
            }
        }
        if(!found){
            cout << "NO" << endl;
        }
    }
    return 0;
}
