// // Author: Md. Imran ALi


#include <bits/stdc++.h>
using namespace std;

int bit_diff(int a, int b){
    int diff=a^b;
    int count=0;
    while(diff){
        count += diff & 1;
        diff >>= 1;
    }
    return count;
}

int main() {
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> vec(m+1);
    
    for(int i=0; i<=m; i++){
        cin>>vec[i];
    }

    int army=vec[m];
    int frnd=0;
    for(int i=0; i<m; i++){
        int diff=bit_diff(army, vec[i]);
        if(diff<=k){
            frnd++;
        }
    }
    cout<<frnd<<endl;

    return 0;
}
