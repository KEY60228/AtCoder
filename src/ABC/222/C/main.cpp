#include <iostream>
#include <vector>
#include <algorithm>
// #include <fstream>

#define ll long long int

using namespace std;

struct Person {
    ll id;
    ll win;
    string t;

    bool operator<(const Person& right) const {
        return win == right.win ? id < right.id : win > right.win;
    }
};

// 0: 引き分け 1: aの勝ち 2: bの勝ち
int res(char a, char b) {
    if (
        (a == 'G' && b == 'C')
        || (a == 'C' && b == 'P')
        || (a == 'P' && b == 'G')
    ) {
        return 1;
    } else if (
        (a == 'G' && b == 'P')
        || (a == 'C' && b == 'G')
        || (a == 'P' && b == 'C')
    ) {
        return 2;
    } else {
        return 0;
    }
}

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    ll n, m;
    cin >> n >> m;
    n *= 2;

    vector<Person> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i].t;
        v[i].id = i + 1;
        v[i].win = 0;
    }

    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j += 2) {
            int r = res(v[j].t[i], v[j + 1].t[i]);
            if (r == 1) {
                v[j].win++;
            } else if (r == 2) {
                v[j + 1].win++;
            }
        }
        sort(v.begin(), v.end());
    }

    for (ll i = 0; i < n; i++) {
        cout << v[i].id << endl;
    }
}
