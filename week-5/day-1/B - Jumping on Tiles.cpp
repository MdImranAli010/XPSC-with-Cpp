// Author: Imran Ali


#include <bits/stdc++.h>
using namespace std;

void Jumping_on_Tiles(){
    string s;
    cin>>s;
    int n=s.size();

    vector<pair<char, int>> pair_order;

    char mini=min(s[0], s[n-1]);
    char maxi=max(s[0], s[n-1]);

    for(int i=0; i<n; i++){
        if((s[i] >= mini && s[i] <= maxi)){
            pair_order.push_back({s[i], i});
        }
    }

    sort(pair_order.begin(), pair_order.end(), [&](pair<char, int>x, pair<char, int> y){
        return x.second < y.second;
    });

    if(pair_order.size()>2){
        sort(pair_order.begin()+1, pair_order.begin() + pair_order.size()-1, [&](pair<char, int> x, pair<char, int> y){
            if(s[0]>s[n-1]){
                return x.first > y.first;
            }
            return x.first < y.first;
        });
    }

    vector<int> ord_seq;
    long long jump=0;
    ord_seq.push_back(1);

    for(int i=1; i<pair_order.size(); i++){
        jump += abs(pair_order[i-1].first-pair_order[i].first);
        ord_seq.push_back(pair_order[i].second + 1);
    }

    cout<<jump<<" "<<ord_seq.size()<<endl;

    for(auto i:ord_seq){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        Jumping_on_Tiles();
    }
    return 0;
}
