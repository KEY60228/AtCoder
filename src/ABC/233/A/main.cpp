#include <iostream>
#include <cmath>
// #include <fstream>

#define ll long long int

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    ll x, y;
    cin >> x >> y;

    if (x >= y) {
        cout << 0 << endl;
    } else {
        cout << ceil((y - x) / 10.0) << endl;
    }

    return 0;
}
