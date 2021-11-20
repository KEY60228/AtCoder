#include <iostream>
#include <vector>
#include <queue>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    int n, x;
    cin >> n >> x;

    vector<pair<int, bool>> v(n);
    queue<int> q;
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        if (i == x - 1) {
            v[i].second = true;
            q.push(v[i].first);
        } else {
            v[i].second = false;
        }
    }

    int count = 0;
    while(!q.empty()) {
        count++;
        int nx = q.front();
        q.pop();
        if (v[nx - 1].second == false) {
            v[nx - 1].second = true;
            q.push(v[nx - 1].first);
        }
    }

    cout << count << endl;

    return 0;
}