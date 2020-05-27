#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll A_Very_Big_Sum (vector< ll > v) {

    ll sum = 0;
    for (size_t i = 0; i < v.size (); ++i) { cin >> v[i];  sum += v[i]; }
    return sum;
}

int main () 
{
    ios_base :: sync_with_stdio (false); cin.tie (NULL); cout.tie (NULL);

    int size; cin >> size;
    vector< ll > v(size);
    ll sum;

    sum = A_Very_Big_Sum (v);
    cout << sum;
}