// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

void sort_reverse(vector<int>& number){
    sort(number.begin(), number.end());
    reverse(number.begin(), number.end());
}

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n, m, h;
        cin>>n>>m>>h;

        vector<int> car(n);
        for(int i = 0; i < n; i++){
            cin>>car[i];
        }

        vector<int> outlet(m);
        for (int i = 0; i < m; i++){
            cin>>outlet[i];
        }

        sort_reverse(car);
        sort_reverse(outlet);

        int i=0;
        int j=0;
        long long crnt_enrgy=0;
        long long final_enrgy=0;

        while(i<n && j<m){
            crnt_enrgy=static_cast<long long>(h) * outlet[j];
            final_enrgy += min(static_cast<long long>(car[i]), crnt_enrgy);
            i++;
            j++;
        }

        cout<<final_enrgy<<endl;
    }

    return 0;
}
