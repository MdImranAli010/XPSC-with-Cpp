// Author: Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
		int n; 
		cin>>n;
		vector<int> vec(n);
		
		for(int i=0; i<n; i++){
		    cin>>vec[i];
		}
		
		sort(vec.begin(), vec.end(), greater<int>());
		
		for(int i=0; i<n; i++){
		    cout<<vec[i]<<' ';
		}
		cout<<endl;
	}

    return 0;
}
