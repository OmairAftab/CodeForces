
#include <iostream>
using namespace std;
#include <string>
#include <algorithm> 
#include <vector>

int main(){

    int t;
    cin >> t;


    while(t--){

        
        long long a,b;
        cin >> a >> b;


        if(a-b>=2){                        //agar to difference even hua to 2 hee baar baar divide kr k us ko complete krdega and 2 hai b prime.. agar 2 se zyada b hua to atleat aik prime divisible hoga for example agar 3,6,9,12,15 wale aaye to prime 3 ko baar baar minus kiya ja skta hai... and other cases main b koi prime repeatedly divide ho skta.
            cout << "YES" << endl;
        }
        else{
            cout << " NO" << endl;
        }


    }

    return 0;

}








// 11 Prime Subtraction.cpp