#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // Code here
      int h, w;
  cin >> h >> w;
  vector<string> a(h), b(h);
  rep(i,h) cin >> a[i];
  rep(i,h) cin >> b[i];
  rep(s,h)rep(t,w) {
    vector<string> na = a;
    rep(i,h)rep(j,w) na[(i+s)%h][(j+t)%w] = a[i][j];
    if (na == b) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
    return 0;
}
