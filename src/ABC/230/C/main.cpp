#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    long long int n, a, b, p, q, r, s;
    cin >> n >> a >> b >> p >> q >> r >> s;

    vector<vector<char>> v(q - p + 1, vector<char>(s - r + 1, '.'));

    if (p <= a && a <= q) {
        if (r <= b && b <= s) { // 内包
            // 右上
            long long int y = a, x = b;
            while (y >= p && x <= s) {
                v[y - 1][x - 1] = '#';
                y--;
                x++;
            }
            // 右下
            y = a, x = b;
            while (y <= q && x <= s) {
                v[y - 1][x - 1] = '#';
                y++;
                x++;
            }
            // 左下
            y = a, x = b;
            while (y <= q && x >= r) {
                v[y - 1][x - 1] = '#';
                y++;
                x--;
            }
            // 左上
            y = a, x = b;
            while (y >= p && x >= r) {
                v[y - 1][x - 1] = '#';
                y--;
                x--;
            }
        } else if (b < r) { // 左に中心
            // 右上
            long long int y = a, x = b;
            while (y >= p && x <= s) {
                if (0 <= y - p && y - p <= q && 0 <= x - r && x - r <= s) {
                    v[y - p][x - r] = '#';
                }
                y--;
                x++;
            }
            // 右下
            y = a, x = b;
            while (y <= q && x <= s) {
                if (0 <= y - p && y - p <= q && 0 <= x - r && x - r <= s) {
                    v[y - p][x - r] = '#';
                }
                y++;
                x++;
            }
        } else if (b > s) { // 右に中心
            // 左下
            long long int y = a, x = b;
            while (y <= q && x >= r) {
                if (0 <= y - p && y - p <= q && 0 <= x - r && x - r <= s) {
                    v[y - p][x - r] = '#';
                }
                y++;
                x--;
            }
            // 左上
            y = a, x = b;
            while (y >= p && x >= r) {
                if (0 <= y - p && y - p <= q && 0 <= x - r && x - r <= s) {
                    v[y - p][x - r] = '#';
                }
                y--;
                x--;
            }
        }
    } else if (a < p) {
        if (r <= b && b <= s) { // 上に中心
            // 右下
            long long int y = a, x = b;
            while (y <= q && x <= s) {
                if (0 <= y - p && y - p <= q && 0 <= x - r && x - r <= s) {
                    v[y - p][x - r] = '#';
                }
                y++;
                x++;
            }
            // 左下
            y = a, x = b;
            while (y <= q && x >= r) {
                if (0 <= y - p && y - p <= q && 0 <= x - r && x - r <= s) {
                    v[y - p][x - r] = '#';
                }
                y++;
                x--;
            }
        } else if (b < r) { // 左上に中心
            // 右下
            long long int y = a, x = b;
            while (y <= q && x <= s) {
                if (0 <= y - p && y - p <= q && 0 <= x - r && x - r <= s) {
                    v[y - p][x - r] = '#';
                }
                y++;
                x++;
            }
        } else if (b < s) { // 右上に中心
            // 左下
            long long int y = a, x = b;
            while (y <= q && x >= r) {
                if (0 <= y - p && y - p <= q && 0 <= x - r && x - r <= s) {
                    v[y - p][x - r] = '#';
                }
                y++;
                x--;
            }
        }
    } else if (a > q) {
        if (r <= b && b <= s) { // 下に中心
            // 右上
            long long int y = a, x = b;
            while (y >= p && x <= s) {
                if (0 <= y - p && y - p <= q && 0 <= x - r && x - r <= s) {
                    v[y - p][x - r] = '#';
                }
                y--;
                x++;
            }
            // 左上
            y = a, x = b;
            while (y >= p && x >= r) {
                if (0 <= y - p && y - p <= q && 0 <= x - r && x - r <= s) {
                    v[y - p][x - r] = '#';
                }
                y--;
                x--;
            }
        } else if (b < r) { // 左下に中心
            // 右上
            long long int y = a, x = b;
            while (y >= p && x <= s) {
                if (0 <= y - p && y - p <= q && 0 <= x - r && x - r <= s) {
                    v[y - p][x - r] = '#';
                }
                y--;
                x++;
            }
        } else if (b < s) { // 右下に中心
            // 左上
            long long int y = a, x = b;
            while (y >= p && x >= r) {
                if (0 <= y - p && y - p <= q && 0 <= x - r && x - r <= s) {
                    v[y - p][x - r] = '#';
                }
                y--;
                x--;
            }
        }
    }

    for (long long int i = 0; i < q - p + 1; i++) {
        for (long long int j = 0; j < s - r + 1; j++) {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}
