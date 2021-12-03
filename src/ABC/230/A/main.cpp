#include <iostream>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    long long int n;
    cin >> n;

    if (n < 10) {
        cout << "AGC00" << n << endl;
    } else if (n < 42) {
        cout << "AGC0" << n << endl;
    } else {
        cout << "AGC0" << n + 1 << endl;
    }

    return 0;
}