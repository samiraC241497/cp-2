#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    map<int, int> totalCount;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        totalCount[arr[i]]++;
    }

    for (auto const& [num, cnt] : totalCount) {
        if (cnt % k != 0) {
            cout << 0 << endl;
            return;
        }
    }

    map<int, vector<int>> positions;
    for (int i = 0; i < n; ++i) {
        positions[arr[i]].push_back(i + 1);
    }

    map<int, int> currentCount;
    map<int, int> lastExceeded;
    long long totalAwesome = 0;
    int maxExceededIndex = 0; // keep track of the overall max

    for (int right = 1; right <= n; ++right) {
        int value = arr[right - 1];
        currentCount[value]++;

        int allowed = totalCount[value] / k;

        if (currentCount[value] > allowed) {
            int exceedIndex = positions[value][currentCount[value] - 1 - allowed];
            lastExceeded[value] = exceedIndex;
            if (exceedIndex > maxExceededIndex) {
                maxExceededIndex = exceedIndex;
            }
        }

        totalAwesome += right - maxExceededIndex;
    }

    cout << totalAwesome << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
