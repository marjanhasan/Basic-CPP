#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    /***input done */

    int ans[n + m]; // a[n] + a[m] er size
    // copy a[i] er value to ans[i]
    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i];
    }
    int i = n; // ans[i] er value jekhan thk next value rakhbo seta track rakhlam
    // copy b[j] er value to ans[i]
    for (int j = 0; j < m; j++)
    {
        ans[i] = b[j];
        i++;
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
