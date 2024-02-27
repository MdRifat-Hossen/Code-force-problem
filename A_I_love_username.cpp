// BISMILLAH
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int ctn = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            ctn++;
        }
        if (a[i] < min)
        {
            min = a[i];
            ctn++;
        }
    }
    cout << ctn << endl;
    return 0;
}