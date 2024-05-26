// Author: Md. Imran Ali

#include<bits/stdc++.h>
using namespace std;

void Ingenuity(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int> north, south, west, east;
    for(int i=0; i<n; i++){
        if(str[i]=='N'){
            north.push_back(i);
        }
        if(str[i]=='S'){
            south.push_back(i);
        }
        if(str[i]=='W'){
            west.push_back(i);
        }
        if(str[i]=='E'){
            east.push_back(i);
        }
    }
    vector<char> mv(n);
    int i=0;
    for(i=0; i<min(north.size(), south.size()); i++){
        if(i%2 == 0) {
            mv[north[i]]='R';
            mv[south[i]]='R';
        }
        else {
            mv[north[i]]='H';
            mv[south[i]]='H';
        }
    }
    for(; i<max(north.size(), south.size()); i += 2){
        if(i<south.size()){
            if(i+1 == south.size()){
                cout << "NO" << endl;
                return;
            }
            mv[south[i]] = 'R';
            mv[south[i+1]] = 'H';
        }
        else if(i < north.size()){
            if(i+1 == north.size()){
                cout << "NO" << endl;
                return;
            }
            mv[north[i]] = 'R';
            mv[north[i+1]] = 'H';
        }
    }
    i=0;
    for(i=0; i < min(west.size(), east.size()); i++) {
        if(i % 2 != 0) {
            mv[west[i]] = 'R';
            mv[east[i]] = 'R';
        }
        else {
            mv[west[i]] = 'H';
            mv[east[i]] = 'H';
        }
    }
    for(; i < max(west.size(), east.size()); i += 2) {
        if(i < east.size()) {
            if(i + 1 == east.size()) {
                cout << "NO" << endl;
                return;
            }
            mv[east[i]] = 'R';
            mv[east[i + 1]] = 'H';
        }
        else if(i < west.size()) {
            if(i + 1 == west.size()) {
                cout << "NO" << endl;
                return;
            }
            mv[west[i]] = 'R';
            mv[west[i + 1]] = 'H';
        }
    }
    int rover_count = 0, helicopter_count = 0;
    for(char ch : mv) if(ch == 'R'){
        rover_count++;
    }
    else{
        helicopter_count++;
    }
    if(rover_count == 0 || helicopter_count == 0) {
        cout << "NO" << endl;
        return;
    }
    for(char ch : mv){
        cout << ch;
    }
    cout << endl;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
    
    int t;
    cin >> t;
    while(t--) {
        Ingenuity();
    }
    
    return 0;
}
