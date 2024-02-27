// BISSMILLAH
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = min(a, b);
    int d = (max(a, b) - min(a, b)) / 2;
    cout << c << " " << d << endl;

    return 0;
}