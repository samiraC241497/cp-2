#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    std::cin >> n;
    std::vector<long long> odds;
    long long total_sum = 0;

    for (int i = 0; i < n; ++i) {
        long long a;
        std::cin >> a;
        total_sum += a;
        if (a % 2 != 0) {
            odds.push_back(a);
        }
    }

    if (odds.empty()) {
        std::cout << 0 << std::endl;
        return;
    }


    std::sort(odds.begin(), odds.end());

    long long uncut_sum = 0;
    int num_to_skip = odds.size() / 2;

    for (int i = 0; i < num_to_skip; ++i) {
        uncut_sum += odds[i];
    }

    std::cout << total_sum - uncut_sum << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
