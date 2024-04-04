// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    unordered_set<string> set;
    string result="";
    for(int i=n-1; i>= 0; i--){
        if(set.find(arr[i]) == set.end()){
            result += arr[i].substr(arr[i].length()-2);
        }
        set.insert(arr[i]);
    }

    cout<<result<<endl;

    return 0;
}
