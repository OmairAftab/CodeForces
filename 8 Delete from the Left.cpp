#include <iostream>
using namespace std;
#include <string>



int main(){

    string s;
    cin >> s;

    string t;
    cin >> t;

    int i=s.size()-1;
    int j=t.size()-1;

    int sameprefixlength=0;


    while(i>=0 && j>=0 && s[i]==t[j]){
        sameprefixlength++;
        i--;
        j--;
    }

    int total=s.size()+t.size() - (2*sameprefixlength);


    cout<< total << endl;
}



//8 Delete from the Left.cpp