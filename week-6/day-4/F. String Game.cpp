// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

bool String_Game(int x, const string& str1, const string& str2, const vector<int>& a){
    vector<bool> vec(str1.size(), false);
    for(int i=1; i<=x; i++){
        vec[a[i]-1] =true;
    }
    int j=0, cnt=0;
    
    for(int i=0; i<str2.size(); i++){
        for(; j<str1.size(); j++){
            if(str2[i]==str1[j] && !vec[j]){
                j++;
                cnt++;
                break;
            }
        }
    }
    return cnt==str2.size();
}

int main() {
    string str1, str2;
    while(cin>>str1>>str2){
        vector<int> a(str1.size() + 1);
        for(int i=1; i<=str1.size(); i++){
            cin>>a[i];
        }
        int l=0, r=str1.size(), ans=0;
        while(l<=r){
            int mid=(l+r) / 2;
            if(String_Game(mid, str1, str2, a)){
                l=mid+1;
                ans=mid;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
