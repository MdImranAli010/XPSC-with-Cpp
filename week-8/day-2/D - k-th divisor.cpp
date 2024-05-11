// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    int cnt = 0;
    for(long long i=1; i*i<=n; i++){
        if(n%i == 0){
            cnt++;
            if(i != n/i){
                cnt++;
            }
        }
    }

    if(k>cnt){
        cout<<-1;
        return 0;
    }

    long long* arr=new long long[cnt];

    int idx=0;
    for(long long i=1; i*i<=n; i++){
        if(n%i == 0){
            arr[idx++]=i;
            if(i != n/i) {
                arr[idx++] = n/i;
            }
        }
    }
    sort(arr, arr+cnt);

    cout << arr[k-1];

    delete[] arr;
    
    return 0;
}
