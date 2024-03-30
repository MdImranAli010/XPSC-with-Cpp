                                        // Author: Md. Imran ALi

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        string s[n];
        map<string, bool> m;
        
        for(int i=0; i<n; i++){
            cin>>s[i];
            m[s[i]]=true;
        }
        
        for(int i=0; i<n; i++){
            bool flag=false;
            for(int j=1; j<s[i].size(); j++){
                string left_side=s[i].substr(0, j);
                string right_side=s[i].substr(j, s[i].size()-j);
                
                if (m[left_side] && m[right_side]){
                    flag=true;
                }
            }
            cout<<flag;
        }
        cout<<'\n';
    }

    return 0;
}
