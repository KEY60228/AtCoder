#include <iostream>
#include <map>
#include <fstream>

using namespace std;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    long long int h, w, c, q;
    cin >> h >> w >> c >> q;

    map<pair<long long int, long long int>, long long int> mpc;
    map<pair<long long int, long long int>, long long int> mps;
    for (long long int i = 0; i < q; i++) {
        long long int t, n, c;
        cin >> t >> n >> c;
        mpc[make_pair(t, n)] = c;
        mps[make_pair(t, n)] = i;
    }

    map<long long int, pair<long long int, long long int>> mps2;
    for (auto itr = mps.begin(); itr != mps.end(); itr++) {
        mps2[itr->second] = itr->first;
    }



    return 0;
}