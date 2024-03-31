                                      // Author: Md.Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> card(n);
        
        for(int i=0; i<n; i++){
            cin>>card[i];
        }
        priority_queue<int> bonus;

        long long tot_pwr=0;
        for(int i=0; i<n; i++){
            if(card[i]==0){
                
                if(!bonus.empty()){
                    tot_pwr += bonus.top();
                    bonus.pop();
                }
            }
            
            else{
                bonus.push(card[i]);
            }
        }
        cout<<tot_pwr<<endl;
    }
    return 0;
}
