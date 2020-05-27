#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main ()
{
    ios_base :: sync_with_stdio (false); cin.tie (NULL); cout.tie (NULL);

    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    int j = x2+v2; int count = 0;
    for (int i = x1+v1; count < 10000; i += v1, j += v2) {

        if (i == j) { cout << "YES" << endl; return 0; }
        count++;
    } 
    cout << "NO" << endl;
}