#include <bits/stdc++.h>
using namespace std;

int main () 
{

    ios_base :: sync_with_stdio (false); cin.tie (NULL); cout.tie (NULL);

    system ("cls");

    int min_count = 0; int max_count = 0;
    int size; cin >> size;
    vector< int > v(size);
    for (size_t i = 0; i < size; ++i) {
        
        int min, max;
        cin >> v.at(i);
        if (i == 0) {
            
            min = v.at(i);
            max = v.at(i);
        }
        else {

            if (v.at (i) < min) { min = v.at (i); min_count++; }
            else if (v.at (i) > max) { max = v.at (i); max_count++; }
        }
    }
    cout << max_count << " " << min_count;
}