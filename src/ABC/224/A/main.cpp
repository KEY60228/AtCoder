#include <iostream>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    string s;
    cin >> s;

    if (s.substr(s.length() - 2) == "er") {
        cout << "er" << endl;
    } else {
        cout << "ist" << endl;
    }

    return 0;
}
