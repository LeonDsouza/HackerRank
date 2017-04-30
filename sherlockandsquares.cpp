#include<bits/stdc++.h>
#define assn(n,a,b) assert(n>=a && n<=b);
using namespace std;
typedef long long LL;
int main()
{
    int t;
    cin >> t;
    assn(t,1,100);
    while(t--)
    {
        LL a,b,ans=0,i;
        cin >> a >> b;
        assn(a,1,1000000000);
        assn(b,1,1000000000);
        assert(b>=a);
        for(i=1; ; i++)
        {
            if(i*i>b)break;
            if( i*i<=b && i*i>=a)ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
