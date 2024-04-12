// Author: Md. Imran ALi



#include <bits/stdc++.h>
using namespace std;

vector<int> vec_pal;

bool palindrome(int x) {
    string num= to_string(x);
    int n = num.size();
    for(int i=0; i<n/2; i++){
        if(num[i] != num[n-1-i]){
            return 0;
        }
    }
    return 1;
}

void gen_pal(){
    int mx=1<<15;
    for(int i=mx; i>=0; i--){
        if (palindrome(i)){
            vec_pal.push_back(i);
        }
    }
}

const int N= 1<<15;

void nasa(){
    int n;
    cin>>n;

    int arr[n];
    vector<int> freq(N);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        freq[arr[i]]++;
    }

    long long ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<vec_pal.size(); j++){
            int exist=freq[arr[i] ^ vec_pal[j]];
            if (exist){
                ans += exist;
            }
        }
        freq[arr[i]]--;
    }

    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    gen_pal();

    int t;
    cin>>t;
    while(t--){
        nasa();
        cout<<endl;
    }

    return 0;
}
