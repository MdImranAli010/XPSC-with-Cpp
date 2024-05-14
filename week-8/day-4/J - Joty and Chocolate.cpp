// Author: Md. Imran Ali



#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while(b != 0){
        long long temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

long long lcm(long long a, long long b){
    return (a*b) / gcd(a, b);
}

int main() {
    long long n, a, b, p, q;
    cin>>n>>a>>b>>p>>q;

    long long red=n/a;
    long long blue=n/b;
    long long common=n/lcm(a, b);

    long long red_choco=red*p;
    long long blue_choco=blue*q;
    long long common_choco=common*min(p, q);

    long long total_choco=red_choco+blue_choco - common_choco;

    cout<<total_choco<<endl;

    return 0;
}
