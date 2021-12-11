#include <iostream>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    long long int a;
    string b;
    cin >> a >> b;

    a *= 2;
    string tmp = b + '0' + to_string(a);
    long long int ans = stoll(tmp) / 2;

    cout << ans << endl;

    return 0;
}
