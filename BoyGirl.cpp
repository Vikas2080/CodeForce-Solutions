#include <iostream>
#include <string>
#include<set>
using namespace std;

int main() {
    string uname;
    getline(cin, uname); 
    set<char>s1;
    int n = uname.length();
    for(char i:uname){
        s1.insert(i);
    }
    if(s1.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}
