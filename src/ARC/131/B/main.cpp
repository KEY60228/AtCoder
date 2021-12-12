#include <iostream>
#include <vector>
#include <queue>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    long long int h, w;
    cin >> h >> w;

    vector<vector<char>> v(h + 2, vector<char>(w + 2));
    queue<pair<int, int>> q;
    for (int i = 0; i < h + 2; i++) {
        if (i == 0 || i == h + 1) {
            for (int j = 0; j < w + 2; j++) {
                v[i][j] = '0';
            }
            continue;
        }
        for (int j = 0; j < w + 2; j++) {
            if (j == 0 || j == w + 1) {
                v[i][j] = '0';
                continue;
            }
            cin >> v[i][j];
            if (v[i][j] == '.') {
                q.push({i, j});
            }
        }
    }

    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        int i = 1;
        while (i < 6) {
            char c = i + '0';
            if (
                v[p.first - 1][p.second] != c // 上
                && v[p.first][p.second + 1] != c // 右
                && v[p.first + 1][p.second] != c // 下
                && v[p.first][p.second - 1] != c // 左
            ) {
                v[p.first][p.second] = c;
                break;
            }
            i++;
        }
    }

    for (int i = 1; i < h + 1; i++) {
        for (int j = 1; j < w + 1; j++) {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}