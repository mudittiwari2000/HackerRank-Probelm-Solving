#include <bits/stdc++.h>
using namespace std;

void BirthdayChocolate (vector< int > v, int d, int m) {

    int  month;
    int count = 0;
    for (size_t i = 0; i < v.size()-(m-1); ++i) {

        month = v.at(i);
        int j = m; int k;
        while (j > 1) {
        
            k = i + (m-j)+1;
            month += v.at(k);
        }
        if (month == d) count++;
    }
    cout << count;
}

int main ()
{
    ios_base :: sync_with_stdio (false); cin.tie (NULL); cout.tie (NULL);

    int size; cin >> size;
    vector< int > choc(size);
    for (size_t i = 0; i < size; ++i) cin >> choc.at(i);
    int day, month;
    cin >> day >> month;
    BirthdayChocolate (choc, day, month);
}