#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n,t;
    cin>>n>>t;
    vector<long long>nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    long long low=0;
    long long high=1e18;

    while(low<high){
        long long mid=(low+high)/2;
        long long total=0;
        for(int i=0;i<n;i++){
            total+=mid/nums[i];
            if(total>=t) break;
        }
        if(total>=t){
            high=mid;
        }else{
            low=mid+1;
        }
    }
    cout<<low<<endl;
    return 0;
}