#include <iostream>
#include <vector>
// #include <fstream>

#define ll long long int

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    ll n;
    cin >> n;

    vector<ll> R(n), C(n);
    for (ll i = 0; i < n; i++) {
        cin >> R[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> C[i];
    }

    ll q;
    cin >> q;

    for (ll i = 0; i < q; i++) {
        ll r, c;
        cin >> r >> c;

        if (R[r - 1] + C[c - 1] > n) {
            cout << "#";
        } else {
            cout << ".";
        }
    }
    cout << endl;

    return 0;
}