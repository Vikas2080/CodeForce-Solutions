#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t,n,m;
    cin>>t;
    int sum=0;
    vector<int>ans;

    while(t--){
        cin>>n,m;
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        for(int i=m;i>0;i++){
            int prod=1;
            prod=prod*ans[i];
            sum=sum+prod;
        }
    }



    return 0;
}