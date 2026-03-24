#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        int id, c, b;
        cin>>id>>c>>b;
        if(id==1 && c==1 && b==0) {
            cout<<"Access"<<endl;
        } else {
            cout<<"No Access"<<endl;
        }
    }

    return 0;
}