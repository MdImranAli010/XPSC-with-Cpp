// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

class comp{
public:
    bool operator() (pair<int, int> x, pair<int, int> y) {
        if (x.first == y.first) {
            return x.second > y.second;
        }
        return x.first < y.first;
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    priority_queue<pair<int, int>, vector<pair<int, int>>, comp> pq;
    set<int> st;
    int id = 0, x, m;
    while (t--) {
        cin >> x;
        if(x==2){
            cout<<*st.begin()<<" ";
            st.erase(st.begin());
        }
        else if(x==1){
            cin>>m;
            pq.push({m, ++id});
            st.insert(id);
        }
        else{
            pair<int, int> pr=pq.top(); pq.pop();
            while(!pq.empty() && st.find(pr.second)==st.end()){
                pr=pq.top();
                pq.pop();
            }
            st.erase(pr.second);
            cout<<pr.second<<" ";
        }
    }
    cout<<endl;
    
    return 0;
}
