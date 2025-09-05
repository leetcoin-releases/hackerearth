#include <bits/stdc++.h>
using namespace std;
int solve (int N, vector<int> A) {
    long long sum = 0;
    int mx = 0;
    for (int x : A) {
        sum += x;
        mx = max(mx, x);
    }
    if ((N - 1) == 0) return -1;
    if (sum % (N - 1) != 0) return -1;
    long long k = sum / (N - 1);
    if (mx > k) return -1;
    return (int)k;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << solve(N, A) << "\n";
    }
    return 0;
}