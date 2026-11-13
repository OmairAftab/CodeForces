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

        unordered_map<int,int> freq;

        int a,b,c;
        cin >>a >>b >>c;
        freq[a]++;
        freq[b]++;
        freq[c]++;


        for(auto it:freq){
            if(it.second==1){
                cout << it.first <<endl;
            }   
        }

    }

    return 0;
}