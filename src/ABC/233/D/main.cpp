#include <iostream>
#include <vector>
#include <fstream>

#define ll long long int

using namespace std;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        ll tmp;
        cin >> tmp;
        if (i == 0) {
            v[i] = tmp;
        } else {
            v[i] = tmp + v[i - 1];
        }
    }

    ll right = 0;
    for (ll left = 0; left < n; left++) {
        while (right < n) {
            
        }
        if (left == right) {

        }
    }




    ll cnt = 0;
    for (ll i = 0; i < n; i++) {
        if (v[i] == k) {
            cnt++;
        }
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < i; j++) {
            cout << v[i] - v[j] << " ";
            if ((v[i] - v[j]) == k) {
                cnt++;
            }
        }
        cout << endl;
    }

    cout << cnt << endl;

    return 0;
}
