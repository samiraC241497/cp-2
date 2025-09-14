#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;

        long long a[200005];
        int b[200005];

        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }

        long long ans = 0;
        long long prevTime = 0;
        int prevSide = 0;

        for (int i = 0; i < n; i++) {
            long long dt = a[i] - prevTime;
            int need = abs(prevSide - b[i]);

            if ((dt % 2) == (need % 2)) {
                ans += dt;
            } else {
                ans += dt - 1;
            }

            prevTime = a[i];
            prevSide = b[i];
        }

        long long dt = m - prevTime;
        ans += dt;

        cout << ans << "\n";
    }
    return 0;
}
