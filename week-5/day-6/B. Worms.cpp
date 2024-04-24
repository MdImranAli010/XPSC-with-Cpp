// Author: Md. Imran Ali


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> worms;
    
    for(int i = 1; i <= n; i++){
        int w;
        cin >> w;
        while(w--){
            worms.push_back(i);
        }
    }
    
    int worm_num;
    cin >> worm_num;
    while(worm_num--){
        int w;
        cin >> w;
        cout << worms[w - 1] << endl;
    }
    
    return 0;
}
