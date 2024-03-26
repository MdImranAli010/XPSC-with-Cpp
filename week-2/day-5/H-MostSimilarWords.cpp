                                        // Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;

long long total_move(string a, string b) {
  long long abs_diff=0;
  for(int i=0; i<a.size(); i++){
    abs_diff += abs(a[i] - b[i]);
  }
  return abs_diff;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t;
  cin>>t;
  while(t--){
    int n, m;
    cin>>n>>m;
    
    vector<string> s(n);
    for(int i=0; i<n; i++){
      cin>>s[i];
    }
    
    long long ans=INT_MAX;
    
    for(int i=0; i<n-1; i++){
      for(int j=i+1; j<n; j++){
        ans=min(ans, total_move(s[i], s[j]));
      }
    }
    
    cout<<ans<<endl;
  }
  return 0;
}

