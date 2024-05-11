// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, res;
    cin>>n;
    if(n%2==0){
        res=n/2;
        cout<<res<<endl;
        for(int i=0; i<res; i++){
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else if(n==3){
        cout<<1<<endl;
        cout<<3<<endl;
    }
    
    else{
        n=n-3;
        res=n/2;
        cout<<res+1<<endl;
        for(int i=0; i<res; i++){
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }

    return 0;
}
