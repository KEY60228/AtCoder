#include <iostream>
#include <vector>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    long long int n;
    cin >> n;

    pair<int, int> p = make_pair(0, 0);
    int key = 0;
    for (long long int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;

        if (p.first != 0) {
            if (key != 0) {
                if (key != a && key != b) {
                    cout << "No" << endl;
                    return 0;
                }
            } else {
                if (p.first == a || p.first == b) {
                    key = p.first;
                } else if (p.second == a || p.second == b) {
                    key = p.second;
                }
            }
        } else {
            p = make_pair(a, b);
        }
    }

    cout << "Yes" << endl;

    return 0;
}
