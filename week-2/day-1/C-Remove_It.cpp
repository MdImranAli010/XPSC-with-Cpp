                                                        // Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin>>n>>x;
    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    vector<int> A_prime;
    for(int i=0; i<n; i++){
        if(A[i] != x){
            A_prime.push_back(A[i]);
        }
    }
    for(int i=0; i<A_prime.size(); i++){
        cout<<A_prime[i];
        if(i<A_prime.size()-1) {
            cout<<" ";
        }
    }
    cout<<endl;

    return 0;
}
