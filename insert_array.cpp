#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pos, val;
    cin >> pos >> val;
    for (int i = n + 1; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
