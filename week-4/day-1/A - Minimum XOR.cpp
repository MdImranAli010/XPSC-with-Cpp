// Author: Md. Imran ALi



#include <bits/stdc++.h>
using namespace std;

int xor_compute(vector<int>& arr) {
    int XOR=0;
    for(int num : arr){
        XOR^=num;
    }
    return XOR;
}

int main() {
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;

        vector<int> arr(N);
        for(int i=0; i<N; i++){
            cin>>arr[i];
        }

        int tot_xor=xor_compute(arr);
        int result=tot_xor;

        for(int i=0; i<N; i++){
            int without_xor=tot_xor ^ arr[i];
            result=min(result, without_xor);
        }

        cout<<result<<endl;
    }

    return 0;
}
