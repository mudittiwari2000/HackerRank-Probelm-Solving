#include <bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base :: sync_with_stdio (false); cin.tie (NULL); cout.tie (NULL);

    system ("cls");
    int num = 0; stringstream ss; //* Declaring an integer and a stringstream
    string s; getline (cin, s); //* Declaring string and taking input

    if (s[s.size ()-2] == 'A') { 
        
        s.pop_back(); s.pop_back(); //* Deleting two characters from the back

        if (s[0] > 48) { 

            num = 12 + 10 + (s[1] - 48);
            if (num == 24) ss << "00";
        }
        else ss << s[0] << s[1];

        for (size_t i = 2; i < s.size(); i++) ss << s[i]; //* Inserting the rest of the string in stringstream
        s.clear ();
        ss >> s;        
    }
    else {

        s.pop_back (); s.pop_back (); //* Deleting two characters from the back

        if (s[0] > 48) { 

            num = 12 + 10 + (s[1] - 48);
            if (num == 24) num = 12;
        }
        else num = 12 + (s[1] - 48);

        ss << num;
        for (size_t i = 2; i < s.size(); i++) ss << s[i];
        s.clear ();
        ss >> s;
    }
    cout << s;

    system ("pause");
}