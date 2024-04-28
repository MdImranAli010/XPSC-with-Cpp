// Author: Md. Imran ALi


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin>>n>>a>>b;
    
    int left=1, right=min(a, b), result=1;
    while(left<= right){
        int mid=(left+right) / 2;
        int x=a/mid+b/mid;
        if(x>=n){
            left=mid+1;
            result=mid;
        }
        else{
            right=mid-1;
        }
    }
    cout<<result<<endl;
    
    return 0;
}
