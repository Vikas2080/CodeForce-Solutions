#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int x;
    cin >> x;

    vector<string> words(x);

    for (int i = 0; i < x; i++)
    {
        cin>>words[i];
    }
    for (string a : words)
    {
        int l = a.length();
        if (l > 10)
        {
            cout << a[0] << l - 2 << a[l - 1] << endl;
        }
        else
        {
            cout << a << endl;
        }
    }

    return 0;
}