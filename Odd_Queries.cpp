#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, q, n;
    cin >> t >> q >> n;

    vector<int> prefixarray(n, 0);
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        prefixarray[i] = prefixarray[i - 1] + arr[i];
    }

    return 0;
}