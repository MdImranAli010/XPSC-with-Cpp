                                    // Author: Md. Imran ALi



#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string r1, r2;
        cin >> r1 >> r2;
        
        bool color_blind = true;

        for (int i = 0; i < n; i++) {
            if (r1[i] != r2[i] && !(r1[i] == 'G' && r2[i] == 'B') && !(r1[i] == 'B' && r2[i] == 'G')) {
                color_blind = false;
                break;
            }
        }

        if (color_blind) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


