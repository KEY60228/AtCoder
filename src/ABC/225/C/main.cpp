#include <iostream>
#include <cmath>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    long long int n, m;
    cin >> n >> m;

    long long int x = 0, y = 0;
    for (long long int i = 0; i < n; i++) {
        long long int tmpy;
        for (long long int j = 0; j < m; j++) {
            long long int tmp;
            cin >> tmp;

            if (i == 0 && j == 0) {
                if (tmp % 7 == 0) {
                    y = 7;
                    x = tmp / 7;
                } else {
                    y = tmp % 7;
                    x = (tmp / 7) + 1;
                }
                if (x > pow(10, 100)) {
                    cout << "No" << endl;
                    return 0;
                }
            }
            if (j == 0) {
                tmpy = y;
            } else {
                tmpy++;
            }

            if (tmpy > 7) {
                cout << "No" << endl;
                return 0;
            }
            if (tmp != (x - 1) * 7 + tmpy) {
                cout << "No" << endl;
                return 0;
            }
        }
        x++;
        if (x > pow(10, 100)) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
