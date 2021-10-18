#include <iostream>
#include <vector>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    long long int n;
    cin >> n;

    vector<pair<double, double>> v(n);
    double time = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        time += v[i].first / v[i].second;
    }
    time /= (double)2;

    double ans = 0;
    for (int i = 0; i < n; i++) {
        if (time >= (v[i].first / v[i].second)) {
            time -= (v[i].first / v[i].second);
            ans += v[i].first;
        } else {
            ans += time * v[i].second;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
