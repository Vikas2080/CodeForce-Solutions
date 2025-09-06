#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;



    for(int i=0;i<t;i++)
    {
       int n,q;
       cin>>n>>q;
       vector<long long>vect(n);
       long long sumo=0;

        for(int j=0;j<n;j++)
        {
            cin>>vect[j];
            sumo=sumo+vect[j];
        }
        while(q--){

            long long l,r,k;
            cin>>l>>r>>k;
            long long betweensum=0;
            for(int j=l-1;j<r;j++){

                betweensum=betweensum+vect[j];
            }
            long long newsum=sumo-betweensum +((r-l+1)*k);
            if(newsum%2==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }


    }    return 0;
}