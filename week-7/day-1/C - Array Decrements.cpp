// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;                  
    cin >> t;;
    while (t--) {
        int n;              
        cin >> n;
        vector<int> ar_a(n), ar_b(n);            
        for(int i=0; i<n; i++){
            cin>>ar_a[i];
        }
        for(int i=0; i<n; i++){
            cin>>ar_b[i];
        }

        int dfr_1=-1, dfr_2=-1;
        bool no=0;
        for (int i = 0; i < n; i++) {
            if (ar_a[i] < ar_b[i]) {
                no = 1;
                break;
            }
            if(ar_b[i] != 0) {
                if (dfr_1 == -1) dfr_1 = ar_a[i] - ar_b[i];
                else if (ar_a[i] - ar_b[i] != dfr_1) {
                    no = 1;
                    break;
                }
            } 
            else {
                dfr_2 = max(dfr_2, ar_a[i] - ar_b[i]);
            }
        }

        if (no==1) {
            cout<<"NO"<<endl;
            continue;
        }
         if (dfr_1>=dfr_2 || dfr_1 ==-1) {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
