#include <iostream>
#include <vector>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    int n;
    cin >> n;

    vector<pair<long long int, long long int>> v(n);
    long long int minx = 0, miny = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        if (minx > v[i].first) {
            minx = v[i].first;
        }
        if (miny > v[i].second) {
            miny = v[i].second;
        }
    }

    for (int i = 0; i < n; i++) {
        v[i].first += abs(minx);
        v[i].second += abs(miny);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((
                        abs(v[i].first - v[j].first) == abs(v[i].first - v[k].first)
                        && abs(v[i].second - v[j].second) == abs(v[i].second - v[k].second)
                    ) || (
                        abs(v[i].first - v[j].first) == abs(v[j].first - v[k].first)
                        && abs(v[i].second - v[j].second) == abs(v[j].second - v[k].second)
                    ) || (
                        abs(v[i].first - v[k].first) == abs(v[j].first - v[k].first)
                        && abs(v[i].second - v[k].second) == abs(v[j].second - v[k].second)
                    )
                ) {
                    continue;
                }
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
