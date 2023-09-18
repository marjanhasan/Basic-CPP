#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 10000)
    {
        if (n > 20000)
            cout << "Gucci Bag\nGucci Belt";
        else
            cout << "Gucci Bag\n";
    }
    else if (n >= 5000)
        cout << "Levis Bag\n";
    else
        cout << "Something\n";
    return 0;
}
