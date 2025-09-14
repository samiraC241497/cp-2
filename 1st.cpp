#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int x, n;
        cin>>x>>n;
        int s;
        if (n % 2 == 0) {
            s=0;
        } else {
            s= x;
        }

        cout <<s<< endl;
    }
    return 0;
}
