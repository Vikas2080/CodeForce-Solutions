
#include <iostream>
using namespace std;
int main() {
   int n;
   cin >> n;
   int a,b,c;
   int counter=0;
   for(int i=1;i<=n;i++){
       cin>>a;
       cin>>b;
       cin>>c;
       if(a+b+c>=2)
           counter++;
      
   }
   cout<<counter<<endl;
  return 0;
}