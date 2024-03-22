                                                                      // Author: Md. Imran Ali


#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin>>s>>t;

    int num_of_operation=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] != t[i]){
            num_of_operation++;
        }
    }
    cout<<num_of_operation<<endl;

    return 0;
}

