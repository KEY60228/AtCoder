#include <iostream>
#include <map>
// #include <fstream>

#define ll long long int

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    ll n;
    cin >> n;

    map<string,ll> mp;
    for (ll i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        mp[tmp]++;
    }

    ll mx = 0;
    string s;
    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        if (mx < itr->second) {
            mx = itr->second;
            s = itr->first;
        }
    }

    cout << s << endl;

    return 0;
}
