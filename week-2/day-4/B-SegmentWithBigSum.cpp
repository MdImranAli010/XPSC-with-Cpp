// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, s;
    cin>>n>>s;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    long long L=0, R=0, sum=0;
    long long minimum_length =n+1;

    while(R<n){
        sum += a[R];
        while(sum-a[L] >= s){
            sum -= a[L];
            L++;
        }
        if(sum >= s){
            minimum_length= min(minimum_length, R - L + 1);
        }
        R++;
    }

    if (minimum_length == n + 1){
        cout<< -1<< endl;
    } 
    else{
        cout<<minimum_length<< endl;
    }

    return 0;
}
