// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;
 
bool Splitting_an_Array(const vector<int>& num, int k, long long sum) {
    int part = 1;
    long long curr = 0;
    for (int num : num) {
        curr += num;
        if (curr > sum) {
            part++;
            curr = num;
        }
    }
    return part <= k;
}
 
long long min_max_sum(const vector<int>& num, int k) {
    long long LW=*max_element(num.begin(), num.end());
    long long HI=accumulate(num.begin(), num.end(), 0LL);
 
    while(HI>LW){
        long long mid=LW+(HI-LW) / 2;
        if(Splitting_an_Array(num, k, mid))
            HI=mid;
        else{
            LW=mid+1;
        }
    }
    return LW;
}
 
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> num(n);
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    long long result = min_max_sum(num, k);
    cout << result << endl;
    return 0;
}
