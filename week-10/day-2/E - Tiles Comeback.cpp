// Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        if (arr[0]== arr[n-1]) {
            int jmp = count(arr.begin(), arr.end(), arr[0]);
            if (k>jmp){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        else {
            int X=0, Y=0, x=n, y=0;
            for (int i=n-1; i>=0; i--){
                if(arr[i] == arr[n-1]){
                    Y++;
                }
                if(Y == k){
                    y=i;
                    break;
                }
            }
            for(int i=0; i<n; i++){
                if(arr[i]==arr[0]){
                    X++;
                }
                if(X==k){
                    x=i;
                    break;
                }
            }
            if(x<y){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}
