// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

vector<int> vec_pime= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        
        vector<int> vec_res(n, -1);
        int rec=1;
        
        for (int i=0; i<vec_pime.size(); i++){
            int col_get=0, p=vec_pime[i];
            for (int j=0; j<n; j++){
                if(vec_res[j] != -1){
                    continue;
                }
                if(arr[j]%p){
                    continue;
                }

                col_get=1;
                vec_res[j]=rec;
            }
            if(col_get==true){
                rec++;
            }
        }
        cout<<(rec-1)<<endl;
        
        for(int i=0; i<n; i++){
            cout<<vec_res[i]<<' ';
        }
        cout <<endl;
    }
    
    return 0;
}
