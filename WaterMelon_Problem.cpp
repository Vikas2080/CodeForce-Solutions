
#include <iostream>
using namespace std;
int main() {
    int w;
   cout<<"Enter the weight of the watermelon"<<endl;
    cin>>w;
    if(w==2){
        cout<<"No";
    }
    else if(w%2==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
    return 0;
}