                                                    // Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long s=0, count=0, recent=0;
        for(int i=1; i <= n; i++){
            int a;
            cin>>a;
            s += abs(a);
            if(a>0 && recent==true){
                count++;
                recent=0;
            }
            else if(a<0 && recent==false){
                recent=1;
            }
        }
        if (recent==true){
            count++;
        }
        cout<<s<<" "<<count<<endl;
    }
    return 0;
}
