#include <iostream>
using namespace std;
int main()
{

    int x;
    cin >> x;
    int count = 0;
    int steps[]={5,4,3,2,1};

    for(int i:steps){
        count+=(x/i);
        x%=i;
    }

    cout<<count;
    return 0;
}