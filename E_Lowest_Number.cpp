#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = INT_MAX, pos;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
            continue;
        if (arr[i] < min)
        {
            pos = i + 1;
            min = arr[i];
        }
    }
    cout << min << " " << pos << endl;
    return 0;
}
