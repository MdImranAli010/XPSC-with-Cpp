#include <bits/stdc++.h>
using namespace std;
 
vector<int> marge_sort(const vector<int>& arr1, const vector<int>& arr2) {
    int n=arr1.size();
    int m=arr2.size();
    
    vector<int> mrg_srted(n+m);
    int i=0, j=0, k=0;
    
    while(i<n && j<m){
        if(arr1[i] <= arr2[j]){
            mrg_srted[k++] = arr1[i++];
        } 
        else{
            mrg_srted[k++] = arr2[j++];
        }
    }
 
    while(i<n){
        mrg_srted[k++] = arr1[i++];
    }
 
    while(j<m){
        mrg_srted[k++] = arr2[j++];
    }
 
    return mrg_srted;
}
 
int main() {
    int n, m;
    cin>>n>>m;
 
    vector<int> arr1(n);
    vector<int> arr2(m);
 
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
 
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
 
    vector<int> mrg_srted = marge_sort(arr1, arr2);
 
    for(int num : mrg_srted){
        cout<<num<<" ";
    }
    cout<<endl;
 
    return 0;
}
