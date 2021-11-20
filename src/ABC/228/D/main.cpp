#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

#define N 1048576

using namespace std;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    int q;
    cin >> q;

    vector<long long int> v(N, -1);
    for (int i = 0; i < q; i++) {
        int t;
        long long int x;
        cin >> t >> x;
        if (t == 1) {
            long long int h = x;
            while (v[h % N] != -1) {
                h++;
            }
            v[h % N] = x;
        } else {
            cout << v[x % N] << endl;
        }
    }

    return 0;
}