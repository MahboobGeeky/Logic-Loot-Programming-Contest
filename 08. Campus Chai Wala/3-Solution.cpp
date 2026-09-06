#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int maxCups=0;
    for (int i = 0; i < n; i++) {
        int cups;
        cin>>cups;
        if(cups>maxCups) {
            maxCups=cups;
        }
    }

    cout<<maxCups<<endl;

    return 0;
}