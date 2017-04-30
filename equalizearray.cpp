#include <bits/stdc++.h>

using namespace std;

int n, x, h[105];

int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        h[x]++;
    }
    printf("%d\n", n - *max_element(h + 1, h + 100 + 1));
}
