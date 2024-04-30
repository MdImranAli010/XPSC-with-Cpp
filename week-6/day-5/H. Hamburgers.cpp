// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    long long m,n,o,p,q,t,r,a=0,b=0,c=0;
    cin>>m>>n>>o>>p>>q>>t>>r;
    
    for(auto &ch:s){
        if(ch=='B'){
            a++;
        }
        else if(ch=='S'){
            b++;
        }
        else{
            c++;
        }
    }
    long long H=r+200, L=0;
    while(H>=L){
        long long mid=L+(H-L)/2;
        long long w, x, y, z=0;
        w=max(a*mid-m,z);
        x=max(b*mid-n,z);
        y=max(c*mid-o,z);
        long long prc=w*p+x*q+y*t;
        if(prc<=r){
            L=mid+1;
        }
        else{
            H=mid-1;
        }
    }
    cout<<H;
    
    return 0;
        
}
