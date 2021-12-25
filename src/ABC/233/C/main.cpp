#include <iostream>
#include <vector>
// #include <fstream>

#define ll long long int

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    ll n, x;
    cin >> n >> x;

    vector<vector<ll>> v(n);
    for (ll i = 0; i < n; i++) {
        ll l;
        cin >> l;
        for (ll j = 0; j < l; j++) {
            ll a;
            cin >> a;
            if (i == 0) {
                v[i].push_back(a);
            } else {
                for (ll k = 0; k < v[i - 1].size(); k++) {
                    if (a * v[i - 1][k] <= x && a * v[i - 1][k] >= 0) {
                        v[i].push_back(a * v[i - 1][k]);
                    } else {
                        v[i].push_back(0);
                    }
                }
            }
        }
    }

    ll cnt = 0;
    for (ll i = 0; i < v[n - 1].size(); i++) {
        if (v[n - 1][i] == x) {
            cnt++;
        }
    }

    cout << cnt << endl;

    // for (ll i = 0; i < n; i++) {
    //     for (ll j = 0; j < v[i].size(); j++) {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
