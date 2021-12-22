#include <iostream>
// #include <fstream>

#define ll long long int

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    string s, t;
    cin >> s >> t;

    ll nf1 = ((s[0] - 19) % 26) + 1;
    ll nf2 = ((t[0] - 19) % 26) + 1;
    ll cnt;
    if (nf2 >= nf1) {
        cnt = nf2 - nf1;
    } else {
        cnt = (nf2 + 26) - nf1;
    }

    for (int i = 1; i < s.length(); i++) {
        ll n1 = ((s[i] - 19) % 26) + 1;
        ll n2 = ((t[i] - 19) % 26) + 1;

        if (n2 >= n1) {
            if (n2 - n1 == cnt) {
                continue;
            } else {
                cout << "No" << endl;
                return 0;
            }
        } else {
            if ((n2 + 26) - n1 == cnt) {
                continue;
            } else {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
