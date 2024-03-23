                                            // Author: Md. Imran ALi


#include <bits/stdc++.h>
using namespace std;

void rvrs_mvbs(vector<int>& seq, const vector<pair<int, string>>& move){
    for(int i=0; i<move.size(); i++){
        int count_move=move[i].first;
        string mov_up_down=move[i].second;
        for(int j=0; j<count_move; j++){
            if(mov_up_down[j]=='U'){
             
                seq[i]=(seq[i] -1+10) % 10;
            } 
            else{
                seq[i]=(seq[i]+1) % 10;
            }
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> finalseq(n);
        for(int i=0; i<n; i++){
            cin>>finalseq[i];
        }

        vector<pair<int, string>> move(n);
        for(int i=0; i<n; i++){
            cin>>move[i].first>>move[i].second;
        }
        rvrs_mvbs(finalseq, move);
        for(int i=0; i<n; i++){
            cout<<finalseq[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
