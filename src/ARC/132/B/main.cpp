#include <iostream>
#include <vector>
#include <algorithm>
// #include <fstream>

#define ll long long int

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    ll n;
    cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (v[1] - v[0] == -1 || v[1] - v[0] > 1) {
        if (is_sorted(v.begin(), v.end(), greater<ll>())) {
            cout << 1 << endl;
            return 0;
        } else {
            for (ll i = 1; i < n; i++) {
                if (v[i] - v[i - 1] != -1) {
                    cout << min(i, n - i) + 1 << endl;
                    return 0;
                }
            }
        }
    } else {
        if (is_sorted(v.begin(), v.end())) {
            cout << 0 << endl;
            return 0;
        } else {
            for (ll i = 1; i < n; i++) {
                if (v[i] - v[i - 1] != 1) {
                    cout << min(i, n + 2 - i) << endl;
                }
            }
        }
    }

    return 0;
}
