// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;

    while(T--){
        int N;
        cin>>N;
        vector<int> vec_permu(N);
        
        for(int i=0; i<N; i++){
            if(i%2 == 0){
                vec_permu[i]=i/2+1;
            }
            else{
                vec_permu[i]=N-i/2;
            }
        }
    
        for(int i=0; i<N; i++){
            cout<<vec_permu[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
