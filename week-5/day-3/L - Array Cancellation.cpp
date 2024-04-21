// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
 
		long long position=0, negative=0, a;
		for(long long i=1;i<=n;i++){
			cin>>a;
			if(a>=0){
			    position=position+a;
			}
			else{
				if(position+a>=0){
				    position=position+a;
				}
				else{
					a=a+position;
					position=0;
					negative=negative+a;
				}
			}
		}
 
		cout<<-(negative)<<endl;
	}
 
	return 0;
}
