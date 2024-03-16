/*
    Author: Md. Imran Ali
*/


#include <bits/stdc++.h>
using namespace std;

char missing_letter(const string& s){
    unordered_set<char> letters;

    for(char c : s){
        letters.insert(c);
    }
    for(char letter='a'; letter<='z'; letter++){
        if(letters.find(letter)==letters.end()){
            return letter;
        }
    }
    return 'N';
}

int main() {
    string s;
    cin>>s;
    char result=missing_letter(s);
    if(result != 'N'){
        cout<<result<<endl;
    } 
    else{
        cout<<"None"<< endl;
    }

    return 0;
}
