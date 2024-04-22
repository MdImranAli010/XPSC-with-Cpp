// Author: Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int a, b;
    while(cin>>a){
        vector<int> A(1005, 0), B(1005, 0);
        
        int x;
        for(int i=1; i<=a; i++){
            cin>>x;
            A[x]++;
        }
        
        cin>>b;
        for(int i=1; i<=b; i++){
            cin>>x;
            B[x]++;
        }
        
        int ans=0;
        for(int i=1; i<=1000; i++){
            while(A[i]>0){
                if(B[i-1]>0){
                    ans++;
                    A[i]--;
                    B[i-1]--;
                }
                else if(B[i]>0){
                    ans++;
                    A[i]--;
                    B[i]--;
                }
                else if(B[i+1]>0){
                    ans++;
                    A[i]--;
                    B[i+1]--;
                }
                else{
                    break;
                }
            }
        }
        
        cout<<ans<<endl;
    }

    return 0;
}
