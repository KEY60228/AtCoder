#include <iostream>
#include <algorithm>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    long long int a, b;
    cin >> a >> b;

    string as = to_string(a);
    string bs = to_string(b);

    long long int n = min(as.length(), bs.length());
    for (int i = 0; i < n; i++) {
        if ((as[as.length() - 1 - i] - '0') + (bs[bs.length() - 1 - i] - '0') >= 10) {
            cout << "Hard" << endl;
            return 0;
        }
    }
    cout << "Easy" << endl;

    return 0;
}
