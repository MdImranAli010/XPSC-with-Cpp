#include <bits/stdc++.h>
using namespace std;

vector<int> less_count(vector<int>& arr1, vector<int>& arr2) {
    int n=arr1.size();
    int m=arr2.size();
    vector<int> res;

    int i=0, j=0;
    while(j<m){
        while(i<n && arr1[i] < arr2[j]){
            i++;
        }
        res.push_back(i);
        j++;
    }
    return res;
}

int main() {
    int n, m;
    cin>>n>>m;

    vector<int> arr1(n);
    vector<int> arr2(m);

    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    vector<int> res=less_count(arr1, arr2);

    for(int i=0; i<m; i++){
        cout<<res[i]<<" ";
    }

    return 0;
}
