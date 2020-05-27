#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base :: sync_with_stdio (false); cin.tie (NULL); cout.tie (NULL);

    int mod = 0;
    int n; cin >> n;
    vector< int > grades(n);
    for (size_t i = 0; i < n; ++i) { 
        
        cin >> grades[i]; 
        if (grades[i] >= 38) {

            mod = grades[i] % 5;
            if (mod == 3) grades[i] += 2;
            else if (mod == 4) grades[i] += 1;
        } 
    }
    for ( size_t m : grades) cout << m << endl;
}