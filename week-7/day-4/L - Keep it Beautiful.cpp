// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

string Keep_it_Beautiful(vector<int>& arr_a) {
    int n=arr_a.size();
    vector<int> taken;
    string res="";
    int zero=0;

    for(int i=0; i<n; i++){
        if (taken.empty()) {
            res.push_back('1');
            taken.push_back(arr_a[i]);
        } 
        else{
            if (zero) {
                if (arr_a[i] < taken.back()) {
                    res.push_back('0');
                }
                else {
                    if (arr_a[i] > taken[0]) {
                        res.push_back('0');
                    }
                    else {
                        res.push_back('1');
                        taken.push_back(arr_a[i]);
                    }
                }
            }
            else {
                if (arr_a[i] >= taken.back()) {
                    res.push_back('1');
                    taken.push_back(arr_a[i]);
                }
                else {
                    if (arr_a[i] > taken[0]) {
                        res.push_back('0');
                    }
                    else {
                        zero = 1;
                        res.push_back('1');
                        taken.push_back(arr_a[i]);
                    }
                }
            }
        }
    }

    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr_a(n);
        for(int i=0; i<n; i++){
            cin>>arr_a[i];
        }

        string res=Keep_it_Beautiful(arr_a);
        cout<<res<<endl;
    }

    return 0;
}
