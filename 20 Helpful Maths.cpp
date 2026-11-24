#include <iostream>
using namespace std;
#include <string>
#include <algorithm> 
#include <vector>
#include <climits>
#include <unordered_map>


int main(){


    string s;
    cin >> s;

    unordered_map<char,int> count;

    for(char c:s){
        if(c=='1') count['1']++;
        else if(c=='2') count['2']++;
        else if(c=='3') count['3']++;
    }

    string ans;

    while(count['1']!=0){
        ans+="1+";
        count['1']--;
    }

    while(count['2']!=0){
        ans+="2+";
        count['2']--;
    }

    while(count['3']!=0){
        ans+="3+";
        count['3']--;
    }

    ans.pop_back(); //to remove last +

    cout << ans << endl;


}