// Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, x;
        cin>>n>>x;
        long long arr[x];
        for(int i=0; i<x; i++){
            cin>>arr[i];
        }
        sort(arr, arr+x);
        reverse(arr, arr+x);
        arr[0]=n-arr[0];
        for(int i=1; i<x; i++){
            arr[i]=n-arr[i]+arr[i-1];
        }
        long long i=0, j=x-1, result=0;
        while(i<=j){
            long long mid=(i+j)/2;
            if(arr[mid]<=n-1){
                result=mid+1;
                mid++;
                i=mid;
            }
            else{
                mid=mid-1;
                j=mid;
            }
        }
        
        cout<<result<<endl;
    }

    return 0;
}
