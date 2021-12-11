#include <iostream>
#include <vector>
#include <fstream>

#define CENTINEL 200000000000

using namespace std;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    long long int n, m, d;
    cin >> n >> m >> d;

    vector<long long int> vm(m + 1);
    vector<long long int> vs(m);
    for (long long int i = 0; i <= m; i++) {
        cin >> vm[i];
    }
    for (long long int i = 0; i < m; i++) {
        cin >> vs[i];
    }

    while (vm.size() < 3) {
        vm.push_back(CENTINEL);
    }

    long long int pos = 0;
    for (long long int i = 0; i < m; i++) {
        int ex = d * (i + 1) - vm[i + 2] + pos;

        // cout << "pos: " << pos << endl;
        // cout << "vm[i]: " << vm[i] << " vm[i + 1]: " << vm[i + 1] << " vm[i + 2]: " << vm[i + 2] << endl;
        // cout << "ex: " << ex << endl;
        // cout << endl;

        if (vm[i] <= ex) {
            if ((pos - ex) >= -(vm[i + 1])) {
                pos -= ex;
            } else {
                break;
            }
        } else {
            break;
        }
    }
    cout << pos << endl;

    if (n % 2 == 0) {
        pos -= d * (n - 1) / 2;
    } else {
        pos -= d * n / 2;
    }
    long long int ans = 0;
    long long int pnt = m;
    for (long long int i = 0; i < n; i++) {
        // cout << pos << endl;
        for (long long int j = 1; j < m; j++) {
            if (abs(pos) <= vm[j]) {
                ans += vs[j - 1];
                // cout << ans << endl;
                break;
            }
        }
        pos += d;
        // cout << pos << endl;
        // if (pos < 0) {
        //     for (pnt; pnt > 0; pnt--) {
        //         if (abs(pos) <= vm[pnt]) {
        //             continue;
        //         } else {
        //             ans += vs[pnt - 1];
        //             break;
        //         }
        //     }
        // } else {
        //     for (pnt; pnt <= m; pnt++) {
        //         if (pos <= vm[pnt]) {
        //             ans += vs[pnt - 1];
        //             break;
        //         }
        //     }
        // }
        // cout << vm[pnt] << " " << vs[pnt - 1] << " " << ans << endl;
        // pos += d;
    }

    cout << ans << endl;

    return 0;
}