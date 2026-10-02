#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, r, c, counter = 0, c2 = 0;
    vector<int> x;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        cin >> r;
        x.push_back(r);
    }
    sort(x.begin(), x.end());
    reverse(x.begin(), x.end());
    c = x[b - 1];
    for (int i = 0; i < a; i++)
    {
        if (x[i] == 0)
            c2 = c2 + 1;
    }
    if (c2 == a)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < a; i++)
    {
        if (x[i] == 0)
            continue;
        if (x[i] >= c)
            counter += 1;
    }
    cout << counter << endl;
}