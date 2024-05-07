// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;


int main() {
    long long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long res=0;
        long long n =s.size(); 
        long long arr[2]={0,0};
        
        for(int i = 0 ; i < n ; i++){
            arr[s[i]-'0']++;
        }
        
        for(int i=0 ; i<n ; i++){
            if(arr[!(s[i]-'0')] > 0){
                arr[!(s[i]-'0')]--;
            }
            else{
                res=n-i;
                break;
            }
        }
        
        cout<<res<<endl;
    }
    
    return 0;     
 }
