#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    string n;
    cin >> n;

    switch (n.length()) {
        case 1:
            cout << "000" << n << endl;
            break;
        case 2:
            cout << "00" << n << endl;
            break;
        case 3:
            cout << "0" << n << endl;
            break;
        case 4:
            cout << n << endl;
            break;
    }

    return 0;
}
