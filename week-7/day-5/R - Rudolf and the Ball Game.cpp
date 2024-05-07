// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        
        vector<int>vec(n+1,0);
        vec[x-1]=1;
        while(k--){
            int d;
            char c;
            cin>>d>>c;
            
            if(c=='0'){
                vector<int> vec1;
                for(int i=0; i<n; i++){
                    if (vec[i]==true){
                        vec1.push_back(i);
                        vec[i]=0;
                    }
                }
                for(int j=0; j<vec1.size(); j++){
                    int i=vec1[j];
                    vec[(i+d)%n] = 1;
                }
            }
            
            else if(c=='?'){
                vector<int> vec2;
                for(int i=0; i<n; i++){
                    if (vec[i]==true){
                        vec2.push_back(i);
                        vec[i]=0;
                    }
                }
                for(int j=0; j<vec2.size(); j++){
                    int i=vec2[j];
                    vec[(i+d)%n] = 1;
                    vec[((i-d)%n + n)%n] = 1;
                }
            }
            
            else {
                vector<int> vec3;
                for(int i=0; i<n; i++){
                    if (vec[i]==true) {
                        vec3.push_back(i);
                        vec[i]=0;
                    }
                }
                for(int j=0; j<vec3.size(); j++){
                    int i=vec3[j];
                    vec[((i-d)%n+n)%n] = 1;
                }
            }
        }
        
        int res=0;
        for(int i=0; i<n+1; i++){
            res += (vec[i]==1);
        }
        cout<<res<<endl;
        
        for(int i=0; i<n; i++){
            if(vec[i]){
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}
