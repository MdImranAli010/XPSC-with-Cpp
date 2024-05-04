// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int arr_a[n+3];
        for(int i=0; i<n; i++){
            cin>>arr_a[i];
        }
        
        int arr_b[n+3];
        for(int i= 0; i<n; i++){
            cin>>arr_b[i];
        }
        sort(arr_a, arr_a+n);
        sort(arr_b, arr_b+n);
        int result=0;
        for(int i=n-1; i>=0; i--){
            int x=arr_b[i]-arr_a[i];
            if(x>1 || arr_a[i]>arr_b[i])
            {
                result=1;
                break;
            }
        }
        if(result==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
