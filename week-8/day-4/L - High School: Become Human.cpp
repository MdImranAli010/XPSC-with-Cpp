// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin>>x>>y;

    double fx=y*log(x);
    double gx=x*log(y);

    if(fx<gx){
        cout<<"<"<<endl;
    }
    else if(fx>gx){
        cout<<">"<<endl;
    }
    else{
        cout<<"="<<endl;
    }

    return 0;
}
