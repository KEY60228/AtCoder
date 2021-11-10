#include <iostream>
#include <vector>
#include <algorithm>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    long long int n;
    cin >> n;

    vector<vector<long long int> > v;
    vector<long long int> vl;
    for (long long int i = 0; i < n; i++) {
        long long int l;
        cin >> l;
        vector<long long int> tmp(l);
        for (long long int j = 0; j < l; j++) {
            cin >> tmp[j];
        }
        if (find(vl.begin(), vl.end(), l) == vl.end()) {
            vl.push_back(l);
            v.push_back(tmp);
            continue;
        }
        if (find(v.begin(), v.end(), tmp) == v.end()) {
            v.push_back(tmp);
        }
    }

    cout << v.size() << endl;

    return 0;
}
