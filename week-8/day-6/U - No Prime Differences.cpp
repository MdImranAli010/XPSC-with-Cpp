// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin>>n>>m;

        int c=1;
        int arr[n][m];
        for (int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                arr[i][j]=c;
                c++;
            }
        }
        
        for(int i=1; i<n; i += 2){
            for(int j=0; j<m; j++){
                cout<<arr[i][j]<<' ';
            }
            cout<<endl;
        }

        for(int i=0; i<n; i += 2){
            for(int j=0; j<m; j++){
                cout<<arr[i][j]<<' ';
            }
            cout<<endl;
        }

        cout<<endl;
    }

    return 0;
}
