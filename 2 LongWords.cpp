#include <iostream>
using namespace std;
#include <string>

int main(){

    int t;
    cin >> t;

    while(t--){
    string s;
    cin >> s;

    string modify;

    if(s.length()<=10){
        cout << s << endl;
    }
    else{
        modify+=s[0];
        modify+= to_string(s.size()-2);
        modify+=s[s.length()-1];

        cout << modify <<endl;
    }   

}


    return 0;

}