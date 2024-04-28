// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

bool Very_Easy_Task(int t, int n, int x, int y){
    if(t<min(x, y)){
        return false;
    }
    int cnt=1;
    int mini=min(x, y);
    t -= mini;
    cnt += t/x+t/y;

    return cnt>=n;
}

int main() {
    int n, x, y;
    cin>>n>>x>>y;

    int l=0, r=max(x, y)*n, mid;

    while(r>l+1){
        mid=l+(r-l)/2;
        if(Very_Easy_Task(mid, n, x, y)){
            r = mid;
        }
        else{
            l = mid;
        }
    }
    cout<<r;
}
