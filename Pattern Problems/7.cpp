/*
 *
 ***
 *****
 *******
 *********
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {

        for (int s = 1; s <= n - i; s++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << "*";

        for (int t = 1; t <= i - 1; t++)
            cout << "*";

        cout << endl;
    }
    return 0;
}
