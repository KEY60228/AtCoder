#include <iostream>
#include <vector>
#include <algorithm>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    long long int n, m;
    cin >> n >> m;

    vector<long long int> v;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if (v.size() != 0) {
            if (find(v.begin(), v.end(), a) == v.end()) {
                for (auto itr = v.rbegin(); itr != v.rend(); itr++) {
                    if (*itr < a) {
                        v.insert(itr.base(), a);
                        break;
                    }
                    if (itr.base() == v.begin()) {
                        v.insert(v.begin(), a);
                        break;
                    }
                }
            }
            for (auto itr = v.rbegin(); itr != v.rend(); itr++) {
                if (*itr == b) {
                    break;
                }
                if (*itr == a || *itr < b) {
                    v.insert(itr.base(), b);
                    break;
                }
                if (itr.base() == v.begin()) {
                    cout << -1 << endl;
                    return 0;
                }
            }
        } else {
            v.push_back(a);
            v.push_back(b);
        }
        // for (int i = 0; i < v.size(); i++) {
        //     cout << v[i] << endl;
        // }
        // cout << endl;
    }

    if (v.size() != n) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < v.size(); i++) {
            if (i != 0) {
                cout << " ";
            }
            cout << v[i];
        }
        cout << endl;
    }

    return 0;
}
