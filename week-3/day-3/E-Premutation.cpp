                                                    // Author: Md. Imran ALi


#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0), cout.tie(0);
    
    
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<vector<int>> a(n+5, vector<int>(n+5));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-1 ; j++){
                cin >> a[i][j];
            }
        }
        int permut=a[1][1];
        int idx=1;
        for(int i=2; i<=n ; i++){
            if(a[i][1] != permut){
                if(a[i+1][1] == a[i][1]){
                    permut=a[i][1]; 
                    break;
                }
                else{
                    idx=i ; 
                    break;
                }
            }
        }
        cout<<permut<<" ";
        for(int i=1; i<=n-1; i++){
            cout<<a[idx][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}



