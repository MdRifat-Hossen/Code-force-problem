// BISMILLAH
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[20], s1[20];
    cin >> s >> s1;
    int c = strcmp(s, s1);
    if (c > 1)
        cout << s << endl;

    return 0;
}