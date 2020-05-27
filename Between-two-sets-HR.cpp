#include <bits/stdc++.h>
using namespace std;

int main ()
{

    ios_base :: sync_with_stdio (false); cin.tie (NULL); cout.tie (NULL);

    system ("cls");

    int count = 0; int res = 0;
    int n, m; 
    cin >> n >> m;
    cin.ignore (numeric_limits<streamsize>::max(), '\n');
    vector< int > a(n), b(m);

    //* Input FOR loop for first array
    for (size_t i = 0; i < n; ++i) cin >> a.at (i);
    //* Input FOR loop for second array
    for (size_t i = 0; i < m; ++i) cin >> b.at (i);

    for (size_t i = a.at(n-1); i <= b.at(0); i += a.at (n-1)) {

        int j = n;
        while (j > 0) {

            //cout << n - j << " ";
            if (i % a.at(n-j) == 0 ) { count = 1;}
            else { count  = 0; cout << "J[" << n-j << "]" << " "; break; }
            j--;
        }
        if (count == 1) {

            int k = m;
            while (k > 0) {

                //cout << m - k << " ";
                if (b.at (m-k) % i == 0) { count = 1;}
                else { count = 0; break; cout << "K[" << m-k << "]" << " ";}
                k--;
            }
        }
        else continue;
        if (count == 1) res++;
        else continue;
    }
    cout << res;
}