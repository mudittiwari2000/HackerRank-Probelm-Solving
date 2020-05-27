#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main () 
{
    ios_base :: sync_with_stdio (false); cin.tie (NULL); cout.tie (NULL);

    system ("cls");
    int size; cin >> size;
    vector< vector< ll > > vec;
    int num; int right = 0; int left = 0; int res;

    for (size_t i = 0; i < size; ++i) {
        
        vector< ll > v;

        for (size_t i = 0; i < size; ++i)  { cin >> num; v.push_back (num); }
        vec.push_back (v);
    }
    for (size_t i = 0; i < size; ++i) {

        for (size_t j = 0; j < vec[i].size (); ++j) {
            if ( j == i) right += vec[i][j];
            if ( j == vec[i].size () - (i + 1)) left += vec[i][j];
        }
    }
    cout << abs (right - left);
    
}