#include <iostream>
#include <vector>
// #include <fstream>

#define ll long long int

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> va(n, vector<ll>(n, 0));
    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        va[a - 1][b - 1] = 1;
        va[b - 1][a - 1] = 1;
    }
    vector<vector<ll>> vb(n, vector<ll>(n, 0));
    for (ll i = 0; i < m; i++) {
        ll c, d;
        cin >> c >> d;
        vb[c - 1][d - 1] = 1;
        vb[d - 1][c - 1] = 1;
    }

    for (ll i = 0; i < n; i++) {
        ll cnt1 = 0, cnt2 = 0;
        for (ll j = 0; j + i < n; j++) {
            cnt1 += va[j][j + i];
            cnt2 += vb[j][j + i];
        }
        if (cnt1 == cnt2) {
            continue;
        } else {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
