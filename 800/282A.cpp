#include <iostream>
using namespace std;
int main()
{
    int t;
    int a=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if (s == "++X"||s == "X++")
            a=a+1;
        else if(s == "X--"||s == "--X")
            a=a-1;
}
    cout<<a<<endl;
}