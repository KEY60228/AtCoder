#include <iostream>
#include <cfenv>
#include <cmath>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    double x;
    cin >> x;

    cout << round(x) << endl;

    return 0;
}
