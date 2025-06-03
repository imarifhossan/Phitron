#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; t++)
    {
        string s;
        cin >> s;
        int size = s.size();
        // cout << size <<endl;
        char first_character = s.front();
        // cout << first_character << endl;
        char last_character = s.back();
        // cout << last_character << endl;
        if (size > 10)
        {
            cout << first_character << size - 2 << last_character << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}