#include <iostream>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    string s;
    cin >> s;

    if (s.length() > 1) {
        char b1 = s[1];
        char b2 = s[0];
        if (b1 == 'o' && b2 == 'o') {
            cout << "No" << endl;
            return 0;
        }
        for (int i = 2; i < s.length(); i++) {
            if (s[i] == 'o') {
                if (b1 != 'x' || b2 != 'x') {
                    cout << "No" << endl;
                    return 0;
                }
            } else {
                if (!((b1 == 'x' && b2 == 'o') || (b1 == 'o' && b2 == 'x'))) {
                    cout << "No" << endl;
                    return 0;
                }
            }
            b2 = b1;
            b1 = s[i];
        }
    }

    cout << "Yes" << endl;

    return 0;
}