#include<iostream>
#include<vector>
using namespace std;
int main()
{  
    int t;
    cin>>t;
    int count=0;

    for(int i=0;i<t;i++)
    {   int blankspaces=0;
        count=0;
        int n;
        cin>>n;
        vector<int>arrV(n);
        for(int j=0;j<n;j++)
        {
            cin>>arrV[j];
            if(arrV[j]==0)
            {
                blankspaces++;
                count=max(count,blankspaces);
            }
            else{
                blankspaces=0;
            }
            
        }
           cout<<count<<endl;
    }
 
   
    return 0;
}