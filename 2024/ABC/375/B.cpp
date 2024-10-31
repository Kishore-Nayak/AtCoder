#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

void solution() {
    int n;
    float ans = 0, a = 0, b = 0, c, d;
    cin >> n;
    while (n--) {
        cin >> c >> d;
        ans += sqrtl(powl((a - c), 2) + powl((b - d), 2));
        a = c;
        b = d;
    }
    ans += sqrtl(powl((0 - c), 2) + powl((0 - d), 2));
    cout<<fixed<<setprecision(12)<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // for calculating run time
    clock_t z = clock();

    int t = 1;
    // cin >> t;

    while (t--) solution();

    cerr << "Run Time : " << ((double)(clock() - z) * 1000 / CLOCKS_PER_SEC) << " ms";

    return 0;
}
