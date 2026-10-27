#include <iostream>
using namespace std;
#include <string>
#include <algorithm> 
#include <vector>
#include <climits>
#include <unordered_map>



int main(){

    int t;
    cin>>t;

  

    unordered_map<string,int> mp;
    int maximum=INT_MIN;
    string winner;

    while(t--){ 
        
        string goal;
        cin>>goal;

        mp[goal]++;

        if(mp[goal] > maximum) winner=goal;

        maximum=max(maximum,mp[goal]);
    }


    cout << winner;
}