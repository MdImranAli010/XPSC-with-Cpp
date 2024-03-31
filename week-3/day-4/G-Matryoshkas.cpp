                                            // Author: Md.Imran Ali


#include<bits/stdc++.h>
using namespace std;

void matryoshkas(){
    long long n;
    cin>>n;
    map<long long,long long> nesting_dolls;
    for(long long i=0 , j; i<n ; i++){
        cin>>j;
        nesting_dolls[j]++;
    }
    long long cnt=0;
    vector<pair<long long,long long>> j;
    for(auto pr : nesting_dolls){
        j.push_back(pr);
    }
    j.push_back(make_pair(j[j.size() - 1].first + 1, 0));
    
    for(int i=0 ; i<j.size()-1 ; i++){
        if(j[i].first==j[i+1].first-1){
            if(j[i].second>j[i+1].second)
                cnt += j[i].second-j[i+1].second;
        }
        else
            cnt += j[i].second;
    }
    cout<<cnt<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    long long t;
    cin>>t;
    while(t--){
        matryoshkas();
    }
    
    return 0;
}
