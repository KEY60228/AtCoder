#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
// #include <fstream>

#define ll long long int

using namespace std;

vector<vector<ll>> v;

bool merge() {
    for (ll i = 1; i < v.size(); i++) {
        if (v[0].front() == v[i].front()) {
            for (ll j = 0; j < v[i].size(); j++) {
                v[0].insert(v[0].begin(), v[i][j]);
            }
            vector<ll> tmp;
            v[i] = tmp;
            continue;
        } else if (v[0].back() == v[i].front()) {
            for (ll j = 0; j < v[i].size(); j++) {
                v[0].push_back(v[i][j]);
            }
            vector<ll> tmp;
            v[i] = tmp;
            continue;
        } else if (v[0].front() == v[i].back()) {
            for (ll j = v[i].size() - 1; j <= 0; j--) {
                v[0].insert(v[0].begin(), v[i][j]);
            }
            vector<ll> tmp;
            v[i] = tmp;
            continue;
        } else if (v[0].back() == v[i].back()) {
            for (ll j = v[i].size() - 1; j <= 0; j--) {
                v[0].push_back(v[i][j]);
            }
            vector<ll> tmp;
            v[i] = tmp;
            continue;
        }
        return false;
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    return true;
}

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    ll n, m;
    cin >> n >> m;

    map<ll, ll> mp;
    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;

        mp[a]++;
        if (mp[a] > 2) {
            cout << "No" << endl;
            return 0;
        }
        mp[b]++;
        if (mp[b] > 2) {
            cout << "No" << endl;
            return 0;
        }

        bool flg = false;
        for (ll j = 0; j < v.size(); j++) {
            if (v[j].front() == a) {
                v[j].insert(v[j].begin(), b);
                flg = true;
                break;
            } else if (v[j].back() == a) {
                v[j].push_back(b);
                flg = true;
                break;
            } else if (v[j].front() == b) {
                v[j].insert(v[j].begin(), a);
                flg = true;
                break;
            } else if (v[j].back() == b) {
                v[j].push_back(a);
                flg = true;
                break;
            }
        }
        if (!flg) {
            vector<ll> tmp;
            tmp.push_back(a);
            tmp.push_back(b);
            v.push_back(tmp);
        }
    }

    while (v.size() != 1) {
        if (!merge()) {
            cout << "No" << endl;
            return 0;
        }
    }

    ll vlen = v[0].size();
    sort(v[0].begin(), v[0].end());
    v[0].erase(unique(v[0].begin(), v[0].end()), v[0].end());
    if (vlen != v[0].size()) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    return 0;
}
