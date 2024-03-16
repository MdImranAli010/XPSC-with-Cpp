#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    if(n>m){
        cout<<0<<endl;
    }
    else{
        cout<<(m-n+1)<<endl;
    }

    return 0;
}
