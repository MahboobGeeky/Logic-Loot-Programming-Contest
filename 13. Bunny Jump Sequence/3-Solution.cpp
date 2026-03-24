#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    if(n==0) {
        cout<<0<<endl;
        return 0;
    }
    if(n==1) {
        cout<<1<<endl;
        return 0;
    }

    long long a=0, b=1;
    for(int i=2; i<=n; i++) {
        long long c=a+b;
        a=b;
        b=c;
    }

    cout<<b<<endl;

    return 0;
}