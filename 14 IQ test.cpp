#include <iostream>
using namespace std;
#include <string>
#include <algorithm> 
#include <vector>
#include <climits>
#include <unordered_map>



int main(){

    int n;
    cin >>n;

    unordered_map<int,int> EvenMap;
    unordered_map<int,int> OddMap;

    for(int i=0;i<n;i++){

        int num;
        cin >> num;

        if(num%2==0){
            EvenMap[i]=num;
        }
        else{
            OddMap[i]=num;
        }
    }


    if(EvenMap.size()==1){
        for(auto it:EvenMap){
            cout << it.first+1;
        }
    }
    else{
        for(auto it:OddMap){
            cout << it.first+1;
        }
    }



    return 0;


}

//14 IQ test.cpp