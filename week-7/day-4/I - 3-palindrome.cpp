// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string res= "";
    res += "aab";

    for(int i=3; i<n; i++){
        if(res[i-1]==res[i-2]){
            res += (res[i-1]=='a') ? 'b' : 'a';
        }
        else{
            res += (res[i-1]=='a') ? 'a' : 'b';
        }
    }

    if(n%2==1){
        res += (res[res.size()-1]=='a') ? 'b' : 'a';
    }

    cout<<res.substr(0, n)<<endl;

    return 0;
}
