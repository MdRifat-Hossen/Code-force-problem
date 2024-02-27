// BISMILLAH
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int ans = pow(5, n - 1);
    cout << ((ans % 100) * 5) % 100 << endl;

    return 0;
}