#include <bits/stdc++.h>
using namespace std;

void CompareTheTriplets (vector< int > v1, vector< int > v2) {

    int alice = 0; int bob = 0;

    for (size_t i = 0; i < 3; ++i) cin >> v1[i];
    for (size_t i = 0; i < 3; ++i) { 
        
        cin >> v2[i];
        if (v1[i] > v2[i]) alice++;
        else if (v1[i] < v2[i]) bob++;
        else if (v1[i] == v2[i]) continue;
    } 
    cout << alice << " " << bob;
}

int main () 
{
    ios_base :: sync_with_stdio (false); cin.tie (NULL); cout.tie (NULL);

    vector< int > v1(3), v2(3);
    
    CompareTheTriplets (v1, v2); 
}