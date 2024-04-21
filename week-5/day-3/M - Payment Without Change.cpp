// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
	int t;
	cin>>t;
	while(t--){
		    long long a,b,n,s;
        cin>>a>>b>>n>>s;
 
        long long r=s%n, x=a*n+b;
        if(r<=b and x>=s){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}
 
	return 0;
}
