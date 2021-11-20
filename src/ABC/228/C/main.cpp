#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
// #include <fstream>

using namespace std;

int n, k;
map<int, int> mp;

bool solve(int sc) {
    int cnt = 0;
    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        if (itr->first - sc > 300) {
            cnt += itr->second;
        }
        if (cnt >= k) {
            return false;
        }
    }
    return true;
}

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < 3; j++) {
            int tmp;
            cin >> tmp;
            count += tmp;
        }
        v[i] = count;
    }

    for (int i = 0; i < n; i++) {
        mp[v[i]] = mp[v[i]] + 1;
    }

    for (int i = 0; i < n; i++) {
        if (solve(v[i])) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
