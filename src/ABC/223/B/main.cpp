#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    string s;
    cin >> s;

    vector<string> v;
    for (int i = 0; i < s.length(); i++) {
        string tmp;
        tmp = s.substr(i, s.length()) + s.substr(0, i);
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    cout << v[0] << endl;
    cout << v[v.size() - 1] << endl;

    return 0;
}
