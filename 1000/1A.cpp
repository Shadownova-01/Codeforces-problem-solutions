#include <iostream>
using namespace std;
int main()
{
    long long a,b,c,dorgo,prosto;
    cin>>a>>b>>c;
    if(a%c==0)
        dorgo=(a/c);
    else
        dorgo =(a/c)+1;
    if(b%c==0)
        prosto=(b/c);
    else
        prosto =(b/c)+1;

    cout<<(dorgo*prosto)<<endl;
}