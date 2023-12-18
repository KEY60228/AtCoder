#include <iostream>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    int n, k, a;
    cin >> n >> k >> a;

    int result = k % n == 0 ? a - 1 : a - 1 + k % n;

    if (result >= n) {
        result -= n;
    }
    if (result <= 0) {
        result += n;
    }

    cout << result << endl;

    return 0;
}
