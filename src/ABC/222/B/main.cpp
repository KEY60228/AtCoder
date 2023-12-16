#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    int n, p;
    cin >> n >> p;

    int count = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a < p) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
