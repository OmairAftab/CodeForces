#include <iostream>
using namespace std;
#include <string>
#include <algorithm> 
#include <vector>
#include <climits>
#include <unordered_map>


int main(){

    int t;
    cin >> t;

    while(t--){

        int n,k;
        cin >> n >> k;

        cout << k+ (k-1)/(n-1) << endl;


    }
    return 0;
}


//17 K-th Not Divisible by n.cpp