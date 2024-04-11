// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

void Possible_or_Not(){
    int x, y;
    cin>>x>>y;
    vector<int> a(x);
    
    for(int i=0; i<x; i++){
        cin>>a[i];
    }
    int bit_and= -1;
    
    for(int i=0; i<x; i++){
        if((a[i] & y)==y){
            bit_and &= a[i];
        }
    }
    if(bit_and==y){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
    int T;
    cin >> T;
    while(T--){
        Possible_or_Not();
    }
    return 0;
}

