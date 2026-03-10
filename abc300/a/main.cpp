#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, A, B, res;
    cin >> N >> A >> B;

    for (int i = 1; i <= N; ++i) {
        int C;
        cin >> C;
        if (C == A + B) res = i;
    }
    cout << res << endl;
    return 0;
}
