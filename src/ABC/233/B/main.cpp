#include <iostream>
// #include <fstream>

#define ll long long int

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    ll l, r;
    string s;
    cin >> l >> r >> s;

    string f = s.substr(0, l - 1);
    string q = s.substr(l - 1, r - l + 1);
    string b = s.substr(r);

    cout << f;
    for (int i = 0; i < q.length(); i++) {
        cout << q[q.length() - 1 - i];
    }
    cout << b << endl;

    return 0;
}
