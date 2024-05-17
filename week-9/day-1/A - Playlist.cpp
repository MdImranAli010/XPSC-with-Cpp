// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int i=0, j=0, len= 0, curr=0;
	map<int, int> frq;
	while(j<n){
		if(frq.find(arr[j])==frq.end() || frq[arr[j]]==0){
			frq[arr[j]]++;
			curr++;
			len = max(len, curr);
			j++;
		}
		else{
			curr--;
			frq[arr[i]]--;
			i++;
		}
	}
	
	cout<<len;
	
	return 0;
}
