#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        char ans = a - 32;
        cout << ans << endl;
    }
    else
    {
        char ans = a + 32;
        cout << ans << endl;
    }
    return 0;
}
