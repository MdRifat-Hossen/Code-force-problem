// BISMILLAH
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        if (s[0] != 'Y' && s[0] != 'y')
            cout << "NO" << endl;
        else if (s[1] != 'E' && s[1] != 'e')
            cout << "NO" << endl;
        else if (s[2] != 'S' && s[2] != 's')
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}