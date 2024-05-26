// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){;
        string a,b;
        bool bin=false;
        cin>>a>>b;
        for(int i=0 ; i<a.size() ; i++){
            if((a[i] == '0' and b[i] == '0') and (a[i+1] == '1' and b[i+1] == '1')) {
                bin=true;
                break;
            }
        }
        if(bin==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
