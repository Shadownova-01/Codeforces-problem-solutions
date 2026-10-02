#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    char a;
    int b, counter = 0;
    string s;
    vector<char> x;
    cin >> s;
    b = s.size();
    for (int i = 0; i < b; i++)
    {
        a = s[i];
        x.push_back(a);
    }
    sort(x.begin(), x.end());
    for (int i = 0; i < b; i++)
    {
        if (x[i - 1] != x[i])
            counter = counter + 1;
    }
    if (counter % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}