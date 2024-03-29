                                                                  // Author: Md. Imran ALi


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        string cat="meow";
        string str;
        cin>>str;
        for(char &ch:str){
            ch=tolower(ch);
        }
        string sound;
        for(int i=0; i<str.size(); ++i){
            if(sound.empty() || sound.back()!=str[i])
                sound.push_back(str[i]);
        }
        if(cat==sound){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
