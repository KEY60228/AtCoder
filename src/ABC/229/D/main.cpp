#include <iostream>
#include <queue>
#include <algorithm>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    string s;
    long long int k;
    cin >> s >> k;

    queue<char> q;
    long long int dot = 0;
    long long int ans = 0;
    for (long long int i = 0; i < s.length(); i++) {
        q.push(s[i]);
        if (s[i] == '.') {
            if (dot < k) {
                dot++;
            } else {
                while (!q.empty()) {
                    char tmp = q.front(); q.pop();
                    if (tmp == '.') {
                        break;
                    }
                }
            }
        }
        long long int siz = q.size();
        ans = max(ans, siz);
    }

    cout << ans << endl;

    return 0;
}
