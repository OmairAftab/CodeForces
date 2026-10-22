#include <iostream>
using namespace std;
#include <string>
#include <unordered_set>



int main(){

    int n;
    cin >> n;

    unordered_set<string> st;

    for (int i=0; i<n;i++){

//The species of a tree and the color are given in each line separated by a space. Dono inputs separate lene
        string specie;
        cin >> specie;

        string color;
        cin >> color;

        string combine=specie+","+color;     //added , to cover the test case like "a bab" & "ab ab"   so when combined they will be same "abab" so they will be counted as same otherwise and ansswer will come as 1 instead of correct answer 2 so i added , so now after concat they will be different like "a,bab" & "ab,ab" 

        st.insert(combine);
    }

    cout << st.size() << endl;
}