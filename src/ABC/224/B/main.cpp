#include <iostream>
#include <vector>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    int h, w;
    cin >> h >> w;

    vector<vector<long long int>> v(h, vector<long long int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = i + 1; j < h; j++) {
            for (int k = 0; k < w; k++) {
                for (int l = k + 1; l < w; l++) {
                    if ((v[i][k] + v[j][l]) > (v[j][k] + v[i][l])) {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
