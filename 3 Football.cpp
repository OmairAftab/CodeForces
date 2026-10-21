#include <iostream>
using namespace std;
#include <string>
#include <unordered_map>

int main (){

    string s;
    cin >> s;

    int max0=INT_MIN;
    int max1=INT_MIN;

    unordered_map<char,int> map0;
    unordered_map<char,int> map1;


    //for counting maximum number of consecutive 0s
    for(char c:s){
        if(c=='0'){
            map0[c]++;
            max0=max(max0,map0[c]);
        }
        else{                       //mean its not consective 0 so we revert the value of map0[0] to 0 so that next time when 0 appears the counting starts from 1 again
            map0['0']=0;
        }
    }


 //for counting maximum number of consecutive 1s
    for(char c:s){
        if(c=='1'){
            map1[c]++;
            max1=max(max1,map1[c]);
        }
        else{
            map1['1']=0;
        }
    }

    if(max1>=7 || max0>=7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}