#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, e, p, c;
    cin >> n >> e >> p >> c;

    long long total_energy = n * e;
    long long total_required = p * c;

    if (total_energy >= total_required) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}