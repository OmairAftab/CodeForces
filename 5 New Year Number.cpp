#include <iostream>
using namespace std;
#include <string>


int main(){

    int t;
    cin >>t;

    while(t--){

        int n;
        cin >>n;

        int remainder=n%2020;
        int quotient=n/2020;

        if(quotient>=remainder){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}




// 5 New Year Number.cpp