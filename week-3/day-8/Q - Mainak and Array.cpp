// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

const int N = 2005;
int a[N];

int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }

        int result=-1e9;
        for(int i=0; i<n; i++){
            result=max(result, a[i]-a[(i+1) % n]);
        }
        
        int max1=*max_element(a+1, a+n)-a[0];
        result=max(result, max1);
        
        int max2=a[n-1]-*min_element(a, a+n-1);
        result=max(result, max2);
        
        cout<<result<<endl;
    }

}
