#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // Code here
    int H,W;
    cin >> H >> W;
    vector<string> S(H);
    rep(i,H){
        cin >>S[i];
    }
    int cnt = 0;
    int flag = 0;

    for (int h1 = 0; h1 < H; h1++){
        for (int h2 = h1; h2 < H; h2++){
                for (int w1 = 0; w1 < W; w1++){
                    for (int w2 = w1; w2 < W; w2++){
                        flag = 1;
                        for (int i = h1; i < h2+1; i++){
                            for (int j = w1; j < w2+1; j++){
                                if (S[i][j] != S[h1+h2-i][w1+w2-j]){
                                    flag = 0;
                                }
                            }
                        }
                        if(flag) cnt += 1; 
                    }
                }
        }
    }

    cout << cnt << endl;


    return 0;
}
