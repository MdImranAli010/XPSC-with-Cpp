// Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,remain;
        cin>>n>>remain;

        vector<long long> coral(n);
        for(int i=0; i<n; i++){
            cin>>coral[i];
        }
        long long low=1, up=1e10, mid, a;
        while(up-1>low){
            long long water=0;
            mid=low+(up-low)/2;
            for(int i=0; i<n; i++){
                if(coral[i] < mid){
                    a=abs(coral[i]-mid);
                    water=a+water;
                }
            }
            if(remain<water){
                up=mid;
            }
            else{
                low=mid;
            }
        }
        
        cout<<low<<endl;
    }
    
    return 0;
}
