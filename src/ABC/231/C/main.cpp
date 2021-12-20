#include <iostream>
#include <vector>
#include <algorithm>
// #include <fstream>

#define ll long long int

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    ll n, q;
    cin >> n >> q;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (ll i = 0; i < q; i++) {
        ll x;
        cin >> x;
        auto itr = lower_bound(v.begin(), v.end(), x);
        ll pos = distance(v.begin(), itr);
        cout << n - pos << endl;
    }

    return 0;
}
