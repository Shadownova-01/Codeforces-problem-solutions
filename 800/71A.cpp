#include <iostream>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> s;
        a = s.size();
        if (a > 10)
        {
            cout << s[0] << (a - 2) << s[a - 1] << endl;
        }
        else
            cout << s << endl;
    }
}