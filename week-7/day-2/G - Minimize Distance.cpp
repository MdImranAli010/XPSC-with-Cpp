// Author: Md. Imran Ali



#include<bits/stdc++.h>
using  namespace  std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        long long result=0;
        cin>>n>>k;
        
        vector<int>pstv;
        vector<int>ngtv;
        for(int i : vector<int>(n)){
            int x;
            cin>>x;
            if(x>0){
                pstv.push_back(x);
            }
            else{
                ngtv.push_back(-x);
            }
        }
        

        sort(pstv.begin(),pstv.end());
        reverse(pstv.begin(),pstv.end());
        
        sort(ngtv.begin(),ngtv.end());
        reverse(ngtv.begin(),ngtv.end());
        
        if(pstv.size()==0){
            if(ngtv.size()!=0){
                for(int i=0; i<ngtv.size(); i+=k){
                    result+=ngtv[i]*2;
                }
                result -= ngtv[0];
            }
            cout<<result<<endl;
        }

        else if(ngtv.size()==0){
            if(pstv.size()!=0){
                for(int i=0; i<pstv.size(); i+=k){
                    result+=pstv[i]*2;
                }
                result -= pstv[0];
            }
            cout<<result<<endl;
        }

        else{
            for(int i=0;i<pstv.size();i+=k){
                result+=pstv[i]*2;
            }
            for(int i=0;i<ngtv.size();i+=k){
                result+=ngtv[i]*2;
            }
            if(pstv[0]>=ngtv[0]){
                result-=pstv[0];
            }
            else{
                result-=ngtv[0];
            }
            cout<<result<<endl;
        }
    }
    
    return 0;
}
