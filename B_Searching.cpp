#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, res = -1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            res = i;
            break;
        }
    }
    cout << res << endl;
    return 0;
}
