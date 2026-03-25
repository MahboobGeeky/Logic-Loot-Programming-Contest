#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    // in dono ko ignore kar sakte h
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // main code yaha se h

    int N, K;
    cin >> N >> K;

    vector<long long> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Edge case: empty tree
    if (N == 0 || arr[0] == -1) {
        cout << 0 << "\n";
        return 0;
    }

    queue<int> q;
    q.push(0); // store index
    int level = 0;

    while (!q.empty()) {
        int size = q.size();

        // If we reached desired level
        if (level == K) {
            cout << size << "\n";
            return 0;
        }

        for (int i = 0; i < size; i++) {
            int idx = q.front();
            q.pop();

            int left = 2 * idx + 1;
            int right = 2 * idx + 2;

            if (left < N && arr[left] != -1) {
                q.push(left);
            }
            if (right < N && arr[right] != -1) {
                q.push(right);
            }
        }

        level++;
    }

    // If K level does not exist
    cout << 0 << "\n";
    return 0;
}