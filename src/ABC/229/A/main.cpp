#include <iostream>
#include <vector>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    vector<string> v(2);
    for (int i = 0; i < 2; i++) {
        cin >> v[i];
    }

    if ((v[0][0] == '.' && v[1][1] == '.') || (v[0][1] == '.' && v[1][0] == '.')) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}
