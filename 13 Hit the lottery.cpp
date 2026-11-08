#include <iostream>
using namespace std;
#include <string>
#include <algorithm> 
#include <vector>
#include <climits>
#include <unordered_map>



int main(){

    int n;
    cin >> n;


    vector<int> values={100,20,10,5,1};


    int count=0;

        for(int i=0;i<values.size();i++){
           
            if(n>=values[i]){
                count+=n/values[i];
                n=n%values[i];
            }
        }


        cout << count << endl;
    

}


//13 Hit the lottery.cpp