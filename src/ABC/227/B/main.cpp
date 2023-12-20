#include <iostream>
#include <map>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    map<int, bool> m;
    for (int i = 1; i < 143; i++) {
        for (int j = 1; j < 143; j++) {
            int result = 4 * i * j + 3 * i + 3 * j;
            if (result > 1000) {
                break;
            }
            m[result] = true;
        }
    }

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        if (!m[s]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
