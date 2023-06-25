#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = INT_MIN;
    int min = INT_MAX;
    while (n--)
    {
        int v;
        cin >> v;
        if (v > max)
            max = v;
        if (v < min)
            min = v;
    }
    cout << min << endl
         << max;
    return 0;
}
