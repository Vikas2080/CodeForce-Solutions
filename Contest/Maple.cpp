#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, a, b, count;
    cin >> t;
    while (t--)
    {
        count = 0;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else if(a%b==0||b%a==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }

    return 0;
}