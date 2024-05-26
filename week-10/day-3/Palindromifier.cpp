// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

int main() {
    int t=1;
    while(t--){
        string s;
        cin>>s;
        long long n=s.size();
        long long m=n;
        m += n-2;
        
        cout<<3<<endl;
        cout<<"L"<<" "<< n-1<< endl;
        cout<<"R"<<" "<< n-1<< endl;
        cout<<"R"<<" "<< m+1<< endl;
    }
    
    return 0;
}
