
// spoj bvvan

#include <bits/stdc++.h>
 
using namespace std;
 
int f[110][110][110];
 
int main() {
  int tt;
  scanf("%d", &tt);
  for (int i = 0; i < 110; i++) {
    f[i][0][0] = f[0][i][0] = f[0][0][i] = 0;
  }
  while (tt--) {
    string s1, s2;
    cin >> s1 >> s2;
    int kk;
    cin >> kk;
    int sz1 = s1.size(), sz2 = s2.size();
    for (int i = 1; i <= sz1; i++) {
      for (int j = 1; j <= sz2; j++) {
        for (int k = 1; k <= kk; k++) {
          f[i][j][k] = max(f[i][j - 1][k], f[i - 1][j][k]);
          if (s1[i - 1] == s2[j - 1]) {
            f[i][j][k] = max(f[i - 1][j - 1][k], f[i - 1][j - 1][k - 1] + s1[i - 1]); 
          }
        }
      }
    }
    int ans = f[sz1][sz2][kk] == f[sz1][sz2][kk - 1] ? 0 : f[sz1][sz2][kk];
    cout << ans << endl;
  }
  return 0;
}
