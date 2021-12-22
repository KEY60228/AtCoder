#include <iostream>
#include <string>
// #include <fstream>

#define ll long long int

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    string s;
    cin >> s;

    int n1 = stoi(s.substr(0, 1));
    int n2 = stoi(s.substr(2, 1));

    cout << n1 * n2 << endl;

    return 0;
}
