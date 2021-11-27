#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    long long int n, w;
    cin >> n >> w;

    vector<pair<long long int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), greater<pair<long long int, int>>());

    long long int cur = 0;
    long long int ans = 0;
    long long int weight = 0;
    while (cur < n) {
        if (v[cur].second <= w - weight) {
            weight += v[cur].second;
            ans += v[cur].first * v[cur].second;
            cur++;
        } else {
            ans += v[cur].first * (w - weight);
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
