// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<long long> vec1(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>vec1[i];
        }
        vector<long long> vec2(n+2,0);
        for(int i=1;i<=n;i++){
            vec2[i]=(vec2[i-1]+vec1[i]);
        }
        vector<long long> result(x);
        vector<pair<long long,int>> k(x);
        for(int i=0;i<x;i++){
            cin>>k[i].first;
            k[i].second=i;
        }
        sort(k.begin(),k.end());
        int scuza=0;
        for(int i=0;i<x;i++){
            while(true){
                int m=k[i].first;
                if(vec1[scuza+1]>m || scuza==n){
                    break;
                }
                scuza++;
            }
            result[k[i].second]=vec2[scuza];
        }
 
        for(int i=0;i<x;i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
