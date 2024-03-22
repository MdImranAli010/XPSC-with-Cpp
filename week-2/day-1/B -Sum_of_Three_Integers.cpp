                                              // Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, S;
    cin>>k>>S;
    int count=0;
    for(int i=0; i<=k; i++){
        for(int j=0; j<=k; j++){
            int z=S-i-j;
            if (z>=0 && z<=k)
                count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
