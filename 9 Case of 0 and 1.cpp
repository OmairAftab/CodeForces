
#include <iostream>
using namespace std;
#include <string>
#include <unordered_map>



int main(){

    int n;
    cin >> n;

    string str;
    cin>> str;

    unordered_map <char, int> count0;
    unordered_map <char, int> count1;

    for(char c:str){
        if(c=='0'){
            count0['0']++;
        }
        else if(c=='1'){
            count1['1']++;
        }
    }


    int numberof0s=count0['0'];
    int numberof1s=count1['1'];

    //jitne number of 1s and number of 0s main difference hai wo hee answer hoga q k jitne same hon ge wo to accoding to question cancel ho jaen ge equal number of 1s and 0s

    cout << abs(numberof0s-numberof1s) << endl;
    
    
}








//9 Case of 0 and 1.cpp