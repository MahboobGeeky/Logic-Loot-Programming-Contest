#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int solved[n], friends[n];

    for (int i = 0; i < n; i++) cin>>solved[i];
    for (int i = 0; i < n; i++) cin>>friends[i];

    int total=0;

    for (int i = 0; i < n; i++) {
        if(solved[i]==10) {
            total+=5+friends[i];
        } else if(solved[i]>5 && solved[i]<10) {
            total+=3+friends[i];
        } else if(solved[i]>=3 && solved[i]<=5) {
            total+=3;
        } else {
            total+=1;
        }
    }

    cout<<total<<endl;

    return 0;
}