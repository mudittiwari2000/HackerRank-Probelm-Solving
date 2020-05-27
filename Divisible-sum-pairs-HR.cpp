#include <bits/stdc++.h>
using namespace std;

void DivSumPair (vector< int > v, int num) {

    int sum, j;
    int count = 0;
    for (size_t i = 0; i < v.size ()-1; ++i) {

        j = i+1;
        while (j < v.size ()) {

            sum = v.at(i) + v.at (j);
            //cout << i << " " << j << " " << sum << endl;
            if (sum % num == 0) count++;
            j++;
        }
    }
    cout << count;
}

int main ()
{

    ios_base :: sync_with_stdio (false); cin.tie (NULL); cout.tie (NULL);

    int size, num;
    cin >> size >> num;
    vector< int > v(size);
    for (size_t i = 0; i < size; ++i) cin >> v[i];
    DivSumPair (v, num);
}