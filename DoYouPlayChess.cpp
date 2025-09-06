#include <iostream>
using namespace std;

int main(){

    int t;
    string move;
    cin >> t;
     for(int i=0;i<t;i++){
        cin >> move;

        char tens=move[0];
        char ones=move[1];

        for(char c='1';c<='8';c++){
            if(c!=ones){
                cout<<tens<<c<<endl;
            }
        }
        for(char xy ='a';xy<='h';xy++){
            if(xy!=tens){
                if(xy!=tens){
                cout<<xy<<ones<<endl;
            }
        }
        }
    }

return 0;
}