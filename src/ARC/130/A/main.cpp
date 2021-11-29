#include <iostream>
#include <vector>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    long long int n;
    string s;
    cin >> n >> s;

    char now = s[0];
    long long int cnt = 1;
    long long int mx = 0;
    vector<long long int> v;
    for (long long int i = 1; i < n; i++) {
        if (s[i] == now) {
            cnt++;
        } else {
            v.push_back(cnt);
            mx = max(mx, cnt);
            cnt = 1;
            now = s[i];
        }
    }
    v.push_back(cnt);
    mx = max(mx, cnt);

    vector<long long int> vt(mx + 1);
    for (long long int i = 0; i <= mx; i++) {
        vt[i] = i * (i + 1) / 2;
    }

    long long int ans = 0;
    for (long long int i = 0; i < v.size(); i++) {
        ans += vt[v[i] - 1];
    }

    cout << ans << endl;

    return 0;
}