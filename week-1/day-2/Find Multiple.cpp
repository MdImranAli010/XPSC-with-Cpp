/*
    Author: Md. Imran Ali
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m, c;
    cin>>n>>m>>c;
    
    for(int i=n; i<=m; i++){
        if(i%c==0){
            cout<<i<<endl;
            return 0;
        }
    }
    
    cout<<-1<<endl;

    return 0;
}
