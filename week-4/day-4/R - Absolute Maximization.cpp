// Author: Md. Imran ALi



#include <bits/stdc++.h>
using namespace std;

const  int N= 643 ;
int arr[N];

int  main() {
    int T; 
    cin>>T;
    while(T--){
        int n; 
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        int result=0;
        for(int i=0; i<=10; i++){
            int x1=0, x2=0;
            for(int j=1; j<=n; j++){
                if((arr[j]>>i) & 1){
                    x1=1 ;
                }
                else{
                    x2=1 ; 
                }                            
            }
            if(x1&x2){
                result+=(1<<i);
            }
        }
        cout<<result<<endl;
    }
    return 0 ;       
}
