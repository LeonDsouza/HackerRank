#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
cin >> T;
for (int x = 0; x < T; x++){
    long N, M, S, ID;
    cin >> N >> M >> S;

    long H = M%N;
    if (H == 0) {H = N;}
    if ((S-1) + H > N) {ID = (S-1) -(N-H);}
    else {ID = (S-1) +H;}

    printf("%ld\n", ID);
}
    return 0;
}
