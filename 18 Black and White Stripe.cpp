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

        //USING SUBSTRINGS. 
        // ACTUALLY WE WILL MADE SUBSTRING OF LENGTH K AND THEN IN THEM CHECK COUNT OF W AND KEEP TRACT OF LEAST NUMBER OF W IN ANY SUBSTRING AS WE WANT LOWEST NUMBER OF W WHICH WE CAN CHANGE TO B SO WE NEED LEADT COUNT OF W IN A SUBSTRING 


        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        int countW=0;        
        int minCount=INT_MAX;

        int left=0;


        for(int right=0; right < s.length(); right++){

            if(s[right]=='W') countW++;

            if((right-left)+1==k){
                
                minCount=min(minCount, countW);

                if(s[left]=='W') countW--;

                left++;
            }

        }

        cout << minCount << endl;
    }

}