// Audhor: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int maximum= -1, arr[1001]={0};
        for(int i=1; i<=n; i++){
            int tmp;
            cin>>tmp;
            arr[tmp]=i;
        }
        
        for(int i=1; i<=1000; i++){
            for(int j=1; j<=1000; j++){
                if(arr[i] && arr[j] && __gcd(i, j)==1){
                    maximum=max(maximum, arr[i]+arr[j]);
                }
            }
        }
        
        cout<<maximum<<endl;
    }
    
    return 0;
}
