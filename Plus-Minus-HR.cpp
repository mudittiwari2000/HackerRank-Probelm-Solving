#include <bits/stdc++.h>
using namespace std;

void PlusMinus (vector< int > vec) {

    int positive = 0;   double pos; 
    int negative = 0;   double neg; 
    int zero = 0;       double zer;
    for (size_t i = 0; i < size; ++i) { 
        
        cin >> vec[i]; 
        if (vec[i] > 0) positive++; 
        else if (vec[i] < 0) negative++; 
        else zero++; 
    }

    pos = (double)positive/(double)size;    cout << pos << endl;  
    neg = (double)negative/(double)size;    cout << neg << endl;
    zer = (double)zero/(double)size;        cout << zer << endl;
}

int main () 
{
    ios_base :: sync_with_stdio (false); cin.tie (NULL); cout.tie (NULL);

    system ("cls");
    int size; cin >> size;
    vector< int > vec(size);
    system ("pause");
}