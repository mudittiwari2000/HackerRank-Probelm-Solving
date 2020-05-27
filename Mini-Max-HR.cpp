#include <bits/stdc++.h>
#include <iostream>
typedef long long int ll;
using namespace std;

int main () {

    vector< ll > v(5);
    for (size_t i = 0; i<v.size (); ++i) cin >> v[i];
    sort (v.begin (), v.end());
    ll min = v[0] + v[1] + v[2] + v[3];
    ll max = v[1] + v[2] + v[3] + v[4];
    cout << min << " " << max << endl;
}