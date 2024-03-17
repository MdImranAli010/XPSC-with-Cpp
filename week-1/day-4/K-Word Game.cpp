#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        vector<vector<string>> word(3, vector<string>(n));
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                cin>>word[i][j];
            }
        }

        unordered_map<string, int> freq;
        vector<int> point(3, 0);
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                freq[word[i][j]]++;
            }
        }

        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                if(freq[word[i][j]] == 1){
                    point[i] += 3;
                } 
                else if(freq[word[i][j]]==2){
                    point[i] += 1; 
                }
            }
        }

        for(int i=0; i<3; i++){
            cout<<point[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
