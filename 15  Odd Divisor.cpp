#include <iostream>
using namespace std;
#include <string>
#include <algorithm> 
#include <vector>
#include <climits>
#include <unordered_map>


int main(){

    long long t;
    cin >>t;

    while(t--){

        long long n;
        cin >>n;

        while(n%2==0){
            n=n/2;
        }

        if(n==1){
            cout<< "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }


    return 0;

}



// 15  Odd Divisor.cpp