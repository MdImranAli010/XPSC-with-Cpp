                                    // Author: Md. Imran ALi



#include <bits/stdc++.h>
using namespace std;

int move_bracket(const string& s){
    int move=0;
    stack<char> st;

    for(char c : s){
        if(c=='('){
            st.push(c);
        } 
        else{
            if(st.empty()){
                move++;
            } 
            else {
                st.pop();
            }
        }
    }

    return move;
}

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int res= move_bracket(s);

        cout<<res<<endl;
    }

    return 0;
}

