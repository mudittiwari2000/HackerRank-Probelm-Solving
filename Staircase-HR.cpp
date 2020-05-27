#include <iostream>
using namespace std;

int main () 
{
    int size; cin >> size;
    for (size_t i = 1; i <= size; ++i) {

        for (size_t j = 1; j <= size; ++j) {

            if (j >= (size-i+1)) cout << "#";
            else cout << " ";
        }
        cout << endl;
    }
}