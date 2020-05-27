#include <bits/stdc++.h>
using namespace std;

int main () 
{
    ios_base :: sync_with_stdio (false); cin.tie (NULL); cout.tie (NULL);

    int s, t; cin >> s >> t;
    cin.ignore (numeric_limits<streamsize>::max(), '\n');
    int a, a_pos, a_count = 0, b, b_pos, b_count = 0;
    cin >> a_pos >> b_pos;
    cin.ignore (numeric_limits<streamsize>::max(), '\n');
    cin >> a >> b;
    vector< signed int > vecA(a), vecB(b);
    for (size_t i = 0; i < a; ++i) {

        cin >> vecA[i];
        if ( (a_pos+vecA[i] >= s) && (a_pos+vecA[i] <= t)) a_count++;
    }
    for (size_t i = 0; i < b; ++i) {

        cin >> vecB[i];
        if ( (b_pos+vecB[i] >= s) && (b_pos+vecB[i] <= t)) b_count++;
    }
    cout << a_count << " " << b_count;
}