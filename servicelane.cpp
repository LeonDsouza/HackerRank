#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, T;
  cin >> N >> T;

  assert(1 <= N);
  assert(N <= 100000);
  assert(1 <= T);
  assert(T <= 1000);

  vector <int> width(N);
  for(int i = 0; i < (int)N; ++i) {
    cin >> width[i];
    assert(width[i] == 1 || width[i] == 2 || width[i] == 3);
  }

  for(int i = 0; i < (int)T; ++i) {
    int l, r;
    cin >> l >> r;
    assert(0 <= l);
    assert(l < r);
    assert(r < N);
    assert(r-l+1 <= min(N, 1000));

    int ans = width[l];
    while(l <= r) {
      ans = min(ans, width[l]);
      l++;
    }
    cout << ans << "\n";
  }

  return 0;
}
