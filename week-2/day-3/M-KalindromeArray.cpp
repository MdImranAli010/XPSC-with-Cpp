                                        // Author: Md. Imran ALi



#include <bits/stdc++.h>
using namespace std;

bool palindrome(const vector<int>& arr, int L, int R) {
    while (L < R) {
        if (arr[L] != arr[R]) {
            return false;
        }
        L++;
        R--;
    }
    return true;
}

bool kalindrome(const vector<int>& arr) {
    int L=0;
    int R=arr.size() - 1;

    while(L < R){
        if(arr[L] != arr[R]){
            unordered_map<int, int> freq;
            vector<int> temp1=arr;
            temp1.erase(remove(temp1.begin(), temp1.end(), arr[L]), temp1.end());
            
            if (palindrome(temp1, 0, temp1.size() - 1)) {
                return true;
            }

            vector<int> temp2 = arr;
            temp2.erase(remove(temp2.begin(), temp2.end(), arr[R]), temp2.end());
            
            if (palindrome(temp2, 0, temp2.size() - 1)) {
                return true;
            }

            return false;
        }
        L++;
        R--;
    }
    return true;
}

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i=0; i<n; i++){
            cin >> arr[i];
        }

        if (kalindrome(arr)){
            cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}


