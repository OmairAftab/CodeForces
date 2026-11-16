#include <iostream>
using namespace std;
#include <string>
#include <algorithm> 
#include <vector>
#include <climits>
#include <unordered_map>
#include <unordered_set>


int main(){

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;

        int left=0;
        unordered_map<char,int> mp;

        int minLength=INT_MAX;


        for(int right=0; right <s.size(); right++){

                mp[s[right]]++;

                while(mp['1']>0 && mp['2']>0 && mp['3']>0){

                    int currLength=(right-left)+1;

                    minLength=min(minLength, currLength);

                    mp[s[left]]--;

                    left++;
                }
        }

        
        if(minLength==INT_MAX){
            cout << 0 << endl;
        }
        else{
            cout << minLength << endl;
        }


    }

}