// Author: Md. Imran Ali



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> vec(m);

        for (int i = 0; i < m; i++) {
            cin >> vec[i];
        }

        stack<int> stk;
        stack<int> stk_1;
        long long cost = 0;

        for (int t=0; t<m; t++) {
            while (stk.size()>1 && stk.top()>vec[t]) {
                int vec1=stk.top();
                stk.pop();
                if(vec1 >= stk.top()) {
                    stk_1.pop();
                }
                else {
                    stk.push(vec1);
                    break;
                }
            }
            stk.push(vec[t]);
            stk_1.push(t);
        }

        int last = stk.top();
        stk.pop();
        int cst=stk_1.top();
        stk_1.pop();

        while (!stk.empty()) {
            cost += max(last, stk.top()) * (cst - stk_1.top());
            last = stk.top();
            stk.pop();
            cst = stk_1.top();
            stk_1.pop();
        }

        cout << cost << endl;
    }

    return 0;
}
