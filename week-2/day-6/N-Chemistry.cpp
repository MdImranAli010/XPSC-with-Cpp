                                          // Author: Md. Imran ALi



#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;

int main() {
    int T;
    cin>>T;
    while (T--) {
        int n, k;
        int cnt[26];
        for(int i=0; i<26; i++){
            cnt[i]=0;
        }
        cin>>n>>k;
        char s[N];
        cin>>s;
        for (int i=0; i<n; i++){
            ++cnt[s[i] - 'a'];
        }
        int res = 0;
        for (int i = 0; i < 26; i++) {
            res += 2 * (cnt[i] / 2);
        }
        if (res >= n-k-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
