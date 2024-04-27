// Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

bool Wooden_Toy_Festiva(vector<long long>& a, long long x){
    int count=1;
    int n=a.size();
    for (int l=0, r=l+1; r<n;){
        if(a[r]<=a[l]+x+x){
            r++;
        }
        else{
            count++;
            l=r;
            r=l;
        }
    }
    return(count<4);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<long long> a(n);

        for(auto &l : a){
            cin>>l;
        }
        sort(a.begin(), a.end());
        long long result, L=0, H=1e15, mid;

        while(L<=H){
            mid=L+(H-L) / 2;
            if(Wooden_Toy_Festiva(a, mid)){
                result=mid;
                H=mid-1;
            }
            else{
                L=mid+1;
            }
        }

        cout<<result<<endl;
    }
    
    return 0;
}
