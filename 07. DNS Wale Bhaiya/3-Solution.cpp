#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    long long sum=0;
    for (int i = 0; i < n; i++) {
        int pages;
        cin>>pages;
        sum+=pages;
    }

    cout<<sum*5<<endl;

    return 0;
}