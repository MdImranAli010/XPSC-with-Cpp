                                                            // Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        vector<int> v;
        v.push_back(0);
        int encounter_odd_num=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x & 1){
                encounter_odd_num++;
            }
            v.push_back(encounter_odd_num);
        }
        while(q--){
            int l, r, k;
            cin>>l>>r>>k;
            int cnt_odd_num=v[r]-v[l-1];
            int odd=encounter_odd_num-v[r]+v[l-1];
            if (k & 1){
                odd += r-l+1;
            }
            if (odd & 1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}



