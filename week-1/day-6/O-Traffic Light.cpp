// Author: Md.Imran Ali


#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		char chr;
		string s;
		cin>>n>>chr>>s;
		s = s+s;
		int count=0;
		int cross_road=0;
		int flag=0;
		for(int i=0; i<s.length(); i++){
			if (s[i]==chr){
			    flag=1;
			}
			if (s[i]== 'g'){
			    flag=0;
			    cross_road = max(cross_road, count); 
			    count=0;
			}
			if (flag==1){
			    count++;
			}
		}
		cout<<cross_road<<endl;
	}
}




